#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
};

node *start=NULL;

node *createNode(){
node *temp;
temp = new node;
return temp;
}

void insertNode(){
node *temp,*traverse;
int n;
cout<<"Enter -1 to End"<<endl;
cout<<"Enter the values to be added in List"<<endl;
cin>>n;
while( n!=-1){
    temp = createNode();
    temp->data = n;
    temp->next = NULL;

    if(start == NULL){
        start = temp;
    }
    else{
        traverse = start;
        while(traverse->next != NULL){
            traverse= traverse->next;
        }
        traverse->next= temp;
        }
   cout<<"Enter the value to be added in the list"<<endl;
   cin>>n;

}
}
void printlist(){
node *traverse = start;
while(traverse != NULL){

    cout<<traverse->data<<" ";
    traverse = traverse->next;
}
}
int main(){

  int option;
  do{
    cout<<"---------------Main Menu-------------------"<<endl;
    cout<<"1 :Create List"<<endl;
    cout<<"2. Print List"<<endl;
    cout<<"3. Exit"<<endl;
    cin>>option;

    switch(option){
    case 1:insertNode();
           break;
    case 2:printlist();
           break;
    }
  }while(option != 3);

}
/*Don't forget to watch My Video on How to code Doubly linked list , Once You Understand Doubly Linked List then
you can code any program using LinkedList by yourself*/
