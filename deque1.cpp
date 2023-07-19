#include<bits/stdc++.h>
using namespace std;
/*
begin() – it refers to the first element of the deque.
end() – it refers to the theoretical element after the last element of the deque.
cbegin() – it refers to the first element of the deque.
cend() – it refers to the theoretical element after the last element of the deque
rbegin() – it points to the last element of the deque.
rend() – it points to the theoretical element before the first element of the deque.
emplace_front() – to insert an element at the front of the deque.
emplace_back() – to insert an element at the end of the deque.
max_size() – the maximum elements a deque can hold.
clear() – to delete all the elements of the deque.
erase() – to delete a single element or elements between a particular range.
*/
void printdeque(deque<int> dq)
{
   deque<int>::iterator it;
   for(it=dq.begin();it!=dq.end();it++)
   {
      cout<<*it<<" ";
   }
   cout<<endl;
}

int main()
{
   deque<int> dq;
   dq.push_back(10);
   dq.push_back(20);
   dq.push_front(30);
   dq.push_front(40);
   dq.push_front(50);

   cout<<"The elements in the deque are: ";
   printdeque(dq);

   cout<<"The size of the deque is: "<<dq.size()<<endl;
   cout<<"The first element in the deque: "<<dq.front()<<endl;
   cout<<"Deleting the first element"<<endl;
   dq.pop_front();
   printdeque(dq);
   cout<<"The last element of the deque: "<<dq.back()<<endl;
   cout<<"Deleting the last element"<<endl;
   dq.pop_back();
   printdeque(dq);
}