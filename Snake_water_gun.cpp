#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int computer = (rand() % 3);

    cout << "Enter your choices: " << endl;
    cout << "s for snake, w for water, g for gun" << endl;

    char yourChar;
    cin >> yourChar;

    int you;

    if (yourChar == 's')
    {
        you = 0;
    }
    else if (yourChar == 'w')
    {
        you = 1;
    }
    else if (yourChar = 'g')
    {
        you = 2;
    }
    else
    {
        cout << "Invalid Input!!!" << endl;
    }

    string choices[] = {"Snake", "Water", "Gun"};
    cout << "You chose " << choices[you] << "\n";
    cout << "Computer chose " << choices[computer] << "\n";

    if (computer == you)
    {
        cout << "It's a draw\n";
    }
    else if ((you == 0 && computer == 1) || // Snake vs Water
             (you == 1 && computer == 2) || // Water vs Gun
             (you == 2 && computer == 0))
    { // Gun vs Snake
        cout << "You win!\n";
    }
    else
    {
        cout << "You lose!\n";
    }
    return 0;
}