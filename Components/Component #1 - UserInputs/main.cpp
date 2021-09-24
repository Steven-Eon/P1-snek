#include <iostream>
#include <conio.h>
using namespace std;



int main()
{
    bool userInput = false;
    while (userInput == false)
    {
        int input = kbhit();
        if (input != 0)
        {
            userInput = true;
            cout << "User Entered " << static_cast<char>(getch()) << "!" << endl;
        }
        else
        {
            cout << "User has not inputted anything..." << endl;
        }
        _sleep(100);
    }
    return 0;
}