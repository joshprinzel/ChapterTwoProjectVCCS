#include <iostream>
#include <cassert>
//The number of milimeters the ocean rises every year
const float OCEAN_RISING = 1.5;

//Computes ocean rise for given number of years
float compute_oceanrise(float years) {
	return years * OCEAN_RISING;
}
void ocean_project() {
	
	float years[3] = { 5.0,7.0,10.0 };

	// Takes each year in the array and displays the year and the amount the ocean has risen
	for (auto year:years) {
		float total_rise = compute_oceanrise(year);
		std::cout << "Year: " << year << std::endl;
		std::cout << "Amount Ocean Rose: " << total_rise << std::endl;
	}


}
//Test cases for each year and compares computed vs. expected
void test_ocean_project() {
	assert(compute_oceanrise(5) == 7.5f);
	assert(compute_oceanrise(7) == 10.5f);
	assert(compute_oceanrise(10) == 15.0f);
}