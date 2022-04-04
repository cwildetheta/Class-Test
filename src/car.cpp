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