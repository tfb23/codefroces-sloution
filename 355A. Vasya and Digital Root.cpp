//    https://codeforces.com/problemset/problem/355/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k, d;
	cin>>k>>d;
	
	if(d==0 && k==1)
	{
		cout<<0<<endl;
	}
	else if(d==0 && k>1)
	{
		cout<<"No solution"<<endl;
	}
	else 
	{
		cout<<d;
		for(int i=0; i<k-1; i++)
		{
			cout<<0;
		}
	}
	cout<<endl;
}
