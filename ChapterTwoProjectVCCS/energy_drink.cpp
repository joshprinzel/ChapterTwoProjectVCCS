#include <iostream>
#include <cassert>

const int TOTAL_CUSTOMERS = 16500;
const float PURCHASE_RATE = 0.15f;
const float CITRUS_RATE = 0.58f;


//Takes total customers and multiplies it by purchase rate. Then converts to an int because you can not have a percentage of a customer
int calculate_energy_customers(int customers, float purchase_rate) {
	return static_cast<int>(customers * purchase_rate);
}
//Takes energy drink customers and multiplies it by citrus preference rate. Then converts to an int
int calculate_citrus(int energy_drink_customers, float citrus_rate) {
	return static_cast<int>(energy_drink_customers * citrus_rate);

}

void energy_drink_survey() {
	int energy_drink_customers = calculate_energy_customers(TOTAL_CUSTOMERS, PURCHASE_RATE);
	int citrus_pref = calculate_citrus(energy_drink_customers, CITRUS_RATE);

	std::cout << "Approximate number of customers purchasing energy drinks: " 
		<< energy_drink_customers << std::endl;

	std::cout << "Approximate number of energy drink customers preferring citrus flavor: "
		<< citrus_pref << std::endl;

}



void run_energy_tests() {
	assert(calculate_energy_customers(10000, 0.10f) == 1000);
	assert(calculate_citrus(1000, 0.5f) == 500);
	assert(calculate_energy_customers(16500, 0.15f) == 2475);
	assert(calculate_citrus(2475, 0.58f) == 1435);
	std::cout << "All test passed!\n";
}