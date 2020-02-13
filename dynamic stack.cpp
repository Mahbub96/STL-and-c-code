#include<iostream>
#include<conio.h>
#include<stack>
#include<string>
#include<Windows.h>

using namespace std;

int menu() {
	system("cls");
	cout << "1.for push value in stack \n";
	cout << "2.for pop value in stack \n";
	cout << "3.for display value in stack \n";
	cout << "4.for Exit \n";
	cout<<"\n\t Press any key : ";
	int choice;
	cin>>choice;
	system("cls");
	return choice;
}

int main(){
    stack<string> s,s1;
    while(1){
        int condition = menu();
        if(condition == 1){
            string temp;
            cout<<"\nEnter a value : ";
            cin>>temp;
            s.push(temp);
        }

        else if(condition == 2){
            cout<<"\nValue Removed successfully from top !";
            s.pop();
            getche();
        }

        else if(condition == 3){
            s1 = s;
            for(int i = 0; i < s.size(); i++){
                cout<<"\t"<<s1.top()<<endl;
                s1.pop();
            }
            getche();
        }
        else if (condition == 4) exit(1);
    }

    return 0;
}
