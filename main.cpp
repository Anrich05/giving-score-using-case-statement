#include <iostream>

using namespace std;

int main()
{
    int score;

    cout << "Please enter your score\n";
    cin >> score;

    switch(score) {

  case 90 ... 100 :
    cout << "Congrats! You got an A! \n";
    break;

  case 70 ... 89 :
    cout << "Well done, you got an B \n";
    break;

  case 50 ... 69 :
    cout << "Not too bad, you got a C \n";
    break;

  case 30 ... 49 :
    cout << "You passed with a D \n";
    break;

  case 0 ... 29 :
    cout << "You failed with an F \n";
    break;



    }
    return 0;
}
