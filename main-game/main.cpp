#include <iostream>
#include <conio.h>
#include <time.h>
#include <Windows.h>

#include "fruit.h"
#include "snake.h"

using namespace std;

int HEIGHT_LIMIT = 20;
int WIDTH_LIMIT = 20;
bool gameOver = false;

Snake snake(HEIGHT_LIMIT, WIDTH_LIMIT);
Fruit fruit;

enum Direction{UP, DOWN, LEFT, RIGHT, NOCHANGE};

Direction dir = RIGHT; 

void Setup()
{
    fruit.ChangePos();
    srand(time(NULL));
    cout << "Fruit successfully mapped at (" << fruit.GetX() << ", " << fruit.GetY() << ")." << endl;
}

void BoardDraw()
{
    system("cls");
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

    switch(dir)
    {
        case UP:
            snake.changeY(snake.getY() - 1);
            break;
        case DOWN:
            snake.changeY(snake.getY() + 1);
            break;
        case LEFT:
            snake.changeX(snake.getX() - 1);
            break;
        case RIGHT:
            snake.changeX(snake.getX() + 1);
            break;
        case NOCHANGE:
            break;
    };
}

void Movement()
{
    char userInput = getch();
    switch(userInput)
    {
        case 'w':
            dir = UP;
            break;
        case 'a':
            dir = LEFT;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'e':
            gameOver = true;
            break;
        default:
            break;
    };
}






int main()
{
    Setup();
    while (gameOver != true)
    {
        BoardDraw();
        if (_kbhit() != 0)
        {
            Movement();
        }
    }
    return 0;
}