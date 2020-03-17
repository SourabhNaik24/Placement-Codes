#include<iostream>

using namespace std;

bool gcd(int a, int b)
{
	if(a == 0)
	{
		return b;
	}
	if(b == 0)
	{
		return a;
	}
	if(a>b)
	{
		return gcd(a-b, b);
	}
	else if(a<b)
	{
		return gcd(a, b-a);
	}
}

void binary(int n)
{
	int binaryNum[32]; 
	int count = 0; 
	int k=n; 
  
    int i = 0; 
    while (n > 0) 
	{ 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
    for (int j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
        
	while (k) 
	{ 
    	count += k & 1; 
    	k >>= 1; 
	} 
	cout<<endl;
	cout<<count; 
}

int main()
{
	int a,b;
	cin>>a;
	cin>>b;
	int store = gcd(a,b);
	binary(store);
	return 0;
}
