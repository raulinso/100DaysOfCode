#include <iostream>
using namespace std;
int stack[5], n=5, top=-1;
void push(int a){
    if(top>n-1) {cout<<"Stack Overflow"<<endl;}
    else{
        top++;
        stack[top]=a;
    }
}
void pop(){
    if(top<0) {cout<<"Stack Underflow"<<endl;}
    else{
        cout<<"The popped number is ";
        cout<<stack[top]<<endl;
        top--;
    }
}
void display(){
    if(top>0){
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"The stack is Empty"<<endl;;
    }
}
int main(){
    int ch,val;
    cout<<"1) Push"<<endl;
    cout<<"2) Pop"<<endl;
    cout<<"3) Display"<<endl;
    cout<<"4) Exit"<<endl;
    do{
        cout<<"Enter the choice ";
        cin>>ch;
        cout<<endl;
        switch(ch){
            case 1:{
                cout<<"Enter the number"<<endl;
                cin>>val;
                push(val);
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                display();
                break;
            }
            case 4:{
                cout<<"Exit"<<endl;
                break;
            }
            default:{
                cout<<"Invalid Input"<<endl;
            }
        }
    }while(ch!=4);
    return 0;
}
