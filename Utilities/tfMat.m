function T=tfMat(varargin)
theta=varargin{1};

T=eye(4);

if ~isnan(theta)
    T_x=[1 0 0 0;
        0 cos(theta(1)) -sin(theta(1)) 0;
        0 sin(theta(1)) cos(theta(1)) 0;
        0 0 0 1];
    T_y=[cos(theta(2)) 0 sin(theta(2)) 0;
        0 1 0 0;
        -sin(theta(2)) 0 cos(theta(2)) 0;
        0 0 0 1];
    T_z=[cos(theta(3)) -sin(theta(3)) 0 0;
        sin(theta(3)) cos(theta(3)) 0 0;
        0 0 1 0;
        0 0 0 1];

    T=T_x*T_y*T_z;
end

if nargin==2
    theta=varargin{1};
    dis=varargin{2};

    T_a=[1 0 0 dis(1);
        0 1 0 dis(2);
        0 0 1 dis(3);
        0 0 0 1];

    T=T*T_a;
    return
end
end