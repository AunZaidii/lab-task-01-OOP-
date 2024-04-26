#include<iostream>
#include<conio.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}
int main() {
    cout << "Name: Aun Zaidi (SE-23095)" << endl;
    cout << "Start of Lab 01: Q6\n" << endl;
    int num;
    cout << "Enter a number to check whether it's prime or not: ";
    cin >> num;
    if (isPrime(num)) { cout << num << " is a prime number" << endl;} 
    else {cout << num << " is not a prime number" << endl;}
    return 0;
}
