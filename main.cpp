#include <iostream>
#include <string>
#include "my_easter_calculator.h"

using namespace std;

int main()
{
  string cont = "y";
  int year = -1;
  string easterOutput = "";

  while (cont != "n")
  {
    //prompt
    cout << "What's the year: ";

    //user input
    cin >> year;

    //result calculation
    string output = findEasterDate(year);
    cout << output;

    //loop
    cout << "Continue (y/n)? ";
    cin >> cont;
  }
  return 0;
}