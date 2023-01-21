// Author: Surjeet Kumar Verma
//Link https://practice.geeksforgeeks.org/problems/perfect-arrays4645/1?page=11&category%5B%5D=Arrays&sortBy=submissions&utm_source=youtube_practice_channel&utm_medium=collab_fraz_gfgytdescription&utm_campaign=geekweekdsalive

// #include<bits/stdc++.h>
#include<iostream>
// #include <vector>
using namespace std;
bool pallindrome(vector<int> &v){
	int n=v.size();
	int i=0,j=n-1;
	while(i<=j){
		if(v[i]!=v[j]) return false;
		i++;
		j--;
	}
	return true;
}

int main(){
	int n=6;
	// cin>>n;
 	vector<int> v(n);
 	// for(auto &x:v){
 	// 	cin>>x;
 	// }
	// for(int i=0;i<n;i++){
	// 	cin>>v[i];
	// 	cout<<v[i];
	// }
 	// cout<<pallindrome(v)<<endl;
	cout<<"printed"<<endl;
}