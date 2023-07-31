clear; clc; close all;

%% Loading Rigid Body Model
createRigidBodyTree;

%% Simulation Parameters
stopTime=31;
TsCtrl=0.005;
TsWaypoint=0.001;
gripper_force=200;
filterCoeff=0.01;

%% Manipulator Parameters
% Joint Angle Limits
manip.jointLimit.One.L=-2*pi;
manip.jointLimit.One.U=2*pi;
manip.jointLimit.Two.L=-2*pi;
manip.jointLimit.Two.U=2*pi;
manip.jointLimit.Three.L=-2*pi;
manip.jointLimit.Three.U=2*pi;
manip.jointLimit.Four.L=-2*pi;
manip.jointLimit.Four.U=2*pi;
manip.jointLimit.Five.L=-2*pi;
manip.jointLimit.Five.U=2*pi;
manip.jointLimit.Six.L=-2*pi;
manip.jointLimit.Six.U=2*pi;
manip.jointLimit.Seven.L=-2*pi;
manip.jointLimit.Seven.U=2*pi;

% Joint Torque Limits
manip.joinTorque.One.L=-3000;
manip.joinTorque.One.U=3000;
manip.joinTorque.Two.L=-5000;
manip.joinTorque.Two.U=5000;
manip.joinTorque.Three.L=-2500;
manip.joinTorque.Three.U=2500;
manip.joinTorque.Four.L=-2000;
manip.joinTorque.Four.U=2000;
manip.joinTorque.Five.L=-1500;
manip.joinTorque.Five.U=1500;
manip.joinTorque.Six.L=-1300;
manip.joinTorque.Six.U=1300;
manip.joinTorque.Seven.L=-1200;
manip.joinTorque.Seven.U=1200;

%% Cart Parameters
cartParam.TireRadius=0.31728;
cartParam.DistanceBwTires=1.28526571;
cartParam.Height=cartParam.TireRadius+0.43525249;
cartParam.motorSpeed=20;
cartParam.Initial.X=10;
cartParam.Initial.Y=19;
cartParam.Initial.Phase=0;

%% Weight Bale Parameters
baleParam.Radius=0.18288;
baleParam.Length=0.6096;
baleParam.Mass=5;
bale.One.X=3;
bale.One.Y=7;
bale.One.Rot=[0 -90 0];
bale.Two.X=15;
bale.Two.Y=13;
bale.Two.Rot=[90 -90 0];

%% Floor Parameters
floorParam.X=20;
floorParam.Y=20;

%% Pjhysical Contact Parameters (Physics)
contactFloor.Stiffness=10000000;
contactFloor.Damping=100000;
contactFloor.sFrictionCoeff=0.3;
contactFloor.kFrictionCoeff=0.1;

contactGripper.Stiffness=50000000;
contactGripper.Damping=500000;
contactGripper.sFrictionCoeff=100;
contactGripper.kFrictionCoeff=99;

contactGripper.ArmPlane.X=baleParam.Radius*2;
contactGripper.ArmPlane.Y=baleParam.Length;

%% Cart Trajectory
cart.traj.tol=0.0005;

cart.traj.wp=[cartParam.Initial.X 10 5 4 4 4 10 10 10 12 15 15 15 10 10 10;
              cartParam.Initial.Y 10 7 7 7 6 06 01 01 01 10 12 12 12 01 01];
cart.traj.tp=[0 1.5 3 4 9 9.5 10.5 11.5 16.5 17 18 19 24 25 26 31];
cart.traj.vbc=[0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0;
               0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0];

cart.traj.moveManip=[0 0 0 1 0 0 0 -1 0 0 0 1 0 0 -1 0];

cart.traj.dt=0.01;
cart.traj.time=0:cart.traj.dt:stopTime;

[cart.traj.q, cart.traj.qd, cart.traj.qdd, cart.traj.pp] = cubicpolytraj(cart.traj.wp, ...
    cart.traj.tp, ...
    cart.traj.time, ...
    'VelocityBoundaryCondition', cart.traj.vbc);

cart.traj.qd=-sqrt(cart.traj.qd(1,:).^2+cart.traj.qd(2,:).^2);

cart.traj.q_diff=diff(cart.traj.q');
cart.traj.q_diff=[0 0;cart.traj.q_diff]';

for i=1:length(cart.traj.time)
    cart.traj.th(i)=pi-atan2(cart.traj.q_diff(1,i),cart.traj.q_diff(2,i));
    while abs(cart.traj.th(i))>pi
        if cart.traj.th(i)>0
            cart.traj.th(i)=cart.traj.th(i)-2*pi;
        else
            cart.traj.th(i)=cart.traj.th(i)+2*pi;
        end
    end
end
clear i;

cart.traj.th(1)=cartParam.Initial.Phase;

temp_diff=diff(cart.traj.wp')';

for i=1:size(temp_diff,2)
    if(~any(temp_diff(:,i)))
        temp_time_start= find(cart.traj.time==cart.traj.tp(i));
        temp_time_stop= find(cart.traj.time==cart.traj.tp(i+1));
        cart.traj.th(temp_time_start:temp_time_stop)=cart.traj.th(temp_time_start-1);
    end
end

cart.traj.traj=[cart.traj.q' cart.traj.qd' cart.traj.th']';
cart.traj.wp=[cart.traj.wp;cart.traj.moveManip];

% figure; plot(cart.traj.time,cart.traj.q,cart.traj.time,cart.traj.th)
% figure; plot(cart.traj.q(1,:),cart.traj.q(2,:));

%% Manipulator Trajectory
manip.traj.tol=0.005;

manip.traj.wp.arm=[0     0         0         0     0     0     0     0         0         0    0     0     0         0         0     0     0     0     0         0         0   0;
                  -0.75 -1+0.2032 -1+0.2032 -0.75 -0.75 -0.75 -0.5  -1-0.0532 -1-0.3032 -0.6 -0.75 -0.75 -1+0.2032 -1+0.2032 -0.75 -0.75 -0.75 -0.5  -1-0.0532 -1-0.3032 -0.6 -0.75;
                   0.25 -0.5      -0.5      -0.25  0.25  0.25  0.35  0.95      0.95      0.5  0.25  0.25 -0.5      -0.5      -0.25  0.25  0.25  0.35  0.95      0.95      0.5  0.25];

manip.traj.vbc.arm=[0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0;
                    0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0;
                    0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0];

manip.traj.wp.grip=[0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0;
                    0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0;
                    0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0];

manip.traj.vbc.grip=[0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0;
                     0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0;
                     0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0];

manip.traj.tp=[4.5 5.5 6.5 7.5 8.5 11.5 12 13 14 14.5 15.5 19.5 20.5 21.5 22.5 23.5 26 27.5 28.5 29 30 30.5];

manip.traj.grip=[0 1 1 1 1 1 1 1 0 0 0 0 1 1 1 1 1 1 0 0 0 0];

manip.traj.dt=0.01;
manip.traj.time=0:manip.traj.dt:stopTime;

[manip.traj.q.arm, manip.traj.qd.arm, manip.traj.qdd.arm, manip.traj.pp.arm] = cubicpolytraj(manip.traj.wp.arm, ...
    manip.traj.tp, ...
    manip.traj.time, ...
    'VelocityBoundaryCondition', manip.traj.vbc.arm);

[manip.traj.q.grip, manip.traj.qd.grip, manip.traj.qdd.grip, manip.traj.pp.grip] = cubicpolytraj(manip.traj.wp.grip, ...
    manip.traj.tp, ...
    manip.traj.time, ...
    'VelocityBoundaryCondition', manip.traj.vbc.grip);

manip.traj.wp.wp=[manip.traj.wp.arm;manip.traj.wp.grip;manip.traj.grip];
manip.traj.traj=[manip.traj.q.arm' manip.traj.q.grip']';