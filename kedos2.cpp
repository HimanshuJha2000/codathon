#include <iostream>
using namespace std;

int main() {
	int n , j , i, count =1, k;
	cin>>n;
	for(i=1; i<=n; i++)
	{
		for(k=0; k<=i-1; k++)
		{
			cout<<" ";
		}
		for(j=1; j<=2*(n-i)+1; j++)
		{
			cout<<count;
			count++;
		}
		cout<<endl;
	}
	return 0;
}