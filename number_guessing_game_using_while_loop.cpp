#include <iostream>
#include <cstdlib> //to use the standard library rand and srand functions
#include <ctime>   //  for time function to seed the random number generator
using namespace std;
int main()
{
    // Seed the random number generator with the current time, it makes sure that you obtain a different number everytime you run the program
    srand(time(0));
    // Generate a random number between 1 and 100
    int number = (rand() % 100 + 1); // to get random numbers from the system , %100 will give numbers from ( 0 to 99) hence we add 1 to get numbers from (1 to 100)
    int guess;
    int attempts = 0;

    cout << "Enter the guess number: " << endl;

    while (guess != number)
    {
        cin >> guess;
        attempts++;
        if (guess > number)
        {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < number)
        {
            cout << "Too Low! Try again." << endl;
        }
        else
        {
            cout << "Congratulations! You gussed the number correctly!" << endl;
        }
    }
    return 0; // indicate that the program ended successfully
}