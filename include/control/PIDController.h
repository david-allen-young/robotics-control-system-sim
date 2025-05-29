#pragma once

class PIDController
{
public:
	double update(double target, double actual);
private:
	double kp, ki, kd;
	double prevError = 0;
	double integral = 0;
};