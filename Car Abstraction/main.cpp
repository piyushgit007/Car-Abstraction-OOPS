#include "Car.h"

int main()
{
	Car car(4);
	//car.FillFuel(6);
	car.Accelerate();
	car.Accelerate();
	car.Accelerate();
	car.Accelerate();
	car.Dashboard();
	car.Brake();

	return 0;
}