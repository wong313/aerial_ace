//=====================================================================================================
#ifndef CalculateGestures_h
#define CalculateGestures_h

#include "utils.h"

//----------------------------------------------------------------------------------------------------
// Variable declaration


//---------------------------------------------------------------------------------------------------
// External declarations



//---------------------------------------------------------------------------------------------------
// Function declarations

int analog_read(int);
void calculate_gestures();
int detect_gestures(float*);
float calculate_finger_angle(int);

#endif
//=====================================================================================================
// End of file
//=====================================================================================================