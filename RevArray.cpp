#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,temp,i,j;
	cout<<"Enter array length:";
	cin>>n;
	int a[n];
	cout<<"Enter "<<n<<" elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0,j=n-1;i<n/2;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	cout<<"Reverse of elements are:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
