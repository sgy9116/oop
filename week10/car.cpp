#include "car.h"

car::car() : vehicle() {
	
}

car::car(int wheel_number, int max_speed) : vehicle(wheel_number, max_speed) {

}

car::car(int _wheel_number, int _max_speed, char* _car_name) : vehicle(_wheel_number, _max_speed) {
	car_name = _car_name;
}

car::car(int _wheel_number, int _max_speed, char* _car_name, bool _has_name) : vehicle(_wheel_number, _max_speed, _has_name) {
	car_name = _car_name;
}

char* car::get_car_name() {
	return car_name;
}

const char* car::get_class_name() {
	return "car";
}

void car::set_car_name(char* _car_name) {
	car_name = _car_name;
}
