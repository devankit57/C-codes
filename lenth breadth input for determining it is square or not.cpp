#include<iostream>
using namespace std;

int main(){
	
	int length,breadth;
	
	cout<<"Please Enter Length";
	cin>>length;
	cout<<"Please Enter Breadth";
	cin>>breadth;
	
	if (length==breadth){
		cout<<"It is a square";
		
	}else{
		cout<<"It is a rectangle";
	}
	return 0;

}
