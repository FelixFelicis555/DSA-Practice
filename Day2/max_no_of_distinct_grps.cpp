// Problem Link: https://drive.google.com/file/d/1e9SupAnDt91sTLAPpp3h7X9C3D9pYMPF/view?usp=sharing

#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>v, int k, int mid){
	int diff = 0,sum=0;
	for(int i = 0;i<v.size();i++){
		if(v[i] - mid > 0){
			diff += (v[i] - mid);
		}
	}
	for(int i = 0;i<v.size();i++){
		sum += v[i];
	}
	sum = sum - diff;
	if(mid*k <= sum)
		return true;
	else
		return false;
}

int go(vector<int>v, int k, int l, int r){
	int ans = 0;
	int mid = l + (r-l)/2;
	if(check(v,k,mid)){
		l = mid+1;
		ans = mid;
	}
	else{
		r = mid-1;
	}
	return ans;
}

int main(){
	vector<int> v = {7,17,7,8};
	int k = 2;
	int sum = 0;
	for(int i = 0;i<v.size();i++){
		sum+= v[i];
	}
	int ans = go(v,k,0,sum);
	cout<<ans<<endl;
	return 0;
}