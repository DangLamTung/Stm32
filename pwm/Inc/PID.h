#ifndef PID_H_
#define PID_H_

float Kp, Ki, Kd;
float dt;
float P,I,D;
int PID_value;

volatile int dir;
volatile float err;
volatile float err_1;
volatile float err_2;

int PID(float setpoint, float input);

#endif
