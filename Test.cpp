#include <iostream>
using namespace std;
int main () {
int n, num;
double sum;
cout << "How may numbers are you going to type ";
cin>> n;

do {
cout << "How may numbers are you going to type ";
cin>> n;
} while (n < 1 || n > 10);

