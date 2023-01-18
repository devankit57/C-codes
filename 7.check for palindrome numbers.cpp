#include<iostream>
using namespace std;

int main(){
	cout<<"Enter the number to reverse :"<<endl;
	
	int n,num,digit,rev=0;
	
	cin>>num;
	n=num;
	while(num!=0)
	{
		digit=num%10;
		
		rev=(rev*10)+digit;
		num=num/10;
	}
	
	if (rev==n){
		cout<<"The given number is palindrome number";
		
	}else{
		cout<<"The given number is not a palindrome number";
	}
}
