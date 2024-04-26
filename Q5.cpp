#include<iostream>
#include<conio.h>
using namespace std;
int main(){
cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
cout<<"Start of Lab 01: Q5"<<endl;
string phrase;
int size;
char ch;
cout<<"\nEnter a string: ";
cin>>phrase;
size = phrase.size();
cout<<"Reversed String: ";
for(int i = size-1; i >= 0; i--){
    ch = phrase.at(i);
    cout<<ch;}
    return 0;
}

