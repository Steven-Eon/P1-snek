#ifndef SNAKE_H
#define SNAKE_H

#include <iostream>
using namespace std;

class Snake
{
    private:
        int xPos, yPos;


    public:
        Snake(int intX, int intY);
        ~Snake();
        int getX();
        int getY();
        void changeX(int pos);
        void changeY(int pos);


};








#endif