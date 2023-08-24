#include <iostream>  
using namespace std;  
void change(int data);  
int demo1()  
{  
    int data = 3;  
    change(data);  
    cout << "Value of the data is: " << data<< endl;  
    return 0;  
}  
void change(int data)  
{  
    data = 5;  
}


#include<iostream>  
using namespace std;    
void swap(int *x, int *y)  
{  
    int swap;  
    swap=*x;  
    *x=*y;  
    *y=swap;  
}  
int demo2()   
{    
    int x=500, y=100;    
    swap(&x, &y);  // passing value to function  
    cout<<"Value of x is: "<<x<<endl;  
    cout<<"Value of y is: "<<y<<endl;  
    return 0;  
}




int main(){
    demo2();
}