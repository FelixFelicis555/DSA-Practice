int Solution::longestSubsequenceLength(const vector<int> &A) {
    int n = A.size();
    int inc[n],dec[n];
    for(int i = 0;i<n;i++){
        inc[i] = 1;
        dec[i] = 1;
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i;j++){
            if(A[i] > A[j]){
                inc[i] = max(inc[i],inc[j]+1);
            }
        }
    }
    for(int i = n-1;i>=0;i--){
        for(int j = n-1;j>i;j--){
            if(A[i] > A[j]){
                dec[i] = max(dec[i],dec[j]+1);
            }
        }
    }
    int ans = 0;
    for(int i = 0;i<n;i++){
        ans = max(ans, inc[i]+dec[i]-1);
    }
    return ans;
}
