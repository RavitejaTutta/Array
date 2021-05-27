#include<bits/stdc++.h>
using namespace std;
int main()
 {

    int cap;
    cout<<"Enter capacity of array:";
    cin>>cap;
	int a[cap];
	int n;
    cout<<"How many numbers do you want in Array:";
    cin>>n; 
    if(n>cap)
    {
    	cout<<"Capacity is only "<<cap;
	}
	else
	{
    cout<<"Enter array elments:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(n==cap)
	{
		cout<<"Array is Filled"<<endl;
	}
	else
	{
	int pos,x;
	cout<<"In which pos do u want to insert element:";
	cin>>pos;
	cout<<"Enter value to insert at "<<pos<<" position";
	cin>>x;
	int ind=pos-1;
	for(int i=n-1;i>=ind;i--)
		{
			a[i+1]=a[i];
		}
	a[ind]=x;
	n++;
	for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
	}
}
  return 0;

}
