//A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
//Ask user for their salary and year of service and print the net bonus amount.

#include<iostream>
using namespace std;

int main(){
	int salary,service,nsalary;
	cout<<"Enter your salary : ";
	cin>>salary;
	cout<<"Enter your service in years : ";
	cin>>service;
	
	if (service>5){
		nsalary=salary+(salary*0.05);
		cout<<"You are eligible for 5% bonus !! Congrats";
		cout<<"Your New Salary is :"<<nsalary;
	}else{
		cout<<"You are not eligible for any bonus !! Better luck next time";
	}
	
	

	return 0;
}
