#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    
cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
cout<<"Start of Lab 01: Q9"<<endl;
int year;
cout<<"\nEnter year: ";
cin>>year;
if(year % 400 == 0 || year % 100 != 100 && year % 4 == 0){
    cout<<year<<" is a leap year";}
else{cout<<year<<" is not a leap year";}
    return 0;
}