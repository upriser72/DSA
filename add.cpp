#include<bits/stdc++.h>
using namespace std;

//program to add two numbers 

int sum(int x,int y)
{
   int result=x+y;
   return result;
}
int main()
{
   int num1,num2;
   cin>> num1>>num2;
   int res=sum(num1,num2);
   // cout<<res;
   return 0;
}