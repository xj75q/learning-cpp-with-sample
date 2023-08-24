#include <iostream>  
using namespace std;  
void func() {    
    static int i=0; //static variable    
    int j=0; //local variable    
    i++;    
    j++;    
    cout<<"i=" << i<<" and j=" <<j<<endl;    
}    
int main()  
{  
    func();    
    func();    
    func();    
}


//extern变量对所有程序都可见。 如果两个或多个文件共享相同的变量或函数，则使用它。



//extern int counter=0;



