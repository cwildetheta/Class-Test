#include "../include/car.h"
#include <iostream>


void car::Start_engine()
{
    if(Engine_on == false){
        std::cout << "The engine turns on." << std::endl;
        Engine_on = true;
    }
    else{
        std::cout << "The engine is already on." << std::endl;
    }
}
void car::Stop_engine()
{
    if(Engine_on == true){
        std::cout << "The engine turns off." << std::endl;
        Engine_on = false;
    }
    else{
        std::cout << "The engine is already off." << std::endl;
    }
}
std::string car::adder(std::string str1, std::string str2)
{
    return (str1 + str2);
}
int car::adder(int num1, int num2)
{
    return (num1 + num2);
}

//SETS//
void car::set_car_make(std::string cmk)
{
    Make = cmk;
}
void car::set_car_model(std::string cmd)
{
    Model = cmd;
}
void car::set_engine_on(bool eng)
{
    Engine_on = eng;
}

//GETS//
std::string car::get_car_make()
{
    return Make;
}
std::string car::get_car_model()
{
    return Model;
}
bool car::get_engine_on()
{
    return Engine_on;
}