#include<iostream>
#include<string.h>
using namespace std;

int main()						

{
	char str[20];
	cout<<"enter str : ";
	gets(str);
	
	int i;
	for(i=0;i<20;i++){
		if(str[i]>=65 && str[i]<=90){
			str[i]+=32;
	}
	else if(str[i]>=97 && str[i]<=122){
			str[i]-=32;
			}
}
	cout<<"str is :"<<str;
	
}





