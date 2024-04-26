#include<iostream>
#include<conio.h>
using namespace std;
int main(){
cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
cout<<"Start of Lab 01: Q4"<<endl;
int no1,no2,no3;
cout<<"\nEnter first number: ";
cin>>no1;
cout<<"Enter second number: ";
cin>>no2;
cout<<"Enter third number: ";
cin>>no3;
if(no1 >= no3 && no1 >= no2){
    cout<<"Maximum number: "<<no1<<endl;}
else if (no2 >= no1 && no2 >= no3)
{  cout<<"Maximum number: "<<no2<<endl;}
else{ cout<<"Maximum number: "<<no3<<endl;}
    return 0;
}
