#include<iostream>
#include<unistd.h>
#include<windows.h>

using namespace std;


DWORD WINAPI Thread1(LPVOID value){

    int *x=(int *)value;
    while (*x<1000){
        usleep(40);
        (*x)++;
    }
    return *x;
}

int main(){

    int x=0,y=0;
    unsigned int counter=0;
    DWORD myThreadID;
    HANDLE Handler=CreateThread(0,0, Thread1, &counter, 0, &myThreadID);
    while(y<1000){
         cout<<"x= "<<counter<<" y= "<< y<<endl;
        y++;
    }
  
    while(counter<1000){
        cout<<"x= "<<counter<<endl;
    }
    CloseHandle(Handler);
    return 0;

}
