#include <iostream>  
using namespace std;  
int demo1() {  
    for(int i=1;i<=10;i++){      
        cout<<i <<"\n";      
    }
    return 0;
}



int demo2() {  
    for(int i=1;i<=3;i++){      
        for(int j=1;j<=3;j++){      
            cout<<i<<" "<<j<<"\n";      
        }     
    }
    return 0;
}


int demo3() {  
    for (; ;)    
    {    
        cout<<"Infinitive For Loop"<<endl;    
    }
    return 0;
}





int main(){
    demo2();
}