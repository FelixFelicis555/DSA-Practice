vector<int> Solution::dNums(vector<int> &a, int b) {
    vector<int> ans;
    unordered_map<int, int> m;
    for(int i = 0;i<b;i++){
        m[a[i]]++;
    }
    
    for(int i = b;i<=a.size();i++){
        ans.push_back(m.size());
        if(m[a[i-b]]==1){
            m.erase(a[i-b]);
        }
        else
            m[a[i-b]]--;
        m[a[i]]++;
    }
    return ans;
}
