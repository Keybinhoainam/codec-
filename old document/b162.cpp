#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,m,k;
		cin>>n>>m>>k;
		long long a[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		int b[10000]={0};
		int t=0;
		long long i,vt=0,j,sovt=min(n,m)/2;
		while(vt<sovt)
		{
			j=vt;
			while(j<m-vt)
			{
//				cout<<a[vt][j]<<" ";
				b[t++]=a[vt][j];
				j++;
			}
			i=vt+1;
			while(i<n-vt)
			{
//				cout<<a[i][m-1-vt]<<" ";
				b[t++]=a[i][m-1-vt];
				i++;
			}
			j=m-2-vt;
			while(j>=vt)
			{
//				cout<<a[n-vt-1][j]<<" ";
					b[t++]=a[n-vt-1][j];
				j--;
			}
			i=n-vt-2;
			while(i>vt)
			{
//				cout<<a[i][vt]<<" ";
				b[t++]=a[i][vt];
				i--;
			}
			vt++;
		}
//		vt--;
		if(n<m&&n%2!=0)
		{
			j=vt;
			while(j<m-vt)
			{
//				cout<<a[vt][j]<<" ";
				b[t++]=a[vt][j];
				j++;
			}
			i=vt+1;
		}
		if(m<n&&m%2!=0)
		{
			i=vt;
			while(i<n-vt)
			{
//				cout<<a[i][m-1-vt]<<" ";
				b[t++]=a[i][m-1-vt];
				i++;
			}
		}
		cout<<b[k-1];
//cout<<b[0];
		cout<<endl;
	}
}
