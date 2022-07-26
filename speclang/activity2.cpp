#include <iostream>
#include <cmath>
using namespace std;

int main() {
int sum;
int num;
int val;
int avg;

sum = 0;
num = 0;
cout << "Enter a number: ";
cin >> val;

while (val > -1) {
   sum = sum + val;
   num = num + 1;
   cout << "Enter a number: ";
   cin >> val;
}
avg = sum / num;
cout << avg;
return 0;
}