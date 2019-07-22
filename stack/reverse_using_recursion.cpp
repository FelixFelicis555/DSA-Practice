#include <bits/stdc++.h>
using namespace std;
stack<char> st;
string ns;

char insert(char x){
	if (st.size()==0){
		st.push(x);
	}
	else{
		char y = st.top();
		st.pop();
		insert(x);
		st.push(y);
	}
}

char reverse(){
	if (st.size() > 0){
		char y = st.top();
		st.pop();
		reverse();
		insert(y); 
	}
}
int main(){
	st.push('1');
	st.push('2');
	st.push('3');
	st.push('4');
	cout<<"Original Stack"<<endl; 
    cout<<"1"<<" "<<"2"<<" "<<"3"<<" "<<"4"<<endl; 
	reverse();
	cout<<"Reversed Stack :"<<endl;
	while(!st.empty()){
		char z = st.top();
		st.pop();
		ns +=z;
	}
	cout<<ns[3]<<" "<<ns[2]<<" "<<ns[1]<<" "<<ns[0]<<endl;
	return 0;
}