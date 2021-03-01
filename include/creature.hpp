#pragma once

#include "life.hpp"

class Creature : public Life {

    protected:
        int velocityIndice:
        int velocity;
        unsigned short maxFood;
        unsigned short energy;
        int reproductiveAge;

    public:

        //Constructor only inheritable (as per the simulator logic) characteristcs or id
        Creature(int id, int velocityIndice, int velocity, int maxFood, int reproductiveAge);
        void move();
        int getVelocityIndice();
        int getVelocity();
        int getEnergy();
        bool isReproducible();

}