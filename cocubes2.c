#include<stdio.h>


int create(int a,int b,int c)
{
	int s;
	if(a>b & a>c & b>c){
			s = s * 10 + a;
			s = s * 10 + b;	
			s = s * 10 + c;	
	}
	else if(a>b & a>c & c>b){
			s = s * 10 + a;
			s = s * 10 + c;
			s = s * 10 + b;
	}	
	else if(b>a & b>c & a>c){
			s = s * 10 + b;
			s = s * 10 + a;
			s = s * 10 + c;	
	}
	else if(b>a &b>c &c>a){
			s = s * 10 + b;
			s = s * 10 +c;
			s = s * 10 +a;	
	}	
	else if(c>a& c>b& a>b){
			s = s * 10 + c;
			s = s * 10 + a;
			s = s * 10 + b;
	}
	else if(c>a&c>b&b>a){
			s = s * 10 + c;
			s = s * 10 + b;
			s = s * 10 + a;
	}	
	return s;
}

int main()
{
	int x,y,z;
	printf("Enter X Value: \n");
	scanf("%d",&x);
	printf("Enter Y Value: \n");
	scanf("%d",&y);
	printf("Enter Z Value: \n");
	scanf("%d",&z);
	printf("%d",create(x,y,z));
	return 0;
}
