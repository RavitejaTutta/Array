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
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[i+1])
			{
				flag=flag+1;
			}
		    if(flag==1)
		    {
		    	cout<<"Not in order";
			}
		}
	}

	if(flag==0)
	{
		cout<<"It is in order";
	}
	return 0;
	
}
