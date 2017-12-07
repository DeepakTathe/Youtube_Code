#include<iostream>
using namespace std;
struct node{
node *prev;
int data;
node *next;
};
struct node *start=NULL;  // Start Pointer
/*
Function Create_Node to allocate memory for new node
and to Input Data from User
*/
node* create_node(){
node *n = new node;
cout<<"Please enter the Data"<<endl;
cin>>n->data;
n->next = NULL;
n->prev = NULL;
return n;
}
/*
Function used to Insert Node at the end of the List
and also checks for the first Node
*/
void insert_node(){
node *temp;
temp = create_node();
if(start == NULL){
    start = temp;
}
else{
    node *traverse;
    traverse = start;
    while(traverse->next != NULL){
        traverse = traverse->next;
    }
    traverse->next=temp;
    temp->prev=traverse;
}
}
/*
Function to add node at front of the List
*/
void add_begin(){
node *temp;
temp = create_node();
temp->next = start;
start->prev = temp;
start=temp;

}
/*
Function to add Node after a desired Node
*/
void add_after(){
node *temp;
temp= create_node();
int value;
cout<<"Enter the value after which the data has to be inserted :"<<endl;
cin>>value;
node *traverse;
traverse = start;
while(traverse->data!=value){
    traverse = traverse->next;
}
temp->prev = traverse;
temp->next=traverse->next;
traverse->next->prev = temp;
traverse->next = temp;

}
/*Function to display the doubly linked list*/
void display(){
node *traverse;
traverse  = start;
while(traverse!=NULL){
    cout<<traverse->data<<" ";
    traverse = traverse->next;
}
}
/*Function to delete the First Node*/
void delete_beg(){
node *temp;
temp = start;
start = start->next;
cout<<temp->data<<" has been deleted"<<endl;
delete(temp);
}
/*Function to delete the Last node*/
void delete_end(){
node *traverse;
traverse = start;
while(traverse->next != NULL){
traverse = traverse->next;
}
traverse->prev->next = NULL;
cout<<traverse->data<<" has been deleted"<<endl;
delete(traverse);
}
/*Delete a Node after some Node*/
void delete_after(){
int value;
cout<<"Enter the value after which the node has to be deleted"<<endl;
cin>>value;
node *traverse;
traverse = start;
while(traverse->data != value){
    traverse = traverse->next;
}
node *temp;
temp = traverse->next;
traverse->next = temp->next;
temp->next->prev = traverse;
cout<<temp->data<<" has been deleted"<<endl;
delete(temp);

}

int main(){
int option;
do{
cout<<"\nEnter 0 If You want to exit"<<endl;
cout<<"---------------------------------"<<endl;
cout<<"1 Add Node"<<endl;
cout<<"2 Insert Node at First Position"<<endl;
cout<<"3 Add Node After a given Node"<<endl;
cout<<"4 Delete Last Node"<<endl;
cout<<"5 Delete First Node"<<endl;
cout<<"6 Delete Node After a given Node"<<endl;
cout<<"7 Display"<<endl;

cin>>option;
   switch(option){
   case 1:insert_node();
          break;
   case 2: add_begin();
           break;
   case 3: add_after();
           break;
   case 4: delete_end();
           break;
   case 5: delete_beg();
           break;
   case 6: delete_after();
           break;
   case 7: display();
           break;
   }

}while(option != 0);
return 0;}
