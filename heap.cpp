int Solution::nchoc(int A, vector<int> &B) {
    priority_queue<int> p;
    for(int i = 0;i<B.size();i++){
        p.push(B[i]);
    }
    long long int ans = 0;
    for(int i = 0;i<A;i++){
        ans = ans + p.top()%1000000007;
        int q = floor(p.top()/2);
        p.pop();
        p.push(q);
    }
    return ans%1000000007;
}

