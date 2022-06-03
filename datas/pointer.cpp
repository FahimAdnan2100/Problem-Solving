#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* next;
};
struct node* head = (struct node*)malloc(sizeof(struct node));
struct node* new_node=NULL;
void insert_node()
{


    int x;
    cin>>x;
    new_node->data=x;
    new_node->next=head;
    head = new_node;
}

void traverse()
{
    struct node* temp;
    temp=head;
    while(temp!=NULL){
         cout <<temp->data<<" ";
        temp = temp->next;
    }
    temp=head;


}


int main()
{

    insert_node();
    traverse();






}

