#include <iostream>  
using namespace std;  
int demo1() {         
    int i=1;      
    while(i<=10)   
    {      
        cout<<i <<"\n";    
        i++;  
    }
    return 0;
}



int demo2() {  
    int i=1;      
    while(i<=3)     
    {    
        int j = 1;    
        while (j <= 3)    
        {      
            cout<<i<<" "<<j<<"\n";      
            j++;  
        }     
        i++;  
    }
    return 0;
}

int demo3() {  
    while(true)  
    {    
        cout<<"Infinitive While Loop";    
    }
    return 0;
}





int main(){
    demo2();
}