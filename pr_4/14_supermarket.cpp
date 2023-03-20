//WAP to make Supermarket Billing System.
//Requirements:
//(A) Verify User Id And Password
//(B) User Input Item Number , Item Name , Quantity , Tax , Discount.
//(C) Display All Record In Ascending order (by item Number)

#include<iostream>
#include<string.h>

using namespace std;

int main()
{

	char a[30],b;
	int i,j,k,symbol=0,dot=0;
	
while(1){

		cout<<"enter your email  : "<<endl;
		gets(a);
		
		b=a[0];
		if(b=='k'){
			break;
			}
			k=strlen(a);	
				
			for(i=0;i<k;i++){
				b=a[i];
					if(b=='@'){
					symbol=1;
					
			}
			if(b=='.'){
				dot=1;
				j=i;
				
			}		
		}
			
		if(symbol==1 && dot==1 && (k-j>3)){
			printf("\n ");
		}
		
		else{
			cout<<"\nthis is not real email.\n\n "<<endl;
		}
	}	
	
}

