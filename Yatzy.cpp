#include <iostream> 
#include <cstdlib> // Needed for rand() and srand()
#include <ctime>   // Needed for time()
#include <windows.h> // Needed for Sleep()
#include <string>
#include <vector>

using namespace std;

bool gameIsRunning = true;

// Definition of functions
int DiceRoll();
void MainMenu();
void rules();
void Gameplay();

class player // Can be expanded with scores, etc
{
    private:
        string name;
        int die[6];
    public:
        void setName(); // Sets player name
        void rollDice(); // Maybe combine this one with DiceRoll eventually
};

void  rules() 
{
    cout << "Rules of the game" << endl;
    cin.ignore();
    cin.get();
};

void sleepForSeconds (int seconds) 
{
    Sleep(seconds * 1000);
};

void clearScreen() 
{
    system("cls");
}

//Main menu function
void MainMenu()
    {
    clearScreen();
    cout << "Main Menu" << endl;
    cout << "-------------------" << endl << endl;
    cout << "1. Play" << endl;
    cout << "2. Rules" << endl;
    cout << "3. Quit" << endl;

    int choice;
    cout << endl << "Enter your choice: ";
    cin >> choice;

    do 
    {
        switch (choice)
        {
            case 1:
            Gameplay();
            break;

            case 2:
            rules();
            break;

            case 3: //Quit game
            gameIsRunning = false;
            break;

            default:
            cout << "Invalid choice. Please try again.";
        }
    } while (gameIsRunning);
        cout << "Thanks for playing!";
        sleepForSeconds(3);
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

    
    DiceRoll();
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
    return 0;
}

void player::setName()
{
    // Code
};

void player::rollDice()
{
    // Code
};

//Main 
int main ()
{
    cout << "Welcome to Yatzy" << endl;
    sleepForSeconds(3);
    MainMenu();
    return 0;
}