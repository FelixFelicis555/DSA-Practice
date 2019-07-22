#include <bits/stdc++.h>
#define max 5
using namespace std;
stack<char> st;
char ns[max];
int i = 0;
void sort(){
	if(!st.empty()){
		//char x = st.top();
		ns[i] = st.top();
		st.pop();
		i++;
		sort();
	}
}
void display(){
	sort(ns,ns+max);
	for(int i = max -1;i>=0;i--){
		cout<<ns[i]<<endl;
	}
	cout<<endl;
}
int main(){
	int i;
	char data;
	cout<<"Enter the elements of stack"<<endl;
	for(int j =0;j <max;j++){
		cin>>data;
		st.push(data);
	}
	cout<<endl;
	sort();
	cout<<"Sorted Stack:"<<endl;
	display();
	return 0;
}