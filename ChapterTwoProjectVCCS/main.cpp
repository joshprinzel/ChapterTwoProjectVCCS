/*
* This file is used for launching each seperate project
* Ran into a multiple main in solution error so this is in response to that 
* 
* Steps:
* Uncomment a project to let it run
* This calls the other file to run the function needed
* Displays Output Text
*/

//Function Declarations So The Compiler Knows About It. Normally would use CMAKE for this but since this is a small project I did it manually
//Project 1 Ocean Rising Main Logic
void ocean_project();
//UNIT Tests for Project 1
void test_ocean_project();
//Project 2 Distance Per Tank of Gas Main Logic
int gas_distance();
// UNIT Tests for Project 2
void run_gas_tests();
//Project 3 Energy Drink 
void energy_drink_survey();
//UNIT Tests for Project 3
void run_energy_tests();

int main() {
    //ocean_project();
	//test_ocean_project();
	//gas_distance();
	//run_gas_tests();
	//energy_drink_survey();
	//run_energy_tests();
	return 0;
}