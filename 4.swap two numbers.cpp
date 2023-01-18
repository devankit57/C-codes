#include<iostream>
using namespace std;

int main(){
	int x,y,temp;
	x=6;
	y=7;
	cout<<"Before swapping :"<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	temp=x;
	x=y;
	y=temp;
	
	cout<<"After swapping :"<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
}
