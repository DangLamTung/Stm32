#include "PID.h"

int PID(float setpoint, float input){
	Kp = 20;
	Kd = 1;
	Ki = 0;

	err = input - setpoint;

	if(err > 0)
		dir = 1;
	else
		dir = -1;
	P = Kp*(err);
	I = 0.5*Ki*dt*(err + err_1);
	D = Kd/dt*(err - 2*err_1 + err_2);

    err_1 = err;
    err_2 = err_1;
    PID_value = 360 + (int) (P + I + D)*dir;
    return PID_value;
}
