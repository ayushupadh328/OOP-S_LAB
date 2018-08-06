#include<iostream>
using namespace std;
int main()
{
string a,b;
int i,c=0,j;
cout<<"enter the string";
cin>>a;
cout<<"enter the 2nd string";
cin>>b;
for(a[i]='\0';i>=0;i--)
{
    for(b[j]='\0';i>=0;j--)
    {
    if(a[i]==b[j])
{
c++;
}
}
}
if(c>=1)
{
cout<<"1";
}
else
{
cout<<"0";
}
}

