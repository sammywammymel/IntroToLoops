#include <iostream>
#include <cmath>
using namespace std;

int main() {
int sum;
int val;

sum = 0;
cout << "Enter a number: ";
cin >> val;

while (val > -1) {
   sum = sum + val;
   cout << "Enter a number: ";
   cin >> val;
}
cout << sum;
return 0;
}