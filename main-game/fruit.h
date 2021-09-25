#ifndef FRUIT_H
#define FRUIT_H

#include <iostream>
using namespace std;

class Fruit
{
    private:
        int xPos, yPos;

    public:
        Fruit();
        ~Fruit();
        void ChangePos();
        void LocatePos();
        int GetX();
        int GetY();
};



#endif
