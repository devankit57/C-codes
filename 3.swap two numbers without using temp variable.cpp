#include<iostream>
using namespace std;

int main(){
	int x,y;
	x=5;
	y=6;
	
	cout<<"Before swapping"<<"x = "<<x<<"y = "<<y<<endl;
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"After swapping"<<"x = "<<x<<"y = "<<y<<endl;
	
	return 0;
}
