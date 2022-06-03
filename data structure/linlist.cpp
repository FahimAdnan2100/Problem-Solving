#include<bits/stdc++.h>
using namespace std;



struct node
{
    int data;
    struct node *link;
};

struct node *root=NULL;


void append()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    cout<<"Enter the data : ";
    cin>>temp->data;
    temp->link=NULL;

    if(root==NULL){
        root=temp;
    }else{
        struct node *p;
        p=root;
        while(p->link != NULL){
            p=p->link;

        }
        p->link=temp;
    }

}
void display()
{
    struct node *temp;


}

int main()
{

    int ch;
    while(1)
    {
        cout<<"1. Append\n";
        cout<<"2. Display\n";
        cout<<"3. exit\n";

        cout<<"Enter your choice :  ";
        cin>>ch;

        switch(ch)
        {
        case 1:
            append();
            break;

        case 2:
            display();
            break;

        case 3:
            exit(1);

        }
    }






}

