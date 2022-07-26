#include <iostream>
#include <cmath>
using namespace std;

int main() {
int numA;
int numB;

cout << "Enter a number: ";
cin >> numA;
cout << "Enter a number: ";
cin >> numB;

// Euclid's algorithm
while (numA != numB) {
   if (numB > numA) {
      numB = numB - numA;
   }else{
      numA = numA - numB;
   }
}
cout << "GCD is: ";
cout << numA;
return 0;
}