#include "../include/car.h"
#include "../include/motorbike.h"
#include <iostream>
#include <string>

template <typename T>
T adder(T int1, T int2)
{
    return int1 + int2;
}

int main()
{
    system("cls");
    car my_car;

    my_car.set_car_make("Reno");
    my_car.set_car_model("Cleo");
    my_car.set_engine_on(false);

    std::cout << "I get in my " << my_car.get_car_make() << " " << my_car.get_car_model() << ". I turn the key." << std::endl;
    my_car.Start_engine();
    std::cout << "I turn the key again the same way." << std::endl;
    my_car.Start_engine();

    std::cout << adder<int>(10, 10) << std::endl;
    my_car.Turn_on_radio();

    motorbike my_motorbike;
    my_motorbike.Turn_on_radio();

    //std::cout << my_car.adder("Hello ", "World") << std::endl;
    //std::cout << my_car.adder(2, 4) << std::endl;

    return 0;
}