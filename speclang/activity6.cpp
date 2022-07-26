#include <iostream>
#include <cmath>
using namespace std;

int main() {
int yearsPerGen;
int userYear;
int curYear;
int numAncestors;

curYear = 2020;
numAncestors = 2;
cout << "Enter a number: ";
cin >> userYear;

while (curYear >= userYear) {
   cout << curYear ;
   cout << ":";
   cout << numAncestors;
   cout << " ancestors\n";
   // Each ancestor had two parents
   numAncestors = 2 * numAncestors;
   // Go back 1 generation
   curYear = curYear - 20;
}
return 0;
}