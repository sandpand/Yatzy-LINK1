#include <iostream>

using namespace std;

bool gameIsRunning = true;

void MainMenu()
    {
    int choice;
    cin >> choice;
    do {
        switch (choice)
        {
        case 1:
        break;
        case 2:
        break;
        case 3:
        break;
        default:
        }
        gameIsRunning = false;
        } while (gameIsRunning);
        cout << "Thanks for playing!";
    }

void Gameplay()
{
    string player1;
    string player2;
    //Greeting & asking player to enter their names;
    cout << "Welcome to Yatzy";
    cout << "Player 1, please enter your name";
    cin >> player1;
    cout << "Player 2, please enter your name";
    cin >> player2;
}

int main ()
{
    MainMenu();
    return 0;
}