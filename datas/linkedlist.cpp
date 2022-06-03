#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* next;
};
struct node* head = NULL;
struct node* new_node = (struct node*)malloc(sizeof(struct node));


void search_data(){
}

void sort_list(){
}

void traverse(){

    while(node != NULL){
        cout<< node->data<<" ";
        node = node->next;
    }
}


void delete_data(){
}

void update_list()
{
}

void insert_data(int data)
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = temp;
    temp = new_node;
}


int main()
{

    while(1)
    {
        cout<<"                                Linked List Operation\n";
        cout<<"1. Insert Data\n";
        cout<<"2. Update Data\n";
        cout<<"3. Delete Data\n";
        cout<<"4. Traverse Data\n";
        cout<<"5. Sort Data\n";
        cout<<"6. Search Data\n";
        cout<<"7. Exit\n";

        int choice;
        cout<<"Enter Your Choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:

            int data;
            cout<<"Enter Data : ";
            cin>>data;
            insert_data(data);
            break;
        case 2:
            update_list();
            break;
        case 3:
            delete_data();
            break;
        case 4:
            traverse();
            break;
        case 5:
            sort_list();
            break;
        case 6:
            search_data();
            break;
        case 7:
            exit(1);
            break;
        default:
            cout<<"That was an invalid response!\n\n";


        }
    }

}
