///All pair shortest path using c++
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main(){
   //freopen("input.txt","r",stdin);
    int adj[100][100];
    int i,j,k;
    int node,m,n,val;
    cout<<"Enter Nodes Number:";
    cin>>node;
    for( i = 1; i <= node; i++ ){
        for( j = 1; j <= node; j++ ){
            cout<<"Enter data for ["<<i<<"] ["<<j<<"] :";
            cin>>adj[i][j];
        }
    }

    for( k = 1; k <= node; k++ ){
        printf("\n\nD[%d] no Matrix :\n ",k);
        for(i = 1; i <= node; i++){
            for( j = 1; j <= node; j++ ){
                m = adj[i][j];
                n = adj[i][k] + adj[k][j];
                val = min(m,n);
                if( val>60 ) printf("%c\t",236);
                else printf("%d\t",val);
            }
            cout<<endl;
        }
    }
    return 0;
}
