#include <iostream>  
using namespace std;  
class Student {  
   public:  
      int id;//data member (also instance variable)      
      string name;//data member(also instance variable)      
};  
int demo1() {  
    Student s1; //creating an object of Student   
    s1.id = 201;    
    s1.name = "Xiaoniu Su";   
    cout<<s1.id<<endl;  
    cout<<s1.name<<endl;  
    return 0;  
}


class Student1 {  
   public:  
       int id;//data member (also instance variable)      
       string name;//data member(also instance variable)      
       void insert(int i, string n)    
        {    
            id = i;    
            name = n;    
        }    
       void display()    
        {    
            cout<<id<<"  "<<name<<endl;    
        }    
};  
int demo2(void) {  
    Student1 s1; //creating an object of Student   
    Student1 s2; //creating an object of Student  
    s1.insert(201, "Wei");    
    s2.insert(202, "Hema");    
    s1.display();    
    s2.display();  
    return 0;  
}


class Employee {  
   public:  
       int id;//data member (also instance variable)      
       string name;//data member(also instance variable)  
       float salary;  
       void insert(int i, string n, float s)    
        {    
            id = i;    
            name = n;    
            salary = s;  
        }    
       void display()    
        {    
            cout<<id<<"  "<<name<<"  "<<salary<<endl;    
        }    
};  
int demo3(void) {  
    Employee e1; //creating an object of Employee   
    Employee e2; //creating an object of Employee  
    e1.insert(201, "Wei",990000);    
    e2.insert(202, "Hema", 29000);    
    e1.display();    
    e2.display();    
    return 0;  
}





int main(){
    //demo1();
    // demo2();
    demo3();
}