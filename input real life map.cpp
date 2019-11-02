///Real Life map solving using STL
#include<iostream>
#include<vector>
#include<list>

using namespace std;
const int n = 4;
int main(){
    vector<list<int> > adjList(n);

    adjList[0].push_back(1);
    adjList[0].push_back(2);

    adjList[1].push_back(0);
    adjList[1].push_back(2);

    adjList[2].push_back(0);
    adjList[2].push_back(1);
    adjList[2].push_back(3);

    adjList[3].push_back(2);

    int c = 0;
    vector<list<int> >::iterator i;


    for( i = adjList.begin(); i != adjList.end(); i++ ){
        cout<<"vertex connected to node "<<c<<" are ";
        list<int> li = *i;
        for( list<int>::iterator ili = li.begin(); ili != li.end(); ili++ ){
            cout<<*ili<<" ";

        }
        cout<<endl;
        c++;

    }

    return 0;
}
