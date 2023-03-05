#include<iostream>
using namespace std;

inline void swap(int[],int[],int);

int main()
{
	int n,i;
	
	cout << "enter number : ";
	cin >> n;
	
	int a[n],b[n];
	
	for(i=0;i<n;i++)
	{
		cout << "a[" << i << "] :";
		cin >> a[i];
	}
	for(i=0;i<n;i++)
	{
		cout << "b[" << i << "] :";
		cin >> b[i];
	}
	swap(a,b,n);
}

inline void swap(int a[],int b[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=a[i]+b[i];
		b[i]=a[i]-b[i];
		a[i]=a[i]-b[i];
	}
	for(i=0;i<n;i++)
	{
		cout << "a[" << i << "] :" << a[i] << endl;
	}
	for(i=0;i<n;i++)
	{
		cout << "b[" << i << "] :" << b[i] << endl;
	}
}
