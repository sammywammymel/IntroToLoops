#include <iostream>
#include <cmath>
using namespace std;

int main() {
int userNum;

cout << "Enter a number: ";
cin >> userNum;

while (userNum > 0) {
   cout << "-";
   userNum = userNum - 10;
}
cout << "\n";
return 0;
}