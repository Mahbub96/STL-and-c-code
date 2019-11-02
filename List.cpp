///List using STL of c++
#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main(){
    list<int> l;
    list<int>::iterator it,it1;
    int i;
    for( i = 1; i <= 10; i++ ) l.push_back(i);
    for( it = l.begin(); it != l.end(); it++) cout<<*it<<" ";
    cout<<endl;

    for( i = 1; i <= 10; i++ ) l.push_front(i*10);
    for( it = l.begin(); it != l.end(); it++) cout<<*it<<" ";
    cout<<endl;

    ///erase value
    it = l.begin();
    l.erase(it);
    for( it = l.begin(); it != l.end(); it++) cout<<*it<<" ";
    cout<<endl;

    it = l.begin();
    l.erase(it);
    for( it = l.begin(); it != l.end(); it++) cout<<*it<<" ";
    cout<<endl;

    it = it1 = l.begin();
    advance(it1,6); ///shift iterator position to n index
    l.erase(it,it1);
    for( it = l.begin(); it != l.end(); it++) cout<<*it<<" ";
    cout<<endl;

    it = l.begin();
    advance(it,5);
    l.erase(it);
    for( it = l.begin(); it != l.end(); it++) cout<<*it<<" ";
    cout<<endl;

    it = l.begin();
    it1 = l.end();
    l.erase(it,it1);
    for( it = l.begin(); it != l.end(); it++) cout<<*it<<" ";
    cout<<endl;

    ///insert value
    it = l.begin();
    l.insert(it,1);
    for( it = l.begin(); it != l.end(); it++) cout<<*it<<" ";
    cout<<endl;

    l.insert(it,2);
    for( it = l.begin(); it != l.end(); it++) cout<<*it<<" ";
    cout<<endl;

    ///miltiple insert
    l.insert(it,4,3);
    for( it = l.begin(); it != l.end(); it++) cout<<*it<<" ";
    cout<<endl;

    advance(it,5);
    l.insert(it,5);
    l.insert(it,6);
    for( it = l.begin(); it != l.end(); it++) cout<<*it<<" ";
    cout<<endl;

    ///insert value using vector
    vector<int> v;
    for(i=0;i<10;i++) v.push_back(i);
    it = l.end();
    l.insert(it,v.begin(),v.end());
    for( it = l.begin(); it != l.end(); it++) cout<<*it<<" ";
    cout<<endl;


    return 0;
}
