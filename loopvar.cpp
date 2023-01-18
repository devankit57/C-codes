#include<stdio.h>
int main(){
	
    int loopvar=1;
    while(loopvar<=20)
    {
    	if(loopvar%2==0){
    			printf("%d is even integer\n",loopvar);
		}else{
			printf("%d is odd integer\n",loopvar);
			
		}
    
    	loopvar++;
	}
    

}
