#include <iostream>
#include "snake.h"

using namespace std;

Snake::Snake(int intX, int intY)
{
    xPos = intX / 2;
    yPos = intY / 2;
}

Snake::~Snake()
{
}

int Snake::getX()
{
    return xPos;
}


int Snake::getY()
{
    return yPos;
}

void Snake::changeX(int pos)
{
    xPos = pos;
}

void Snake::changeY(int pos)
{
    yPos = pos;
}