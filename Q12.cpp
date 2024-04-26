#include<iostream>
#include<conio.h>
using namespace std;
int main(){

cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
cout<<"Start of Lab 01: Q12"<<endl;
int hrs,min, sec, time;
cout<<"\nEnter time in seconds: ";
cin>>time;
hrs = time / 3600;
sec = time % 3600;
min = sec / 60;
sec = sec % 60;
cout<<"Hours in time is: "<<hrs<<endl;
cout<<"Minutes in time is: "<<min<<endl;
cout<<"Seconds in time is: "<<sec<<endl;
    return 0;
}
