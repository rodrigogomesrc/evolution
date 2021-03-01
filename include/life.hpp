#pragma once

class Life {

    protected:
        // 1 cycle is equivalent to 1 hour
        int lifeExpectance; // in cycles
        int age; // in cycles
        int id;

    public:

        virtual Life(int id, int lifeExpectance);
        virtual void setLifeExpectance( int lifeExpectance);
        virtual int getAge();
        virtual int getLifeExpectance();
        virtual bool isTimeToDie();
}