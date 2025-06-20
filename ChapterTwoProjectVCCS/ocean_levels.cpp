#include <iostream>


void main() {
	//The number of milimeters the ocean rises every year
	const float OCEAN_RISING = 1.5;

	int years[3] = { 5,7,10 };

	// Takes each year in the array and displays the year and the amount the ocean has risen
	for (auto year:years) {
		float total_rise = year * OCEAN_RISING;
		std::cout << "Year: " << year << std::endl;
		std::cout << "Amount Ocean Rose: " << total_rise << std::endl;
	}


}