/*
 =================================================================================
 Name          : utilities.c
 Author        : Collision Avoidance Team
 Version       : Version 1.0
 Description   : Source file for utilities which we will use in the main algorithm
 =================================================================================
 */

#include "utilities.h"

double DegToRad(double AngleInDegree)
{
	double AngleInRad = AngleInDegree * (pi / 180.00);
	return AngleInRad;
}

double RadToDeg(double AngleinRad)
{
	double AngleInDegree = AngleinRad * (180.00 / pi);
	return AngleInDegree;
}

double BrakeForce(FrontRadar FR)
{
	double BrakeF = 0.5 * ((CAR_MASS * (FR.doppler_velocity * FR.doppler_velocity)) / GetForwardDistance(FR));
	return BrakeF;
}

double GetTriangleAngleInRad(double distanceX, double distanceY)
{
	double angle = atan(distanceY / distanceX);
	return angle;
}

double GetHorizontalDistance(double DiagonalDistance, double Angle)
{
	double AngleInRad = DegToRad(Angle);
	double HorizontalDistance = DiagonalDistance * sin(AngleInRad);
	return HorizontalDistance;
}


double GetDiagonalDistance(double VerticalDistance, double Angle)
{
	double AnlgeInRad = DegToRad(Angle);
	double diagonal_distance = VerticalDistance / sin(AnlgeInRad);
	return diagonal_distance;
}

