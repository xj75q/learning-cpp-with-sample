#include <iostream>  
using namespace std;  
int demo1()  
{  
    int number=30;    
    int * p;      
    p=&number;//stores the address of number variable    
    cout<<"Address of number variable is:"<<&number<<endl;    
    cout<<"Address of p variable is:"<<p<<endl;    
    cout<<"Value of p variable is:"<<*p<<endl;    
    return 0;  
}


 
int demo2()  
{  
    int a=20,b=10,*p1=&a,*p2=&b;    
    cout<<"Before swap: *p1="<<*p1<<" *p2="<<*p2<<endl;    
    *p1=*p1+*p2;    
    *p2=*p1-*p2;    
    *p1=*p1-*p2;    
    cout<<"After swap: *p1="<<*p1<<" *p2="<<*p2<<endl;    
    return 0;  
}





int main(){
    //demo1();
    demo2();
    // demo3();
}