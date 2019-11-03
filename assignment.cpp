#include <iostream>

#include<stack>

#include<stdlib.h>

#include<conio.h>

using namespace std;
stack<string> forword;
stack<string> backword;
void fw(){
    
}
void bw(){
    
}
void url(){
    cout<<endl;
    string url;
    cout<<"Enter URL: ";
    cin>>url;
    forword.push(url);
}

void menu(){
    cout<<endl<<" 1. enter URL: \t 2.back \t 3.forword\t4.exit\n\t Press any key:\n";
    int choice;
    cin>>choice;
    if(choice == 1) url();
    else if(choice == 2 ) bw();
    else if(choice ==3 ) fw();
    else exit(1);
    getch();
    menu();
}

int main(){
    menu();
}