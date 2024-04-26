#include<iostream>
#include<conio.h>
using namespace std;
int main(){

cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
cout<<"Start of Lab 01: Q15"<<endl;
int num,rev = 0;
cout<<"\nEnter a two digit number: ";
cin>>num;
while(num>0){
    rev = (rev*10)+(num % 10);
    num = num / 10;}
cout<<"The reversed number is: "<<rev<<endl;
    return 0;
}

