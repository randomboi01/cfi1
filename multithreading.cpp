#include <iostream>
#include <thread>

using namespace std;

void print1(){
    cout<<"hello world"<<endl;
}

void print2(){
    cout<<"hello world"<<endl;
}

int main(){
    cout<<"Using both threads to operate independently"<<endl;
    thread th1(print1);
    thread th2(print2);

    th1.join();
    th2.join();

    return 0;
}