vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n=A.size();
    int a=0;
    int b=0;
    int B[n+1]={0};
    for(int i=0;i<n;i++){
        B[A[i]]++;
    }
    for(int i=0;i<=n;i++){
        if(B[i]==0){
            a=i;
        }
        if(B[i]==2){
            b=i;
        }
    }
    return {b,a};
}
