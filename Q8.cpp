#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    cout << "Name: Aun Zaidi (SE-23095)" << endl;
    cout << "Start of Lab 01: Q8\n" << endl;

float simpleinterest,rateofinterest;
int principleammount,timeperiod;
cout<<"Enter principle amount: ";
cin>>principleammount;
cout<<"Enter rate of interest: ";
cin>>rateofinterest;
cout<<"Enter time period in years: ";
cin>>timeperiod;
simpleinterest = principleammount*(1+(rateofinterest/100)*timeperiod);
cout<<"Simple interest is: "<<simpleinterest<<endl;
return 0;
}