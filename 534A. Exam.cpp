//    https://codeforces.com/problemset/problem/534/A


#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if (n==1)
	{
		cout<<"1"<<endl;
		cout<<"1";
	}
	else if (n==2)
	{
		cout<<"1"<<endl;
		cout<<"1";
	}
	else if (n==3)
	{
		cout<<"2"<<endl;
		cout<<"1 3";
	}
	else if (n==4)
	{
		cout<<"4"<<endl;
		cout<<"2 4 1 3";
	}
	else 
	{
		cout<<n<<endl;
		for (int i=1; i<=n; i+=2)
		{
			cout<<i<<" ";
		}
		for (int i=2; i<=n; i+=2)
		{
			cout<<i<<" ";
		}
	}
}
