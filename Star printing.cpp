#include<iostream>
using namespace std;

void Star1(int n){
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cout<<"*";
			
		}
		cout<<endl;
	}
}
void Star2(int n){
	for (int i=0;i<n;i++){
		for (int j=0;j<=i;j++){
			cout<<"*";
			
		}
		cout<<endl;
	}
}
void Star3(int n){
	for (int i=1;i<=n;i++){
		for (int j=1;j<=i;j++){
			cout<<j;
			
		}
		cout<<endl;
	}
}
void Star4(int n){
	for (int i=1;i<=n;i++){
		for (int j=1;j<=i;j++){
			cout<<i;
			
		}
		cout<<endl;
	}
}
void Star5(int n){
	for (int i=1;i<=n;i++){
		for (int j=0;j<n-i+1;j++){
			cout<<"*";
			
		}
		cout<<endl;
	}
}
void Star6(int n){
	for (int i=1;i<=n;i++){
		for (int j=1;j<n-i+2;j++){
			cout<<j;
			
		}
		cout<<endl;
	}
}


void Star7(int n){
	for (int i=0;i<=n;i++){
		for(int j=0;j<n-i-1;j++){
			cout<<" ";
		}
		
		for(int j=0;j<2*i+1;j++)
		{
			cout<<"*";
		}
		
		for(int j=0;j<n-i-1;j++){
			cout<<" ";
		}
	cout<<endl;
	}
}

void Star8(int n){
	for (int i=0;i<=n;i++){
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		
		for(int j=0;j<2*n-(2*i+1);j++)
		{
			cout<<"*";
		}
		
		for(int j=0;j<i;j++){
			cout<<" ";
		}
	cout<<endl;
	}
}

void Star9(int n){
	for(int i=1;i<=2*n-1;i++){
		int st=i;
		if (i>n){
			st=2*n-i;
		}
		
		for(int j=1;j<=st;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

void Star10(int n){
	int start=1;
	for(int i;i<n;i++){
		
		if(i%2==0){
			start=1;
		}else{
			start=0;
		}
		for (int j=0;j<=i;j++){
			cout<<start;
			start=1-start;
		}
		cout<<endl;
		
	}
}

void Star11(int n){
	int space=2*(n-1);
	for(int i=1;i<=n;i++){
		//numbers
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		
		//space
		for(int j=1;j<=space;j++){
			cout<<" ";
		}
		
		//numbers
		for( int j=i;j>=1;j--){
			cout<<j;
		}
		cout<<endl;
		space-=2;
	}
}

void Star12(int n){
	int num=1;
	for (int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<num;
			num=num+1;
		}
		cout<<endl;
	}
}
void Star13(int n){
	for(int i=0;i<n;i++){
		
	
		for(char ch='A';ch<='A'+i;ch++){
			cout<<ch<<" ";
		}
		cout<<endl;
}	
}

void Star14(int n){
	for(int i=0;i<n;i++){
		
	
		for(char ch='A';ch<='A'+(n-i-1);ch++){
			cout<<ch<<" ";
		}
		cout<<endl;
}
}

void Star15(int n){
    for (int i = 0; i < n; i++) {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void Star16(int n){
	int spaces=0;
	for(int i=0;i<n;i++){
		//stars
		for(int j=1;j<=n-i;j++){
			cout<<"*";
		}
		//spaces
		for(int j=0;j<spaces;j++){
			cout<<" ";
		}
		//stars
		for(int j=1;j<=n-i;j++){
			cout<<"*";
		}
		spaces+=2;
		cout<<endl;
	}
	spaces=2*n-2;
	for(int i=1;i<=n;i++){
		//stars
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		//spaces
		for(int j=0;j<spaces;j++){
			cout<<" ";
		}
		//stars
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		spaces-=2;
		cout<<endl;
	}
}


int main(){
	int n;
	cin>>n;

	Star16(n);
	return 0;
}
