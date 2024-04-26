#include<iostream>
#include<conio.h>
using namespace std;
int main(){
cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
cout<<"Start of Lab 01: Q10"<<endl;
int num, i, remaining=0, sum=0;
cout<<"\nEnter a number to check whether it is Amstrong number or not: ";
cin>>num;
i = num;
while (i != 0){
remaining = i % 10;
sum = sum + (remaining*remaining*remaining);
i = i/10;}
if (sum == num){  cout<<num<<" is an Amstrong number";}
else{cout<<num<<" is not an Amstrong number";}
    return 0;
}
