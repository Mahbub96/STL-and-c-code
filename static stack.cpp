#include<iostream>
#include<conio.h>
#include<Windows.h>

using namespace std;

int top = 0;
int stak[100];

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

void push(){
    if(top<100){
        cout<<"\nEnter a integer value : ";
        cin>>stak[top];
        cout<<"\nValue added successfully !";
        top++;
    }
    else cout<<"\nStack overflow ! \a";
    getche();
}

void pop(){
    if(top){
        top--;
        cout<<"\nValue removed form top ";
    }
    else cout<<"\nStack is empty ! \a";
    getche();
}

void display(){
    if(top) for(int i = 0; i < top;i++) cout<<stak[i]<<" ";
    else cout<<"\nStack is Empty ! \a";
    getche();
}

int main() {
    while(1){
        int condition = menu();
        if(condition == 1) push();
        else if(condition == 2) pop();
        else if(condition == 3) display();
        else if(condition == 4) exit(1);
    }
	return 0;
}
