#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std;

int userPosX, userPosY, objectX, objectY;
bool objectCollision;
enum dir{UP, DOWN, LEFT, RIGHT, NOCHANGE};


void Setup()
{
    srand(time(NULL));
    objectCollision = false;
    userPosX = rand() % 20;
    userPosY = rand() % 20;
    objectX = rand() % 20;
    objectY = rand() % 20;
}

void LocationPrint()
{
    cout << "Player is sitting at (" << userPosX << ", " << userPosY << ")." << endl;
    cout << "Object is sitting at (" << objectX << ", " << objectY << ")." << endl;
}

void CollisionCheck()
{
    if ((userPosX == objectX) && (userPosY == objectY))
    {
        objectCollision = true;
    }
}

int main()
{
    Setup();
    while(objectCollision != true)
    {
        LocationPrint();
        CollisionCheck();
    }
    return 0;
}