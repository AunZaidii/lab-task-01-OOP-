#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    cout << "Name: Aun Zaidi (SE-23095)" << endl;
    cout << "Start of Lab 01: Q7\n" << endl;
    int num;
    int fact = 1;
    cout << "Enter a number for factorial: ";
    cin >> num;
    for (int i = 1; i <= num; i++) {
        fact = fact * i;}
    cout << "The factorial of " << num << " is " << fact << endl;
    return 0;
}

