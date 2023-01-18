//A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
//Ask user for quantity
//Suppose, one unit will cost 100.
//Judge and print total cost for user.

#include<iostream>
using namespace std;

int main(){
	int unit,cost,fcost;
	cout<<"Enter Number of Units : ";
	cin>>unit;
	cost=100*unit;
	
	if (cost>1000){
		cout<<"Hurray ! You are lucky customer , you will get 10% discount";
		fcost=(cost-(cost*0.1));
		cout<<"Final price : "<<fcost;
	}else{
		cout<<"Final price : "<<cost;
	}
	return 0;
}
