#include "CollisionAvoidanceAlgorithm.h"
/*
 =====================================================================================
 Name          : CollisionAvoidanceAlgorithm.c
 Author        : Collision Avoidance Team
 Version       : Version 1.0
 Description   : Source file for Main Collision Avoidance Algorithm
 =====================================================================================
 */
char CheckLaneStatus(DistanceFromScanCenter legacy_lane_marker) {
	if (legacy_lane_marker >= (float)1.870 && legacy_lane_marker <= (float)1.880) {
		lane_change_flag = 1;
	}
	else {
		lane_change_flag = 0;
	}
	return lane_change_flag;
}

void CollisionAvoidanceAlgorithm()
{

	legacy_lane_marker = 1.880;
	printf("%d" , CheckLaneStatus(legacy_lane_marker));
	if (GetDistanceFrontRadar(RF) == GetForwardDistance(RF))
	{
		if (((GetSafeDistanceLeftBackRadar(LBR)) >= (GetDistanceLeftBackRadar(LBR))) && (GetSafeDistanceLeftFrontRadar(LFR) >= GetDistanceLeftFrontRadar(LFR))) // check to enter manuever process or not 
		{
			/*LaneChanging_First_Flag = 1;*/
			SteeringAngle = GetTriangleAngleInRad(GetForwardDistance(RF), ROAD_WIDTH) + DegToRad(SAFE_FACTOR_ANGLE); // initial angle
			lane_change_flag=CheckLaneStatus(legacy_lane_marker); 	// param:laneMarker signal
			while((lane_change_flag==0)){
				if ((GetDistanceRightFrontRadar(RFR) <= GetSafeDistanceRightFrontRadar(RFR)) ) // Check right front has the safe distance
				{
					if (SteeringAngle <= 60)
					{
						//SteeringAngle = GetTriangleAngleInRad(GetForwardDistance(RF), ROAD_WIDTH);
						SteeringAngle += DegToRad(SAFE_FACTOR_ANGLE);
					}
				}
				lane_change_flag = CheckLaneStatus(legacy_lane_marker);
			}
				SteeringAngle =0;
				lane_change_flag=0;
		}
		else
		{
			while (GetDistanceFrontRadar(RF) <= GetForwardDistance(RF))
			{
				BrakeF = BrakeForce(RF); // Send it to control team
			} 
		}
	}
	//return_arr[0]=SteeringAngle;
	//return_arr[1]=BrakeF;
	//return return_arr;
}
