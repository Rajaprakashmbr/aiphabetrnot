#include<iostream>
using namespace std;
int main()
{
int a[100],i,j,n;
cout<<"enter the number:\n";
cin>>n;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
cout<<a[i];
}
}
}
return 0;
}
