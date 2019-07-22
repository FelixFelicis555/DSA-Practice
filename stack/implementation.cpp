#include <bits/stdc++.h>
#define max 1000
using namespace std;


class Stack{
	int k;
public:
	int a[max];
	Stack(){k=-1;}
	bool push(int x){
		if (k>= (max-1)){
			cout<<"Stack Overflow";
			return false;
		}
		else{
			a[++k] = x;
			cout<<x<<"pushed into stack";
			return true;
		}

	};
	int pop(){
		if (k<0){
			cout<<"Stack Underflow";
			return 0;
		}
		else{
			int y = a[k-1];
			return y;
		}
	};
	int peek(){
		if (k<0){
			cout<<"Empty Stack";
			return 0;
		}
		else{
			int y = a[k];
			return k;
		}
	};
};
int main() 
{ 
    class Stack s; 
    s.push(10); 
    s.push(20); 
    s.push(30); 
    cout << s.pop() << " Popped from stack"<<endl; 
    return 0; 
} 