#include<iostream>
using namespace std;

int main()
{   
    int a = 10;
    int* p = &a;
    cout<<"The address of variable a using pointer p is "<<p<<endl;
    cout<<"The value of variable a using the pointer p is "<<*p<<endl;
    return 0;
}