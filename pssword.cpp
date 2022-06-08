#include<stdio.h>
#include<string.h>
#define max 50
void check(char pas[]);
int main(){
	char pas[max];
	while(1){
	
	printf("\n enter the password:");
	gets(pas);
	check(pas);
}
}
void check(char pas[]){
	int len,i,flag1=0,flag2=0,flag3=0,flag4=0;
	len =strlen(pas);
	if(len<8){
	
		printf("\n minimum password length should be 8 length");
	flag1=1;
}
	else{
		for(i=0;i<len;i++)
		if((pas[i]>='a'&&pas[i]<='z'))
        {
            flag2=0;

            break;
        }
        else
        flag2=1;
        for(i=0;i<len;i++)
        if((pas[i]>='A'&&pas[i]<='Z'))
        {
        	
            flag3=0;

            break;
        }
        else 
		flag3=1;
		
        for(i=0;i<len;i++)
        if(pas[i]=='#'||pas[i]=='$'||pas[i]=='*'||pas[i]=='&'||pas[i]=='@')
        {
            flag4=0;

            break;
        }
        else
        flag4=1;

	}
	if(flag1==1||flag2==1||flag3==1||flag4==1)
    printf("\npassword invalid \n");
    else
    printf("your password is successfully created\n");
		
	
}
