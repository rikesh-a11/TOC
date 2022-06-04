// program to find suffix and prefix of the given string
#include <stdio.h>
#include<string.h>
void find_pre(char str[]);
void find_suff(char str[]);
int main(){
	char str[50];
	printf("enter the string:\n");
	gets(str);
	find_pre(str);
	find_suff(str);
}
void find_pre(char s[]){
	int i,j;
	char prefix[50];
	for(i=strlen(s);i>=0;i--){
		for(j=0;j<i;j++){
			prefix[j]=s[i];
		}
		prefix[j]='\0';
		printf("\n prefix is %s",prefix);
	}
}
void find_suff(char s[]){
	int i,j,k;
	char suffix[50];
	for(i=0;i<=strlen(s);i++){
		k=i;
		for(j=0;j<strlen(s);j++){
		suffix[j]=s[k];
		k++;
		}
		suffix[j]='\0';
		printf("\n suffix is %s",suffix);
	}
}
