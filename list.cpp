#include<iostream>
#include<list>
using namespace std;
int main(){
list <int> numbers;
numbers.push_back(10);  // push_back is used to insert data from end side in the list
numbers.push_back(20);
numbers.push_back(30);
numbers.push_back(40);

list <int> :: iterator it=numbers.begin(); // created a iterator called it

/*for loop to print our list */
for(it;it != numbers.end();it++){
    cout<<*it<<endl;
}
list <int> :: reverse_iterator ri=numbers.rend(); // This is our reverse Iterator
/*This loop will print list in reverse*/
for(ri;ri != numbers.rend();ri++){
    cout<<*ri<<" ";
}
/*------------------------------------------------------------------------------------------------------*/
/*Below is the Code I used in List Part 2 Video*/
cout<<"Front "<<numbers.front()<<endl;
cout<<"Back "<<numbers.back()<<endl;

numbers.push_front(500); //Adding 500 in front of list
for(it=numbers.begin();it !=numbers.end();it++){
    if(*it==20){
        numbers.insert(it,15);
    }

}
cout<<"We Inserted 500 in front and 15 after 10 , this loop prints the updated list"<<endl;
for(it=numbers.begin();it != numbers.end();it++){
    cout<<*it<<endl;
}
/* I putted the Pop functions in comments

numbers.pop_back();
numbers.pop_front();

remove this comment if u want to use them*/

return 0;
}
