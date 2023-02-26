#pragma once
/*
 =====================================================================================
 Name          : CollisionAvoidanceAlgorithm.h
 Author        : Collision Avoidance Team
 Version       : Version 1.0
 Description   : Header file for Main Collision Avoidance Algorithm
 =====================================================================================
 */

#ifndef COLLISIONAVODIANCEALGORITHM_H
#define COLLISIONAVODIANCEALGORITHM_H

#include "utilities.h"
//#include "CriticalDistances.h"

#define ROAD_WIDTH 3.75
#define SAFE_FACTOR_ANGLE 5

typedef enum { KEEP, RIGHT, LEFT } direction;
direction Dir = KEEP;

FrontRadar       RF = { 1, 2 , 3 };
RightFrontRadar  RFR = { 4 , 5 ,6  };
LeftFrontRadar   LFR = { 7 , 8 , 9 };
RightBackRadar   RBR = { 10 , 11 , 12 };
LeftBackRadar    LBR = { 13 , 14 ,15 };

typedef float DistanceFromScanCenter;
DistanceFromScanCenter legacy_lane_marker  ;

char OverTaking_Flag = 0;
char LaneChanging_First_Flag = 0;
char LaneChanging_Second_Flag = 0;
char lane_change_flag = 0;


double SteeringAngle = 0;
double BrakeF;

float return_arr[2]={0};


void CollisionAvoidanceAlgorithm();
char CheckLaneStatus();

#endif
