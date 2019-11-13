///All pair shortest path using c++
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    int node,m,n,val;
    cout<<"Enter Nodes Number:";
    cin>>node;
    printf("Read Carefully!\n\tIf you want to Input %c you have to input a value that is more than 60 \n\t that value count as infinity ",236);
    int adj[node+1][node+1];
    int i,j,k;
    for( i = 1; i <= node; i++ ){
        printf("\nEnter %d No. row : ",i);
        for( j = 1; j <= node; j++ ){
            cin>>adj[i][j];
        }
    }

    for( k = 0; k <= node; k++ ){
        if(!k){
            printf("\n\nD[%d] no Matrix :\n",k);
            for( i = 1; i <= node; i++ ){
                for( j = 1; j <= node; j++ ){
                    if( adj[i][j]>60 ) printf("%2c\t",236);
                    else printf("%2d\t",adj[i][j]);
                }
                cout<<endl;
            }
        }
        else{
            printf("\n\nD[%d] no Matrix :\n",k);
            for(i = 1; i <= node; i++){
                for( j = 1; j <= node; j++ ){
                    if((i==k) || (j==k)){
                        if( adj[i][j]>60 ) printf("%2c\t",236);
                        else printf("%2d\t",adj[i][j]);
                    }
                    else{
                        m = adj[i][j];
                        n = adj[i][k] + adj[k][j];
                        val = min(m,n);
                        adj[i][j] = val;
                        if( adj[i][j]>60 ) printf("%2c\t",236);
                        else printf("%2d\t",adj[i][j]);
                    }
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
