#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,flag=0;
	cout<<"How many numbers do u want in array:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
	if(a[i]>a[i+1])
	{
		flag=1;
		break;
	}		
	}

	if(flag==0)
	{
		cout<<"It is in order";
	}
	else
	{
		cout<<"Not in order";
	}
	return 0;
	
}
