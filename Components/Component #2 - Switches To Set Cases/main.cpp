#include <iostream>
#include <conio.h>
using namespace std;

enum direction{UP, DOWN, LEFT, RIGHT};




int main()
{
    direction validKeypress;
    bool userInput = false;
    while (userInput == false)
    {
        int input = kbhit();
        if (input != 0)
        {
            char charInput = static_cast<char>(getch());
            switch(charInput)
            {
                default:
                    cout << "Invalid input, please try again." << endl;
                    _sleep(1000);
                    break;
                case 'w' :
                    userInput = true;
                    cout << "User Entered " << charInput << "!" << endl;
                    break;
                case 'a' :
                    userInput = true;
                    cout << "User Entered " << charInput << "!" << endl;
                    break;
                case 's' :
                    userInput = true;
                    cout << "User Entered " << charInput << "!" << endl;
                    break;
                case 'd' :
                    userInput = true;
                    cout << "User Entered " << charInput << "!" << endl;
                    break;
            }
        }
        else
        {
            cout << "User has not inputted anything..." << endl;
        }
        _sleep(100);
    }
    return 0;
}