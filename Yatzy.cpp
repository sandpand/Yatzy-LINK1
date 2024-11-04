#include <iostream> 
#include <cstdlib> // Needed for rand() and srand()
#include <ctime>   // Needed for time()
using namespace std;


// Definition of functions
int diceRoll();
void MainMenu();
void Gameplay();


bool gameIsRunning = true;

//Main menu function
void MainMenu()
    {
    cout << "Main Menu" << endl;
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    do {
        switch (choice)
        {
            case 1: //Play the game
            break;

            case 2: //Rules
            break;

            case 3: //Quit game
            gameIsRunning = false;
            break;

            default: //
            cout << "Invalid choice. Please try again.";
        }
        } while (gameIsRunning);
        cout << "Thanks for playing!";
    }

//Gameplay 
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

//Diceroll function
int DiceRoll()
{
    // Set the seed using the current time
    srand(static_cast<unsigned int>(time(0)));

    // Generate and print 5 random numbers
    for (int i = 0; i < 5; i++) 
    {
        int randomNumber = (rand() % 6) + 1; 
        cout << randomNumber<< endl; // Random number between 0 and 99
    }

}

//Main 
int main ()
{
    cout << "Welcome to Yatzy" << endl;
    MainMenu();
    return 0;
}