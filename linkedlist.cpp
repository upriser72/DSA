#include<bits/stdc++.h>
using namespace std;
struct Node {
   public:
   int data;
   Node*next;

   public:
   Node(int data1){
      data=data1;
      next=nullptr;
   }
};

Node* convertArr2LL(vector<int> &arr)
{
   Node* head = new Node(arr[0]);
   Node* mover =head;
   for(int i=1;i<arr.size();i++)
   {
      Node* temp=new Node(arr[i]);
      mover->next=temp;
      mover=temp;
   }
   return head;
}
int lengthOfLL(Node* head)
{
   int count=0;
   Node* temp=head;
   while(temp)
   {
      temp= temp->next;
      count++;
   }
   return count;

}
int checkIfPresent(Node* head,int val)
{
   Node* temp=head;
   while(temp)
   {
      if(temp->data==val) return 1;
      temp= temp->next;
   }
   return 0;
}
Node* InsertBeginning(Node* head,int val)
{
   Node* temp=new Node(val);
   temp->next=head;
   head=temp;
   return head;
}

Node *deleteLast(Node *head){
    Node*temp=head;
    if (head == NULL || head->next == NULL)
        return NULL;
    while(temp->next->next!=nullptr)
    {
        temp=temp->next;
    }
    
    delete temp->next;
    temp->next=nullptr;
    return head;
    
}
int main()
{
   vector<int> arr={16,5,8,7};
   //Node* y=new Node(arr[0],nullptr);
   Node* head =convertArr2LL(arr);
   cout<<head->data<<endl;
   int len=lengthOfLL(head);
   cout<<len<<endl;
   Node* temp=head;
   while(temp)
   {
      
      cout<<temp->data<<" ";
      temp= temp->next;

   }
   cout<<endl;
   cout<< checkIfPresent(head,9);
   cout<<endl;
   
   head=InsertBeginning(head,62);
   Node* temporary=head;
   while(temporary)
   {
      
      cout<<temporary->data<<" ";
      temporary= temporary->next;

   }

   return 0;
}