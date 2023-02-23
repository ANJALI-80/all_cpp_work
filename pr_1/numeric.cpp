#include<iostream>
using namespace std;
#include<string.h>
 main() {
   char str[20];
   
   		cout<<"enter the string length :";
   		gets(str);
   		
   		int i;
   		
	for ( i = 0; i <strlen(str); i++) {
	
      if(str[i]>=48 && str[i]<=57)
		{
	  
      	cout<<"its numeric"<<endl;
      }
	  else
	  {
	    cout<<"it is not number"<<endl;
   		}	
}
}
