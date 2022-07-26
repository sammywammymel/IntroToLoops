#include <iostream>
#include <cmath>
using namespace std;

int main() {
int numKids;
int userNum;

cout << "Enter a number: ";
cin >> userNum;

while (userNum == 1) {
   cout << numKids;
   numKids = numKids * 2;
   cout << "Enter a number: ";
   cin >> userNum;
}
return 0;
}