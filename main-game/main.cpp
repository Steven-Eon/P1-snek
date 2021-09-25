#include <iostream>
#include <conio.h>
#include <time.h>

#include "fruit.h"
#include "snake.h"


using namespace std;

int HEIGHT_LIMIT = 20;
int WIDTH_LIMIT = 20;

Snake snake(HEIGHT_LIMIT, WIDTH_LIMIT);
Fruit fruit;

void Setup()
{
    fruit.ChangePos();
    srand(time(NULL));
    cout << "Fruit successfully mapped at (" << fruit.GetX() << ", " << fruit.GetY() << ")." << endl;
}

void BoardDraw()
{
    for (int i = 0; i < HEIGHT_LIMIT; ++i)
    {
        if (i == 0 || i == HEIGHT_LIMIT - 1)
        {
            for (int j = 0; j <= WIDTH_LIMIT; ++j)
            {
                cout << "#";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < WIDTH_LIMIT; ++j)
            {
                if (j == 0 || j == WIDTH_LIMIT - 1)
                {
                    cout << "#";
                }
                else if (i == snake.getY() &&  j == snake.getX())
                {
                    cout << "O";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}






int main()
{
    Setup();
    BoardDraw();
    return 0;
}