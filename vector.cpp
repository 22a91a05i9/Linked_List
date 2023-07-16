#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>v;
	vector<int>v1;
	for(int i=0;i<n;i++){
		int in;
		cin>>in;
		v.push_back(in);
	}
	for(int i=0;i<n;i++){
		int in1;
		cin>>in1;
		v1.push_back(in1);
	}
	v.insert(v.end(),v1.begin(),v1.begin()+3);
	v1.erase(v1.begin()+2);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	for(int i=0;i<v1.size();i++){
	cout<<v1[i]<<" ";
	}
}
