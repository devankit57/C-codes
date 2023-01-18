#include<iostream>
using namespace std;

int main(){
	cout<<"Enter a number to calculate its factorial"<<endl;
	int x,fact;
	fact=1;
	cin>>x;
	while(x>1)
	{
		fact=fact*x;
		x--;
		
		
	}
	cout<<"The Factorial is"<<fact;
	return 0;
}
