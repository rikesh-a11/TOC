#include<stdio.h>
#define max 50
int main(){
	char str[max],state='A';
	int i;
	printf("enter the string:\n");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++){
		switch(state){
			case 'A':
				if(str[i]=='0')
				state='B';
				else if(str[i]=='1')
				state='D';
				break;
			
				case 'B':
				if(str[i]=='0')
				state='D';
				else if(str[i]=='1')
				state='C';
				break;
		
				case 'C':
				if(str[i]=='0')
				state='C';
				else if(str[i]=='1')
				state='C';
				break;
		
				case 'D':
				if(str[i]=='0')
				state='D';
				else if(str[i]=='1')
				state='D';
				break;
		}
	}
	if (state=='C'){
		printf("input string acceptedas related to final state %c",state);
	}
	else{
		printf("rejected");
	}
}
