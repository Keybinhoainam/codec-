#include<bits/stdc++.h>
using namespace std;
void kt(int h[], int n) 
{ 
     long long max1,kq=0,tp,i=0;
     stack<int>a;
     while(i<n)
     {
     	if(a.empty()||h[a.top()]>h[i])
     	{
     		kq=(a.empty()?i+1:i-a.top());
     		a.push(i);
     		
		}
     	else
     	{
     		while(!a.empty()&&h[a.top()]<=h[i])a.pop();
     		kq=(a.empty()?i+1:i-a.top());
     		a.push(i);
		}
		cout<<kq<<" ";
		i++;
	 }
//	 while(!a.empty())
//	 {
//	 	tp=a.top();
//	 	a.pop();
//	 	max1=h[tp]*(a.empty()?i:(i-a.top()-1));
//	 	kq=max(max1,kq);
//	 }
//	 return kq;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int h[n];
		for(int i=0;i<n;i++)cin>>h[i];
		kt(h,n);
		cout<<endl;
	}
}

