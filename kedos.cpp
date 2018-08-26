#include <iostream>
#include <math.h>
using namespace std;

int oddg(int w)
{
	int a=-1;
	for(int y=1;y<w;y++)
	a=a+2;
	return a;
}

//t+1-i

int main() {
	int i, j, k, d=1,n,m;
	cin>>m;
	int t=sqrt(m);
	n=(2*t)-1;
	for (i=1; i<=t; i++)
	{
		for(k=1; k<i; k++)
			cout<<" ";
		for(j=d; j<=n; j++)
			cout<<j<<" ";
		d=n+1;
		int loc=oddg(t+1-i);
		n=n+loc;
		cout<<endl;
	}
	return 0;
}