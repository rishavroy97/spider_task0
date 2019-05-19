//program implementing modular exponentiation
#include<bits/stdc++.h>
using namespace std;
long fn(long a,long b,long c)
{
	if(a==0)
	return 0;
	if(b==0)
	return 1;
	long y;
	if(b%2==0)
	{y=fn(a,b/2,c);
	 y=(y*y)%c;
	}
	else{
		y=a%c;
		y=((y*fn(a,b-1,c))%c)%c;
	}
	return (y+c)%c;
}
int main()
{
	long int a,b,c;
	cout<<"to find the value of (a^b)mod c"<<endl;
	cout<<"enter the values of a,b,c";
	cin>>a>>b>>c;
	int res=fn(a,b,c);
	cout<<"the value of "<<a<<"^"<<b<<" mod "<<c<<" is "<<res;
	return 0;
	
}
