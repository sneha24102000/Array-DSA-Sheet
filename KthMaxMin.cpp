#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
    int n,k;
    cin>>n>>k;
    
    int a[n],i;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
       
    sort(a,a+n);
    
    cout<<a[k-1]<<" "<<a[n-k];
       
   
       
	
	
	return 0;
}

