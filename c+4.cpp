#include <iostream>  
using namespace std;  
int main () {  
    int num;  
    cout<<"Enter a number to check grade:";    
    cin>>num;  
    switch (num)    
    {    
        case 10: cout<<"It is 10"<<endl; break;    
        case 20: cout<<"It is 20"<<endl; break;    
        case 30: cout<<"It is 30"<<endl; break;    
        default: cout<<"Not 10, 20 or 30"<<endl; break;    
    }
    return 0;
}


