#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	   int n;
	    cin>>n; 
	    int arr[n];
	    for(int j=0;j<n;j++)
	    {
	        cin>>arr[j];
	    }
	    int mid=n/2;
	    for(int j=0;j<mid;j++)
	    {
	        int temp=arr[j];
	        arr[j]=arr[n-1-j];
	        arr[n-1-j]=temp;
	    }
	    for(int j=0;j<n;j++)
	    {
	        cout<<arr[j]<<" ";
	    }
	    cout<<endl;
	}
	
	
	return 0;
}