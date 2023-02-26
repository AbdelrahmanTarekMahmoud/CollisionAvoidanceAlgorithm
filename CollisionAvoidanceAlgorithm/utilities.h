/*
 =====================================================================================
 Name          : utilities.h
 Author        : Collision Avoidance Team
 Version       : Version 1.0
 Description   : Header file for utilities which we will use in the main algorithm
 =====================================================================================
 */

#ifndef UTILITIES_H
#define UTILITIES_H

//#include "RadarDistances.h"
#include "CriticalDistances.h"

#define pi 3.14159265358979323846
#define CAR_MASS 1400 
//char lane_change_flag=0;


#pragma once
 /*
 * Description : Convert Given Angle from Degree to Radian to be suitable for "Math.h" Library APIS
 * Parameters  : "AngleInDegree" The Angle which is wanted to be convert from Deg to rad
 */
double DegToRad(double AngleInDegree);
double RadToDeg(double AngleinRad);
double BrakeForce(FrontRadar FR);
double GetTriangleAngleInRad(double distanceX, double distanceY);
///*
//* Description : Convert Given diagonal Distance to Horizontal Distance using the Azimuth Angle
//* Parameters  : "Angle" The azimuth angle 
//*               "DiagonalDistance " the Diagonal distance which is needed to convert to horizontal Distance
//*/
double GetHorizontalDistance(double DiagonalDistance, double Angle);

///*
//* Description : Convert Given Horizontal Distance to diagonal Distance using the Azimuth Angle
//* Parameters  : "Angle" The azimuth angle
//*               "Horizontal " the Horizontal distance which is needed to convert to diagonal Distance
//*/
double GetDiagonalDistance(double VerticalDistance, double Angle);




#endif
