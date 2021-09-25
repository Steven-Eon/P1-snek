#include <iostream>
#include "fruit.h"

using namespace std;

Fruit::Fruit()
{
    xPos = rand() % 20;
    yPos = rand() % 20;
}

void Fruit::ChangePos()
{
    xPos = rand() % 20;
    yPos = rand() % 20;
}

void Fruit::LocatePos()
{
    cout << "Fruit is located at (" << GetX << ", " << GetY << ")." << endl;
}

int Fruit::GetX()
{
    return xPos;
}

int Fruit::GetY()
{
    return yPos;
}