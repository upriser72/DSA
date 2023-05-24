#include<bits/stdc++.h>
using namespace std;
int main()
{
   //array elements are stored in consecutive memory addresses
   //string as array
   string s="Striver";
   int len=s.size();
   cout<<s[len-1]<<endl;
   s[len-1]='z';
   cout<<s[len -1];
   return 0;
}