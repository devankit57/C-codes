#include<iostream>
using namespace std;

int main(){
	int x,y,z;
	cout<<"ENter three numbers";
	cin>>x>>y>>z;
	
	if(x>y){
		if(x>z){
			cout<<x<<" is largest number";
		}else{
		
		cout<<z<<" is largest number";
		
		}
		
	}else if(y>x){
		if(y>z){
			cout<<y<<" is largest number";
			
		}else{
			cout<<z<<" is largest number";
		}
		
	}
		
	}

