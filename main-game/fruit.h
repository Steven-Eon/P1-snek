#ifndef FRUIT_H
#define FRUIT_H

#include <iostream>
using namespace std;

class Fruit
{
    private:
        Fruit();
        ~Fruit();
        int xPos, yPos;

    public:
        void ChangePos();
        void LocatePos();
        int GetX();
        int GetY();
};


#endif
