#include<iostream>
#include<map> /* We use map header for multimap , there is no different headerfile for multimap*/
using namespace std;
int main(){
multimap <int,string> buddy;
buddy.insert(make_pair(10,"Deepak"));
buddy.insert(make_pair(20,"Mike"));
buddy.insert(make_pair(30,"John"));
buddy.insert(pair<int,string>(10,"Sam"));

multimap <int,string> :: iterator it=buddy.begin();
for(it;it!=buddy.end();it++){
    cout<<it->first<<" : "<<it->second<<endl;
}
cout<<"\nEmpty :"<<buddy.empty()<<endl;
cout<<"Size :"<<buddy.size()<<endl;

auto lb=buddy.lower_bound(20);
auto ub=buddy.upper_bound(30);

cout<<"\n";
for(it=lb ; it!=ub;it++){
    cout<<it->first<<" : "<<it->second<<endl;
}
return 0;}
/*All Inbuilt function are valid Map are also valid for Multimap and Vice-Versa*/
