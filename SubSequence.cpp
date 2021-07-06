#include<bits/stdc++.h>
using namespace std;
bool isSubSequence(int n1,int n2,int a[],int s[])
{
	int i=0,j=0,count=0;
	while(i<n1 && j<n2)
	{
		if(a[i]==s[j])
		{
			i++;
			j++;
		}
		else{
			i++;
		}
	}return(j==n2);
}
int main()
{
	int n1;
	cout<<"Enter array length:";
	cin>>n1;
	int a[n1];
	for(int i=0;i<n1;i++)
	{
		cin>>a[i];
	}
	int n2;
	cout<<"Enter subsequence length:";
	cin>>n2;
	int s[n2];
	for(int i=0;i<n2;i++)
	{
		cin>>s[i];
	}
    isSubSequence(n1,n2,a,s)?cout<<"True":cout<<"False";
}
