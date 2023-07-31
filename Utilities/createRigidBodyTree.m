if exist('manipulatorRigidBodyTree.mat', 'file')
    load('manipulatorRigidBodyTree.mat');
else
    [manipulator_tree, manipulator_info]=importrobot('Manipulator_Rigid_Body');
    save('Utilities\manipulatorRigidBodyTree.mat','manipulator_info','manipulator_tree');
end
