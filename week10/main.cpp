#include <iostream>
#include "vehicle.h"
#include "car.h"
#include "bike.h"

int main() {
	std::cout << "Vehicle Test" << std::endl;
	{
		vehicle* p = new vehicle();
		vehicle* q = new vehicle(1, 101);
		vehicle* r = new vehicle(2, 102);
		p->set_wheel_number(1);
		p->set_max_speed(100);
		std::cout << "p's get_wheel_number() " << p->get_wheel_number() << std::endl;
		std::cout << "p's get_max_speed() " << p->get_max_speed() << std::endl;
		std::cout << "p's get_has_name() " << p->get_has_name() << std::endl;
		std::cout << "p's get_class_name() " << p->get_class_name() << std::endl;
	}

	std::cout << "Car Test" << std::endl;
	{
		car* p = new car();
		car* q = new car(3, 103);
		car* r = new car(4, 104, "carA");
		car* s = new car(5, 105, "carB");

		p->set_car_name("carC");
		
		std::cout << "p's get_wheel_number() " << p->get_wheel_number() << std::endl;
		std::cout << "p's get_max_speed() " << p->get_max_speed() << std::endl;
		std::cout << "p's get_has_name() " << p->get_has_name() << std::endl;
		std::cout << "p's get_car_name() " << p->get_car_name() << std::endl;
		std::cout << "p's get_class_name() " << p->get_class_name() << std::endl;
	}

	std::cout << "Bike Test" << std::endl;
	{
		bike* p = new bike();
		bike* q = new bike(6, 106);
		bike* r = new bike(7, 107, "bikeA");
		bike* s = new bike(8, 108, "bikeB", 1111);
		bike* t = new bike(9, 109, "bikeC", 2222);

		p->set_bike_name("bikeD");
		p->set_bike_number(3333);


		std::cout << "p's get_wheel_number() " << p->get_wheel_number() << std::endl;
		std::cout << "p's get_max_speed() " << p->get_max_speed() << std::endl;
		std::cout << "p's get_has_name() " << p->get_has_name() << std::endl;
		std::cout << "p's get_bike_name() " << p->get_bike_name() << std::endl;
		std::cout << "p's get_bike_number() " << p->get_bike_number() << std::endl;
		std::cout << "p's get_class_name() " << p->get_class_name() << std::endl;
	}
}
