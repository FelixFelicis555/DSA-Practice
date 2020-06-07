int Solution::climbStairs(int A) {
    if(A <= 2) return A;
    int n2=1, n1=2, curr;
    for(int i=3; i<=A; i++){
        curr = n1+n2;
        n2 = n1;
        n1 = curr;
    }
    return curr;
}
