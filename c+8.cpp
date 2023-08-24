#include <iostream>  
using namespace std;  
int demo1() {  
    for (int i = 1; i <= 10; i++)    
    {    
        if (i == 5)    
        {    
            break;    
        }    
        cout<<i<<"\n";    
    }
    return 0;
}


int demo2()  
{  
    for(int i=1;i<=3;i++){        
        for(int j=1;j<=3;j++){        
            if(i==2&&j==2){        
                break;        
            }        
            cout<<i<<" "<<j<<"\n";             
        }        
    }
    return 0;
}




int main(){
    demo1();
    demo2();
}