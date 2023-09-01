
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    int targetNumber = rand() % 100 + 1;

    int userGuess = 0;
    int attempts = 0;

    while (userGuess != targetNumber)
    {
        cout << "Guess the number between 1 and 100: ";
        cin >> userGuess;
        attempts++;

        if (userGuess < targetNumber)
        {
            cout << "Too low! Try again." << endl;
        }
        else if (userGuess > targetNumber)
        {
            cout << "Too high! Try again." << endl;
        }
    }
    cout << "------------------------------------------------"<< endl;
    cout << "Congratulations! You guessed the correct number " << targetNumber << " in " << attempts << " attempts!" << endl;
    cout << "------------------------------------------------"<< endl;

    return 0;
}
