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
void reverse(Node *n){
    if(n==NULL) return;
    reverse(n->next);
    cout<<n->val<<" ";

}
int main(){
    Node * head= NULL;
    Node * tail = NULL;
    int val;
    while(true){
        if(val==-1) break;
        input(head, tail, val);
         reverse(head);
    }
   
    
    return 0;
}