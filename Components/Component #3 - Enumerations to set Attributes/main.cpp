#include <iostream>
#include <conio.h>
using namespace std;

const int MAX_CORD_X = 20;
const int MAX_CORD_Y = 20;

enum dir{UP, DOWN, LEFT, RIGHT, NOCHANGE};

void Setup()
{
    bool gameOver = false;
    int userPosX = MAX_CORD_X/2;
    int userPosY = MAX_CORD_Y/2;
    int userInput = 0;
    dir snakeStatus = NOCHANGE;
    

    while (gameOver != true)
    {
        userInput = kbhit();
        system("cls");
        cout << "Snake is currently in position (" << userPosX << ", " << userPosY << ")." << endl;

        if (userInput != 0)
        {
            int keyPress = getch();
            cout << "User pressed " << keyPress << "!" << endl;
            switch(keyPress)
            {
                default:
                    break;
                case 27:
                    gameOver = true;
                    break;
                case 72:
                    snakeStatus = UP;
                    break;
                case 119:
                    snakeStatus = UP;
                    break;
                case 75:
                    snakeStatus = LEFT;
                    break;
                case 97:
                    snakeStatus = LEFT;
                    break;
                case 80:
                    snakeStatus = DOWN;
                    break;  
                case 115:
                    snakeStatus = DOWN;
                    break;    
                case 77:
                    snakeStatus = RIGHT;
                    break;
                case 100:
                    snakeStatus = RIGHT;
                    break;
            }
        }
        _sleep(100);
        if (snakeStatus == UP)
        {
            userPosY += 1;
        }
        else if (snakeStatus == DOWN)
        {
            userPosY -= 1;
        }
        else if (snakeStatus == RIGHT)
        {
            userPosX += 1;
        }
        else
        {
            userPosX -= 1;
        }
        
        _sleep(100);
        
        switch(userPosX)
        {
            default:
                break;
            case 0:
                cout << "Wall hit! Game Over." << endl;
                gameOver = true;
                break;
            case 20:
                cout << "Wall hit! Game Over." << endl;
                gameOver = true;
                break;
        }
        
        switch(userPosY)
        {
            default:
                break;
            case 0:
                cout << "Wall hit! Game Over." << endl;
                gameOver = true;
                break;
            case 20:
                cout << "Wall hit! Game Over." << endl;
                gameOver = true;
                break;
        }
    }
}



int main()
{
    Setup();



    return 0;
}