%% Mobile Manipualtor Simulation
clear; clc; close all;

% Startup
addpath(genpath(pwd));

% Set the simulation cache folder to a work folder
if ~isfolder('Cache')
    mkdir('Cache')
end
Simulink.fileGenControl('set','CacheFolder','Cache');

ver=version;

if str2double(ver(end-5:end-2))>=2023
    Top_Level_Simulation;
elseif str2double(ver(end-5:end-2))>=2021
    Top_Level_Simulation_2021;
else
    Top_Level_Simulation_2019;
end