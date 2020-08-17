#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(100);
	v.push_back(12);
	v.push_back(2);
	v.push_back(1);
	sort(v.begin(),v.end());
	v.pop_back();
	int k=(int)v.size();
	for(int i=0;i<k;i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
					
}
