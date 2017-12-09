#include<iostream>
#include<map>
using namespace std;
int main(){
map <string,int> coffee;
coffee["Espresso"]= 25;
coffee["Cappuccino"]= 30;
coffee["Tea"]=20;

/* We are searching for the Key using find() function*/
if(coffee.find("Espresso") != coffee.end()){
    cout<<"Key Found"<<endl;
}
else{
    cout<<"Key Not Found"<<endl;
}
/*Using Iterator to print our Map*/
map<string,int> :: iterator it = coffee.begin();
for(it;it!=coffee.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
coffee.insert(make_pair("cold coffee",50));
/*
coffee.erase(it); // Remove the comment if u want to use erase function
*/
cout<<"\nThis Loop Prints the Updated Map"<<endl;
for(it=coffee.begin();it!=coffee.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
return 0;}
