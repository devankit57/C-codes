#include<iostream>
using namespace std;

int main(){
	
	int year;
	cout<<"Enter year to check for leap year"<<endl;
	cin>>year;
	
	if(year%4==0)
	{
		if(year%100==0){
			if(year%400==0){
				 cout<<"It is a leap year";
			}else{
				cout<<"It is not a leap year";
				
			}
		}else{
			cout<<"It is a leap year";
			
		}
	}else{
		cout<<"It is not a leap year";
	}
}
