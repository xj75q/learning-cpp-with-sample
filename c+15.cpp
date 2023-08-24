#include <iostream>  
using namespace std;  
int demo1()  
{  
    int arr[5]={10, 0, 20, 0, 30};  //creating and initializing array    
    //traversing array    
    for (int i = 0; i < 5; i++)    
    {    
        cout<<arr[i]<<"\n";    
    }
    return 0;
}

int demo2()  
{  
    int arr[5]={10, 0, 20, 0, 30}; //creating and initializing array    
    //traversing array    
    for (int i: arr)     
    {    
        cout<<i<<"\n";    
    }
    return 0;
}




int main(){
    demo2();
}