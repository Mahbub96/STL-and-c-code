///Vector using c plus plus language
#include<iostream>
#include<vector>
#include<cctype>
using namespace std;
int main(){
    int i;
    vector<int> v;
    for( i=0;i<10;i++) v.push_back(i);
    cout<<"size:"<<v.size()<<" capacity:"<<v.capacity()<<" isEmpty:"<<v.empty()<<" Max size:"<<v.max_size()<<endl;
    cout<<"withot iterator:";
    for(i = 0; i < v.size(); i++) cout<<v[i]<<" "; ///Without iterator
    vector <int>::iterator p;
    vector<int>::reverse_iterator rp;
    cout<<endl<<"using iterator:";
    for(p = v.begin(); p != v.end(); p++) cout<< *p << " "; ///using iterator
    cout<<endl<<"using reverse iterator:";
    for(rp = v.rbegin();rp !=v.rend(); rp++) cout<< *rp << " ";///using reverse iterator
    v.assign(5,100);///value assign
    for( i=0;i<10;i++) v.push_back(i);
    cout<<endl<<"using iterator:";
    for(p = v.begin(); p != v.end(); p++) cout<< *p << " "; ///using iterator
    p = v.begin();
    v.insert(p+3,10);///insert 10 at index 3
    cout<<endl<<"using iterator:";
    for(p = v.begin(); p != v.end(); p++) cout<< *p << " "; ///using iterator
    p = v.begin();
    v.erase(p+3);
    cout<<endl<<"using iterator:";
    for(p = v.begin(); p != v.end(); p++) cout<< *p << " "; ///using iterator
    p = v.begin();
    p = v.erase(p,p+5);///erase data from index to 5
    cout<<endl<<"using iterator:";
    for(p = v.begin(); p != v.end(); p++) cout<< *p << " "; ///using iterator
    for( i = 0; i < 5; i++) v.pop_back(); ///pop last 5 value
    cout<<endl<<"using iterator:";
    for(p = v.begin(); p != v.end(); p++) cout<< *p << " "; ///using iterator
    return 0;
}
