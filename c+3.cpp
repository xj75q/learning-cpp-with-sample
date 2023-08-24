#include <iostream>  
using namespace std;  

int demo1 () {  
    int num = 10;    
    if (num % 2 == 0)    
    {    
        cout<<"It is even number";    
    }   
    return 0;  
}



int demo2 () {  
   int num = 11;    
   if (num % 2 == 0)    
   {    
       cout<<"It is even number";    
   }   
   else  
   {    
       cout<<"It is odd number";    
   }  
   return 0;  
}


int demo3 () {  
    int num;  
    cout<<"Enter a Number: ";  
    cin>>num;  
    if (num % 2 == 0)    
    {    
        cout<<"It is even number"<<endl;    
    }   
    else  
    {    
        cout<<"It is odd number"<<endl;    
    }  
   return 0;  
}

 
int demo4 () {  
       int num;  
       cout<<"Enter a number to check grade:";    
       cin>>num;  
       if (num <0 || num >100)    
       {    
           cout<<"wrong number\n";    
       }    
       else if(num >= 0 && num < 50){    
           cout<<"Fail\n";    
       }    
       else if (num >= 50 && num < 60)    
       {    
           cout<<"D Grade\n";    
       }    
       else if (num >= 60 && num < 70)    
       {    
           cout<<"C Grade\n";    
       }    
       else if (num >= 70 && num < 80)    
       {    
           cout<<"B Grade\n";    
       }    
       else if (num >= 80 && num < 90)    
       {    
           cout<<"A Grade\n";    
       }    
       else if (num >= 90 && num <= 100)    
       {    
           cout<<"A+ Grade\n";  
       }
    return 0;
}




int main(){
    demo4();
}