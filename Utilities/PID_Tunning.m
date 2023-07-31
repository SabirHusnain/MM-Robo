TunedBlocks={'PID1', 'PID2', 'PID3', 'PID4', 'PID5', 'PID6'};
ST0=slTuner('Controller_Tunning', TunedBlocks);

addPoint(ST0,TunedBlocks);

addPoint(ST0,'Torque_Actuated_Manipulator/arm_q');

RefSignals={'Controller_Tunning/Step/q1',...
    'Controller_Tunning/Step1/q2',...
    'Controller_Tunning/Step2/q3',...
    'Controller_Tunning/Step3/q4',...
    'Controller_Tunning/Step4/q5',...
    'Controller_Tunning/Step5/q6'};
addPoint(ST0,RefSignals);

Controls=TunedBlocks;
Measurements='Controller_Tunning/Torque_Actuated_Manipulator/arm_q';
Options=looptuneOptions('RandomStart',80,'UseParallel',true);
TR=TuningGoal.StepTracking(RefSignals,Measurements,0.1,0);
ST1=looptune(ST0,Controls,Measurements,TR,Options);

writeBlockValue(ST1);