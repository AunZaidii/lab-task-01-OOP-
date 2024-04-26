#include<iostream>
#include<conio.h>
using namespace std;
int main(){

cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
cout<<"Start of Lab 01: Q13"<<endl;

int amount, thousand, fivehundred, hundred, fifty, ten, five, two, one;
cout<<"\nEnter amount in rupees: ";
cin>>amount;

thousand = amount / 1000;
amount = amount % 1000;
fivehundred = amount / 500;
amount = amount % 500;
hundred = amount / 100;
amount = amount % 100;
fifty = amount / 50;
amount = amount % 50;
ten = amount / 10;
amount = amount % 10;
five = amount / 5;
amount = amount % 5;
two = amount / 2;
amount = amount % 2;
one = amount / 1 ;
amount = amount % 1;
cout<<"1000's in the given amount is: "<<thousand<<endl;
cout<<"500's in the given amount is: "<<fivehundred<<endl;
cout<<"100's in the given amount is: "<<hundred<<endl;
cout<<"50's in the given amount is: "<<fifty<<endl;
cout<<"10's in the given amount is: "<<ten<<endl;
cout<<"5's in the given amount is: "<<five<<endl;
cout<<"2's in the given amount is: "<<two<<endl;
cout<<"1s's in the given amount is: "<<one<<endl;
    return 0;
}