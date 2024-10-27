#pragma once
class Car {

private:
	float fuel;
	float speed;
	int passengers;

public:
	Car();
	~Car();
	Car(float amount);
	void FillFuel(float amount);
	void Accelerate();
	void Brake();
	void Addpassengers(int count);
	void Dashboard();

};