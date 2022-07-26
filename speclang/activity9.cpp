#include <iostream>
#include <cmath>
using namespace std;

int main() {
int currValue;
int valuesSum;
int numValues;
float averageValue;

valuesSum = 0;
numValues = 0;
cout << "Enter a number: ";
cin >> currValue;

// Get values until 0 (or less)
while (currValue > 0) {
   valuesSum = valuesSum + currValue;
   numValues = numValues + 1;
   cout << "Enter a number: ";
   cin >> currValue;
}
averageValue = (1.0 * valuesSum ) / numValues;
cout << "Average: ";
cout << averageValue;
}