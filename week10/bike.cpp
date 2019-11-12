#include "bike.h"

bike::bike() : vehicle() {
	
}

bike::bike(int _wheel_number, int _max_speed) : vehicle(_wheel_number, _max_speed) {

}

bike::bike(int _wheel_number, int _max_speed, char* _bike_name) : vehicle(_wheel_number, _max_speed) {
	bike_name = _bike_name;
}

bike::bike(int _wheel_number, int _max_speed, char* _bike_name, int _bike_number) : vehicle(_wheel_number, _max_speed) {
	bike_name = _bike_name;
	bike_number = _bike_number;
}

bike::bike(int _wheel_number, int _max_speed, char* _bike_name, int _bike_number, bool _has_name) : vehicle(_wheel_number, _max_speed, _has_name) {
	bike_name = _bike_name;
}

int bike::get_bike_number() {
	return bike_number;
}

char* bike::get_bike_name() {
	return bike_name;
}

const char* bike::get_class_name() {
	return "bike";
}

void bike::set_bike_name(char* bike_name) {
	bike_name = bike_name;
}

void bike::set_bike_number(int bike_number) {
	bike_number = bike_number;
}
