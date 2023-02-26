#pragma once

/*
 ============================================================================
 Name          : CriticalDistances.h
 Author        : Collision Avoidance Team
 Version       : Version 1.0
 Description   : Header file for the Critical Distances calculations
 ============================================================================
 */

#ifndef CRITICALDISTANCE_H
#define CRITICALDISTANCE_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "RadarDistances.h"

#define SAFE_TIME 	    3   /* Safe Time Based on "Three Time Rule"*/
#define FRICTION_FACTOR 0.8 /* Assuming the car is moving at Asphalt*/


/*
* Description : Calculate the "critical forward distance" which if we exceed we will take a action
* Parameters  : "DopplerVelocity" The relative speed between our car and the car infront of us
*        
*/
double GetForwardDistance(FrontRadar FR);


/*
* Description : Calculate the "Brake Distance" which will be used to calculate "The Safe Distance"
* Parameters  : "DopplerVelocity" The relative speed between our car and the car infront of us
*
*/
double GetBrakeDistanceRightFrontRadar(double velocity);
/*
* Description : Calculate the "Right Front Radar Safe Distance" which will help us in "First OverTake"
* Parameters  : "DopplerVelocity" The relative speed between our car and the car infront of us
*
*/
double GetSafeDistanceRightFrontRadar(RightFrontRadar RFR);




/*
* Description : Calculate the "Brake Distance" which will be used to calculate "The Safe Distance"
* Parameters  : "DopplerVelocity" The relative speed between our car and the car infront of us
*
*/
double GetBrakeDistanceRightBackRadar(double velocity);
/*
* Description : Calculate the "Right Back Radar Safe Distance" which will help us in "Second OverTake"
* Parameters  : "DopplerVelocity" The relative speed between our car and the car infront of us
*
*/
double GetSafeDistanceRightBackRadar(RightBackRadar RBR);




/*
* Description : Calculate the "Brake Distance" which will be used to calculate "The Safe Distance"
* Parameters  : "DopplerVelocity" The relative speed between our car and the car infront of us
*
*/
double GetBrakeDistanceLeftBackRadar(double velocity);
/*
* Description : Calculate the "Left Back Radar Safe Distance" which will help us in "Taking The manuever Descision"
* Parameters  : "DopplerVelocity" The relative speed between our car and the car infront of us
*
*/
double GetSafeDistanceLeftBackRadar(LeftBackRadar LBR);


double GetBrakeDistanceLeftFrontRadar(double velocity);
double GetSafeDistanceLeftFrontRadar(LeftFrontRadar LFR);








#endif