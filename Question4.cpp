//Given an array which contains only 0s,1s,and 2s sort them without using any sorting algo.

#include<iostream>

using namespace std;

int main()
{    

    int t;
    cin>> t;
    while(t--)
	{
		int n;
	cin>>n;
	
	int a[n];
	for(int i=0; i<n; i++)
	
		cin>>a[i];
		
		int c0=0 , c1=0 , c2=0;
		for(int i=0; i<n; i++)
		{
			if(a[i]==0)
			c0++;
			else if(a[i]==1)
			c1++;
			else c2++;
		}
		
		int k=0;
		for(int i=0; i<c0; i++)
		   a[k++]=0;
		for(int i=0; i<c1; i++)
		   a[k++]=1;
		for(int i=0; i<c2; i++)
		   a[k++]=2;  
		
		for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
		cout<<endl;   
		       
		
	}
		
	return 0;
	
}
