/*
 ============================================================================
 Name          : CriticalDistances.c
 Author        : Collision Avoidance Team
 Version       : Version 1.0
 Description   : Source file for the Critical Distances calculations
 ============================================================================
 */

#include "CriticalDistances.h"

double GetForwardDistance(FrontRadar FR)
{
	return FR.doppler_velocity * SAFE_TIME;
}

double GetBrakeDistanceRightFrontRadar(double velocity)
{
	return (velocity * velocity) / (250 * FRICTION_FACTOR);
}

double GetSafeDistanceRightFrontRadar(RightFrontRadar RFR)
{
	double BrakeDistance = GetBrakeDistanceRightFrontRadar(RFR.doppler_velocity);
	return 1.5 * BrakeDistance;
}

double GetBrakeDistanceRightBackRadar(double velocity)
{
	return (velocity * velocity) / (250 * FRICTION_FACTOR);
}

double GetSafeDistanceRightBackRadar(RightBackRadar RBR)
{
	double BrakeDistance = GetBrakeDistanceRightBackRadar(RBR.doppler_velocity);
	return 1.5 * BrakeDistance;
}

double GetBrakeDistanceLeftBackRadar(double velocity)
{
	return (velocity * velocity) / (250 * FRICTION_FACTOR);
}

double GetSafeDistanceLeftBackRadar(LeftBackRadar LBR)
{
	double BrakeDistance = GetBrakeDistanceLeftBackRadar(LBR.doppler_velocity);
	return 1.5 * BrakeDistance;
}

double GetBrakeDistanceLeftFrontRadar(double velocity)
{
	return (velocity * velocity) / (250 * FRICTION_FACTOR);
}

double GetSafeDistanceLeftFrontRadar(LeftFrontRadar LFR)
{
	double BrakeDistance = GetBrakeDistanceLeftBackRadar(LFR.doppler_velocity);
	return 1.5 * BrakeDistance;
}


