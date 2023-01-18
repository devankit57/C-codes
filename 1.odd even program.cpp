/*
Q)Write a program to check whether a given number is odd or even.
*/

#include<iostream>
using namespace std;
int main(){
	cout<<"Even Odd Program"<<endl;
	cout<<"Enter a number"<<endl;
	int number;
	cin>>number;
	
	if (number%2==0){
		cout<<number<<" is a even number";
		
	}else{
		cout<<number<<" is a odd number";
		
	}
}
