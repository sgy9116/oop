#include "vehicle.h"

vehicle::vehicle() {
	has_name = false;
}

vehicle::vehicle(int _wheel_number, int _max_speed) {
	wheel_number = _wheel_number;
	max_speed = _max_speed;
}

vehicle:: vehicle(int _wheel_number, int _max_speed, bool _has_name) {
	wheel_number = _wheel_number;
	max_speed = _max_speed;
	has_name = _has_name;
}


int vehicle::get_wheel_number() {
	return wheel_number;
}

int vehicle::get_max_speed() {
	return max_speed;
}

bool vehicle::get_has_name() {
	return has_name;
}

const char* vehicle::get_class_name() {
	return "vehicle";
}

void vehicle::set_wheel_number(int _wheel_number) {
	wheel_number = _wheel_number;
}

void vehicle::set_max_speed(int _max_speed) {
	max_speed = _max_speed;
}

void vehicle::set_has_name(bool _has_name) {
	has_name = _has_name;
}

