#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
     int val;
     Node* next;
    Node(int val) {
        this->val=val;
        this->next=NULL;

    }
};
void input(Node* head, Node*tail, int val){
    Node * newNode= new Node(val);
    if(head==NULL){
        head = newNode;
        tail= newNode;
    }
    tail->next=newNode;
    tail= newNode;
}
int size(Node * head){
    int count=0; 
    Node * tmp= head;
    while (tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
    
}
void print(Node *head){
    Node * tmp= head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
}
int main(){
    Node * head1= NULL;
    Node * tail1= NULL;
    Node * head2= NULL;
    Node * tail2= NULL;

    int val;
    while(true){
        cin>>val;
        if(val==-1) break;
        input(head1, tail1, val);

    }
    while(true){
        cin>>val;
        if(val==-1) break;
        input(head2, tail2, val);

    }
    if(size(head1)==size(head2)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    print(head1);
    print(head2);
    return 0;
}