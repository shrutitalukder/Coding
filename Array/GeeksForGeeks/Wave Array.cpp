//Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array(In Place).
//In other words, arrange the elements into a sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....

//If there are multiple solutions, find the lexicographically smallest one.

//Your Task:
//The task is to complete the function convertToWave(), which converts the given array to a wave array.
//NOTE: The given array is sorted in ascending order, and you don't need to return anything to make changes in the original array itself.

//Expected Time Complexity: O(n).
//Expected Auxiliary Space: O(1).

//Constraints:
//1 ≤ n ≤ 106
//0 ≤ arr[i] ≤107

//Example 1
//Input:
//n = 5
//arr[] = {1,2,3,4,5}
//Output: 2 1 4 3 5
//Explanation: Array elements after 
//sorting it in wave form are 
//2 1 4 3 5.

//Example 2
//Input:
//n = 6
//arr[] = {2,4,7,8,9,10}
//Output: 4 2 8 7 10 9
//Explanation: Array elements after 
//sorting it in wave form are 
//4 2 8 7 10 9.

//Solution
#include<iostream>
using namespace std;
class solution{
  public:
  void convertToWave(int n,vector<int>& ar){
    if(n%2==0){
      int temp;
      for(int i=0;i<n;i+=2){
        temp=ar[i];
        ar[i]=ar[i+1];
        ar[i+1]=temp;
      }
    }
    else{
      for(int i=0;i<n-1;i+=2){
        int temp;
        temp=ar[i];
        ar[i]=ar[i+1];
        ar[i+1]=temp;
      }
    }
  }
  int main(){
    int t,n;
    cin>>t;                    //input testcases
    while(t--){                //while testcases exist
      cin>>n;                  //input size of array
      vector<int>a(n);         //declare vector of size n
      for(int i=0;i<n;i++){
        cin>>a[i];             //input elements of array
      }
      solution ob;
      ob.convertToWave(n,a);
      for(int i=0;i<n;i++){
        cout<<a[i]<<" ";       //print array
      }
      cout<<endl;
    }
  }
