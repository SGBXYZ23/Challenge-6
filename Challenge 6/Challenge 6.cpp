// Challenge 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int answer = rand() % 101;
    int guess;
    int guesses = 0;
    int difference;

    cout << ">> Psst! The correct answer is " << answer << endl;

    while (true)
    {
        cout << "Enter your guess: ";

        if (!(cin >> guess) || guess < 0 || guess > 100)
        {
            cerr << "[!] ERROR: Invalid guess, enter a number in the range 0-100." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        guesses++;

        difference = abs(guess - answer);

        if (difference == 0)
        {
            cout << ">> Correct! The answer was " << answer << "!" << endl;
            cout << ">> Total number of guesses: " << guesses << endl;
            break;
        }
        else if (difference >= 50)
            cout << "F-F-Freezing" << endl;

        else if (difference >= 35)
            cout << "C-Colder" << endl;

        else if (difference >= 25)
            cout << "Cold" << endl;

        else if (difference >= 15)
            cout << "Warm" << endl;

        else if (difference >= 10)
            cout << "Warmer" << endl;

        else if (difference >= 5)
            cout << "Hot!" << endl;

        else if (difference >= 3)
            cout << "Hotter!!" << endl;

        else
            cout << "Boiling!!!" << endl;
    }

    return 0;
}