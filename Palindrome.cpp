#include<iostream>
using namespace std;
int main()
{
int n,a,rem,sum=0;
cout<<"Enter n for check palindrome or not ";
cin>>n;
a=n;
while(a>0)
{
rem=a%10;
sum=sum*10+rem;
a=a/10;
}

if(n==sum)
{
cout<<"n is palindrome";
}else{
cout<<"n is not a palindrome";
}
return 0;
}
