#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include <string>

class car {
    public:
        std::string Make, Model, Colour, Fuel_type;
        int Age, Horsepower, Num_seat, Num_door, Num_gear, Num_wheel, Weight, Current_gear;
        float Fuel_capacity, Fuel_current, Fuel_efficiency, Battery_charge, Miles_travelled;
        bool Has_boot, Has_bonnet, Engine_on;

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
};

#endif //CAR_H_INCLUDED