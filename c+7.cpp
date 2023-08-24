#include <iostream>  
using namespace std;  
int demo1() {  
   int i = 1;    
    do{    
        cout<<i<<"\n";    
        i++;    
    } while (i <= 10) ;
    return 0;
}



int demo2() {  
    int i = 1;    
    do{    
        int j = 1;          
        do{    
            cout<<j<<"\n";        
            j++;    
        } while (j <= 3); 
        cout<<i;
        i++;    
    } while (i <= 3) ;     
    return 0;
}


int demo3() {  
    do{    
        cout<<"Infinitive do-while Loop"<<endl;    
    } while(true);
    return 0;
}





int main(){
    demo1();
    demo2();
}