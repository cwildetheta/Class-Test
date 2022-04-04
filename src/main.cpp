#include "../include/car.h"
#include <iostream>
#include <string>


int main()
{
    system("cls");
    car my_car;

    my_car.Make = "Reno";
    my_car.Model = "Cleo";
    my_car.Engine_on = false;

    std::cout << "I get in my " << my_car.Make << " " << my_car.Model << ". I turn the key." << std::endl;
    my_car.Start_engine();
    std::cout << "I turn the key again the same way." << std::endl;
    my_car.Start_engine();

    return 0;
}