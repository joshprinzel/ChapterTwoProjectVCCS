#include <iostream>
#include <string>
#include <algorithm>
const float HIGHWAYMILEAGE = 28.9;
const float TOWNMILEAGE = 23.5;

//Takes a string as an input and converts it to lowercase letters
std::string to_lower(std::string &input) {
	std::transform(input.begin(), input.end(), input.begin(), ::tolower);
	return input;
}

float compute_distance(float gallons, const std::string& driving_type) {
	if (driving_type == "highway") {
		return gallons * HIGHWAYMILEAGE;
	}
	else if (driving_type == "town") {
		return gallons * TOWNMILEAGE;
	}
	else {
		return -1.0f; //Invalid Input Checking
	}
}

int gas_distance() {
	float gallons;
	std::string destination;


	std::cout << "How many gallons does your car have?: ";
	std::cin >> gallons;

	std::cout << "Highway or Town?:";
	std::cin >> destination;
	//Calls the to_lower function and converts destination to lowercase
	destination = to_lower(destination);

	float distance = compute_distance(gallons, destination);
	if (distance < 0) {
		std::cerr << "Invalid driving type entered. Please enter highway or town";
		return 1;
	}
	std::cout << "Estimated distance per tank: " << distance << " miles" << std::endl;
	return 0;


}