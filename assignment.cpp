///Assignment on make forward and backward using STL
#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<string> back_stack;
    stack<string> fwd_stack;
    string temp;

    while(temp!="exit"){
        cout<<"[1] visit URL \t[2] back [3] forward \t \n";
        cin>>temp;
        if(temp == "exit")
            break;
        else{
            if(temp=="1"){
            cout<<"Enter URL : ";
            cin>>temp;
            back_stack.push(temp);
            while(fwd_stack.size()) fwd_stack.pop();
        }
        else if( temp == "2" ){
            cout<<"\nGoing back...\n";
            fwd_stack.push(back_stack.top());
            back_stack.pop();
        }
        else if( temp == "3" ){
            cout<<"\nGoing forward ..\n";

            if(!fwd_stack.empty()){
                back_stack.push(fwd_stack.top());
                fwd_stack.pop();
            }

        }
        if(back_stack.empty())
            break;
        cout<<"Current URL : "<<back_stack.top()<<endl;
        }
    }
    return 0;
}


