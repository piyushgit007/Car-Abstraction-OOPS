#include "Car.h"
#include<iostream>


Car::Car()
{
	std::cout << "Car()" << std::endl;
	fuel = 0;
	speed = 0;
	passengers = 0;
}

Car::~Car()
{
	std::cout << "~Car()" << std::endl;
}

Car::Car(float amount)
{
	fuel = amount;
	speed = 0;
	passengers = 0;

}

void Car::FillFuel(float amount)
{
	fuel = amount;
}

void Car::Accelerate()
{
	speed++;
	fuel -= 0.5f;
}

void Car::Brake()
{
	speed = 0;

}

void Car::Addpassengers(int count)
{
	passengers = count;
}

void Car::Dashboard()
{
	using namespace std;
	cout << "Fuel : " << fuel << endl;
	cout << "Speed : " << speed << endl;
	cout << "Passengers :" << passengers << endl;
}
