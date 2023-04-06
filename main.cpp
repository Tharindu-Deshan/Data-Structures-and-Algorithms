
//week_6
#include <iostream>
#include <ctime>

using namespace std;
//implement stack using array
#define MAXIMUM 1000
int array_stack[MAXIMUM];
int head=-1;     //top=-1 indicates th stack is empty
void push(int data){
    if(head==MAXIMUM-1){
        cout<<"Stack overflow";
        return;
    }
    head++;
    array_stack[head]=data;
}
int pop(){
    if(head==-1){
        cout<<"Stack underflow";
        exit(1);
    }
    head--;
    return array_stack[head+1];
}
void display(){
    cout<<"{";
    for(int i=0;i<=head;i++){
        ::printf("%d  ",array_stack[i]);
    }
    cout<<"\b}\n";
}


int main() {
    //stack implementation using arrays
    clock_t start, stop;
    double totalTime;
    start = clock();
    // Do stuff here


    //auto begin1 =chrono::high_resolution_clock::now();
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
    int totime = totalTime*1000;
    ::printf("Time taken : %d milisecounds ",totime);


    return 0;
}
