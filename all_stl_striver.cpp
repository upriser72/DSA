#include<bits/stdc++.h>
using namespace std;
//in the utility library
//PAIR AS DATA TYPE----------------------------------------------------------------
void pairs()
{
   pair<int,int> p={1,5};
   cout<<p.first<<" "<<p.second<<endl;

   pair<int,pair<int,int>> q={2,{4,6}};
   cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;

   pair<int,int> arr[] ={{1,2},{3,7},{8,4}};
   cout<<arr[1].second<<" "<<arr[0].first;
}

//VECTORS -----------------------------------------------------------------------------
void vectors()
{
   vector<int> v;
   v.push_back(1);
   v.emplace_back(3);

   vector<pair<int,int>>vec;
   vec.push_back({3,5});
   vec.emplace_back(6,1);

   vector<int> v(5,100);//5 times 100 will be entered in vector
   vector<int> v(5);//vector of size 5 with garbage value or zero
   vector<int> v1(6,20);
   vector<int> v2(v1);//insert values of v1 in v2

   vetor<int>::iterator it=v.begin();
   it++;
   cout<<*(it)<<" ";

   it+=2;
   cout<<*(it)<<" ";

   vector<int>::iterator it=v.end();
   vector<int>::iterator it=v.rend();
   vector<int>::iterator it=v.rbegin();

   cout<<v[0]<<" "<<v.at(0);
   cout<<v.back()<<" ";

   for(vector<int>::iterator it= v.begin(); it!= v.end();it++)
   {
      cout<<*(it)<<" ";
   }

   for(auto it=v.begin();it!=v.end();it++)
   {
      cout<<*(it)<<" ";
   }

   for(auto it:v)
   {
      cout<<it<<" ";
   }

   //{10,20,30,40}
   v.erase(v.begin()+1);//deletes 20

   //{10,20,30,40}
   v.erase(v.begin()+1,v.begin()+3);//deletes 20,30

   //insert function
   vector<int> v(2,100);//{100,100}
   v.insert(v.begin(),300);//{300,100,100}
   v.insert(v.begin()+1,200);//{300,200,100,100}
   v.insert(v.begin()+1,2,10);//{300,10,10,200,100,100}

   vector<int> copy(2,50);//{50,50}
   v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,10,10,200,100,100}

   cout<<v.size();
   v.pop_back();

   //v1={10,20}
   //v2={40,30}
   v1.swap(v2);//v1={40,30} & v2={10,20}

   v.clear();
   cout<<v.empty();//true/false

}

//LIST --------------------------------------------------------
void lists()
{
   list<int> ls;
   ls.push_back(1);
   ls.emplace_back(4);
   ls.push_front(5);
   ls.emplace_front(9);
   //list lets front and back operations unlike vectors who only take back operations

}
//STACK----------------------------------------------------
void stacks()
{
   stack<int> st1,st2;
   st1.swap(st2);
   //rest push pop top emplace etc
   //every operation in stack and queue takes O(1) complexity

}
//HEAP IS THE SAME AS PRIORITY QUEUE
//push and pop ->logn
//top ->O(1)

//SET ----------------------------------------------------------------
void sets()
{
   //{1,2,3,4,5}
   auto it1= st.find(2);
   auto it2= st.find(4);
   st.erase(it1,it2);//{1,4,5}

   auto it=st.lower_bound(2);
   auto it=st.upper_bound(2);

   //every function takes log n complexity
}

//MULTISET----------------------------------------------------------------
void multisets()
{
   multiset<int> ms;
   ms.insert(1);
   ms.insert(1);
   ms.insert(1);

   ms.erase(1);//erases all occurences of 1

   ms.erase(ms.find(1));//erases first occurence of 1

   ms.erase(ms.find(1),ms.find(1)+2);//erases two occurences of 1

}
//unordered set takes O(1) and lower and upper bound func don't work
//MAPS-----------------------------------------------------------------------------------
void maps()
{
   mp<int,int> mpp;
   map<int,pair<int,int>> mpp;
   map<pair<int,int>,int> mpp;

   mpp[1]=2;//{1,2} 1 is the key
   mpp.emplace({3,1});
   mpp.insert({2,4});//{{1,2},{2,4},{3,1}}
   //ascending order or keys is maintained by default in map and keys are unique

   mpp[{2,3}]=10;//{{2,3},10} pair and int type of map

   

}
int main()
{
   pairs();
   vectors();
   return 0;
}