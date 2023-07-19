#include<bits/stdc++.h>
using namespace std;
//in the utility library
int main()
{
   pair<int,int> p={1,5};
   cout<<p.first<<" "<<p.second<<endl;

   pair<int,pair<int,int>> q={2,{4,6}};
   cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;

   pair<int,int> arr[] ={{1,2},{3,7},{8,4}};
   cout<<arr[1].second<<" "<<arr[0].first;

   return 0;
}