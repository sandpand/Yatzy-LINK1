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

class Player // Can be expanded with scores, etc
{
    private:
        string name;
        int die[6];
    public:
        string setName() {
            cout << "Enter your name: ";
            cin >> name;
            return name;
        }; // Sets player name
};

class Game
{
    private:
        int score;
        int round;
        int totalScore;
        
        vector<int> diceRoll;

    public:
        Game () : diceRoll(5) {}

        void setScore(int score) {
            this->score = score;
        };
        void setRound(int round) {
            this->round = round;
        };
        void setTotalScore(int totalScore) {
            this->totalScore = totalScore;
        };
        int getScore() {
            return score;
        };
        int getRound() {
            return round;
        };
        int getTotalScore() {
            return totalScore;
        };
        int DiceRoll()
        {
            // Set the seed using the current time
            srand(static_cast<unsigned int>(time(0)));
            // Generate and print 5 random numbers
            for (int i = 0; i < 5; i++) 
            {
                int randomNumber = (rand() % 6) + 1; 
                cout << randomNumber<< endl; // Random number between 0 and 99
                diceRoll.push_back(randomNumber);
            }
            return 0;
        };
        void printDice() const 
        {
            for (int die : diceRoll) 
            {
                cout << die << " ";
            }
            cout << endl;
        };
};

void rules() 
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


void playerSelection () 
{
    clearScreen();
    bool playerSelection = true;
    if (playerSelection != true) {
        Player player1;
        Player player2;
        cout << "Enter Player 1's name:" << endl;
        player1.setName();
        cout << "Enter Player 2's name:" << endl;
        player2.setName();
    }
    else {
        return;
    }
}	

//Gameplay 
void Gameplay()
{
    clearScreen();
    Game game1;
    game1.DiceRoll();
}


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
            playerSelection();
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

//Main 
int main ()
{
    cout << "Welcome to Yatzy" << endl;
    sleepForSeconds(3);
    MainMenu();
    return 0;
}