#include<bits/stdc++.h>
using namespace std;
void del(stack<int> &st, int n, int curr = 0){
	if(st.empty() || curr == n){
		return;
	}
	int x = st.top();
	st.pop();
	del(st,n,curr+1);

	if(curr!=n/2){
		st.push(x);
	}
}
int main(){
	stack<int> st;
    int n;
    cout << "\nEnter the number of elements to be pushed to the stack : ";
    cin >> n;
    cout << "\nEnter the stack elements : ";
    for(int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        st.push(data);
    }
    del(st,n);
    while(!st.empty()){
    	int p = st.top();
    	st.pop();
    	cout<<p<<" ";
    }
    cout<<endl;
    return 0;
}