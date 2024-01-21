//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int reverseInt(int n)
    {
        int revNum = 0;
        while(n>0)
        {
            revNum = revNum*10 +n%10;
            n= n/10;
        }
        return revNum;
    }
    bool isPalindrome(int n)
    {
        //return true if reverse(int )==int
        return (reverseInt(n) == n);
        
    }
    int PalinArray(int a[], int n)
    {
        for(int i=0;i<n;i++)
        {
            if(!isPalindrome(a[i]))
            {
                return 0;
            }
        }
        return 1;
    	// code here
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends