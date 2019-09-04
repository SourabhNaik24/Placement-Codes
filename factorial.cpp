#include<iostream>

using namespace std;

int main()
{
	long n, ans=1;
	cout<<"Enter No. :";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		ans*=i;
	}
	cout<<"Factorial :"<<ans<<endl;
	return 0;
}
