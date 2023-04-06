#include <iostream>
#include<chrono>
#include <ctime>
using namespace std;
//Implementation of a stack using linkedlist
struct Node{
    int data;
    struct Node *next;
};
struct Node* top =NULL;
void display(){
    if(top==NULL){
        cout<<"Stack is empty"<<endl;
        exit(1);
    }
    Node *New_Node=top;
    cout<<"{";
    while(New_Node->next!=NULL){
        cout<<New_Node->data<<",";
        New_Node=New_Node->next;
    }
    cout<<"\b}\n";
}

int pop(){
    if (top==NULL){cout << "Stack is EMPTY";exit(1);}
    int data=top->data;
    top=top->next;
    return data;
}
void push(int data){
    struct Node* New_Node=(struct Node*)malloc(sizeof(struct Node));
    New_Node->data=data;
    New_Node->next=top;
    top=New_Node;
}

int main() {



    clock_t start, stop;
    double totalTime;

    start = clock();





    push(8);
    push(10);
    push(5);
    push(11);
    push(15);
    push(23);
    push(6);
    push(18);
    push(20);
    push(17);
    display();

    for(int i=0;i<5;i++){pop();}
    display();
    push(4);
    push(30);
    push(3);
    push(1);
    display();
    stop = clock();
    totalTime = (stop - start) / (double)CLOCKS_PER_SEC;
    double toTime = totalTime*1000;
    ::printf("Time taken  : %f  milisecounds  ",toTime);

    return 0;
}