#include<bits/stdc++.h>
using namespace std;
/*
Other Functions:

cbegin() – it refers to the first element of the vector.
cend() – it refers to the theoretical element after the last element of the vector.
rbegin() – it points to the last element of the vector.
rend() – it points to the theoretical element before the first element of the vector.
crbegin() – it refers to the last element of the vector.
crend() – it refers to the theoretical element before the first element of the vector.
max_size() – returns the maximum size the vector can hold.
capacity() – it returns the current capacity of the vector.
*/
int main()
{
   vector <int> v;

   for(int i=0;i<10;i++)
   {
      v.push_back(i);
   }
   cout<<"The elements in the vector :";
   for(auto it=v.begin();it!=v.end();it++)
      cout<<*it<<" ";
   cout<<"\nTe front element: "<<v.front();
   cout<<"\nThe last element: "<<v.back();
   cout<<"\nThe size of the vector: "<<v.size();
   cout<<"\nDelete element from end: "<<v[v.size()-1];
   v.pop_back();

   cout<<"\nPrinting vector after removing the last element: "<<endl;
   for(int i=0;i<v.size();i++)
   {
      cout<<v[i]<<" ";
   }

   cout<<"\nInserting 5 at the beginning: "<<endl;
   v.insert(v.begin(),5);
   cout<<"The first element is: "<<v[0]<<endl;
   
   cout<<"Erasing the first element: "<<endl;
   v.erase(v.begin());

   cout<<"Now the first element is: "<<v[0]<<endl;

   if(v.empty())
      cout<<"\nvector is empty";
   else 
      cout<<"\nvector is not empty";
   
   v.clear();
   cout<<"\nSize of the vector after clearing the vector:"<<v.size();

   return 0;
}