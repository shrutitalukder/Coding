// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        if(n==1)return;
        int low,high,mid;
        low=0;
        mid=0;
        high=n-1;
        int temp;
        while(mid<=high){
            if(a[mid]==0){
                temp=a[low];
                a[low]=a[mid];
                a[mid]=temp;
                low++;
                mid++;
            }
            else if(a[mid]==1){
                mid++;
            }
            else{
                temp=a[mid];
                a[mid]=a[high];
                a[high]=temp;
                high--;
            }
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends
