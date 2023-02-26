/*
 ============================================================================
 Name          : RadarDistances.c
 Author        : Collision Avoidance Team
 Version       : Version 1.0
 Description   : Source file for the radar readings calculations
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "RadarDistances.h"


double GetDistanceFrontRadar(FrontRadar FR)
{
	return FR.range ;
}

double GetDistanceRightFrontRadar(RightFrontRadar RFR)
{
	return RFR.range ;
}

double GetDistanceLeftFrontRadar(LeftFrontRadar LFR)
{
	return LFR.range ;
}

double GetDistanceRightBackRadar(RightBackRadar RBR)
{
	return RBR.range ;
}

double GetDistanceLeftBackRadar(LeftBackRadar LBR)
{
	return LBR.range ;
}
