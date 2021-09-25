#include <iostream>
#include <conio.h>
#include <time.h>

#include "fruit.h"
#include "snake.h"


using namespace std;

int HEIGHT_LIMIT = 20;
int WIDTH_LIMIT = 20;


Snake snake;
Fruit fruit;

void Setup()
{
    fruit.ChangePos();
    cout << "Fruit successfully mapped at (" << fruit.GetX() << ", " << fruit.GetY() << ")." << endl;

}








int main()
{
    Setup();







    return 0;
}