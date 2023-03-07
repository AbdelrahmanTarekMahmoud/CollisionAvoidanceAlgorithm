/*
 ============================================================================
 Name          : CriticalDistances.c
 Author        : Collision Avoidance Team
 Version       : Version 1.0
 Description   : Source file for the Critical Distances calculations
 ============================================================================
 */

#include "CriticalDistances.h"

/* function to determine the threshold distance at which our system is triggered */
double GetForwardDistance(FrontRadar FR)   
{
	return FR.doppler_velocity * SAFE_TIME;
}

/* function to determine the brake distance needed according to the readings of Right Front Radar */
double GetBrakeDistanceRightFrontRadar(double velocity)
{
	return (velocity * velocity) / (250 * FRICTION_FACTOR);
}

/* function to calculate the safe distance needed according to the velocity from Right Front Radar */
double GetSafeDistanceRightFrontRadar(RightFrontRadar RFR)
{
	double BrakeDistance = GetBrakeDistanceRightFrontRadar(RFR.doppler_velocity);
	return 1.5 * BrakeDistance;
}

/* function to determine the brake distance needed according to the readings of Right Back Radar */
double GetBrakeDistanceRightBackRadar(double velocity)
{
	return (velocity * velocity) / (250 * FRICTION_FACTOR);
}

/* function to calculate the safe distance needed according to the velocity from Right Back Radar */
double GetSafeDistanceRightBackRadar(RightBackRadar RBR)
{
	double BrakeDistance = GetBrakeDistanceRightBackRadar(RBR.doppler_velocity);
	return 1.5 * BrakeDistance;
}

/* function to determine the brake distance needed according to the readings of Left Back Radar */
double GetBrakeDistanceLeftBackRadar(double velocity)
{
	return (velocity * velocity) / (250 * FRICTION_FACTOR);
}

/* function to calculate the safe distance needed according to the velocity from Left Back Radar */
double GetSafeDistanceLeftBackRadar(LeftBackRadar LBR)
{
	double BrakeDistance = GetBrakeDistanceLeftBackRadar(LBR.doppler_velocity);
	return 1.5 * BrakeDistance;
}

/* function to determine the brake distance needed according to the readings of Left Front Radar */
double GetBrakeDistanceLeftFrontRadar(double velocity)
{
	return (velocity * velocity) / (250 * FRICTION_FACTOR);
}

/* function to calculate the safe distance needed according to the velocity from Left Front Radar */
double GetSafeDistanceLeftFrontRadar(LeftFrontRadar LFR)
{
	double BrakeDistance = GetBrakeDistanceLeftBackRadar(LFR.doppler_velocity);
	return 1.5 * BrakeDistance;
}


