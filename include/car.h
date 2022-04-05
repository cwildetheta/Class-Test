#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include "../include/vehicle.h"
#include <string>

class car : public vehicle{
    private:
        std::string Make, Model, Colour, Fuel_type;
        int Age, Horsepower, Num_seat, Num_door, Num_gear, Num_wheel, Weight, Current_gear;
        float Fuel_capacity, Fuel_current, Fuel_efficiency, Battery_charge, Miles_travelled;
        bool Has_boot, Has_bonnet, Engine_on;

    public:
        void Start_engine();
        void Stop_engine();
        void Move();
        int Accelerate();
        int Decelerate();
        void Break_down();
        void Turn();
        int Change_gear();
        bool Toggle_door();
        bool Toggle_boot();
        float Refuel_car();
        void Catch_fire();
        void Change_tyre();
        void set_car_make(std::string);
        void set_car_model(std::string);
        void set_engine_on(bool);
        std::string get_car_make();
        std::string get_car_model();
        bool get_engine_on();

        std::string adder(std::string, std::string);
        int adder(int, int);
};

#endif //CAR_H_INCLUDED