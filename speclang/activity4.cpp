#include <iostream>
#include <cmath>
using namespace std;

int main() {
float celsiusValue;
float fahrenheitValue;
int userChoice;

userChoice = 1;
celsiusValue = 0.0;

while (userChoice == 1) {
   fahrenheitValue = (celsiusValue * 9.0 / 5.0) + 32.0;
   cout << celsiusValue;
   cout << "C is ";
   cout << fahrenheitValue;
   cout << "F\n";
   celsiusValue = celsiusValue + 5;
   cout << "Enter a number: ";
   cin >> userChoice;
}
cout << "Goodbye.";
return 0;
}