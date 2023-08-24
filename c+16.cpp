#include <iostream>  
using namespace std;  
void printArray(int arr[5]);  
int demo1()  
{  
    int arr1[5] = { 10, 20, 30, 40, 50 };    
    int arr2[5] = { 5, 15, 25, 35, 45 };    
    printArray(arr1); //passing array to function    
    printArray(arr2);  
    return 0;
}  
void printArray(int arr[5])  
{  
    cout << "Printing array elements:"<< endl;  
    for (int i = 0; i < 5; i++)  
    {  
        cout<<arr[i]<<"\n";    
    }  
}





#include <iostream>  
using namespace std;  
void  printMin(int arr[5]);  
void demo2()  
{  
    int arr1[5] = { 30, 10, 20, 40, 50 };    
    int arr2[5] = { 5, 15, 25, 35, 45 };    
    printMin(arr1);//passing array to function    
    printMin(arr2);  
}  
void  printMin(int arr[5])  
{  
    int min = arr[0];    
    for (int i = 0; i < 5; i++)    
    {    
        if (min > arr[i])    
        {    
            min = arr[i];    
        }    
    }    
    cout<< "Minimum element is: "<< min <<"\n";    
}


//====================================
void  printMax(int arr[5]);  
int demo3()  
{  
    int arr1[5] = { 25, 10, 54, 15, 40 };    
    int arr2[5] = { 12, 23, 44, 67, 54 };    
    printMax(arr1); //Passing array to function  
    printMax(arr2);
    return 0;
}  
void  printMax(int arr[5])  
{  
    int max = arr[0];    
    for (int i = 0; i < 5; i++)    
    {    
        if (max < arr[i])    
        {    
            max = arr[i];    
        }    
    }    
    cout<< "Maximum element is: "<< max <<"\n";    
}




int main(){
    //demo1();
    demo2();
    // demo3();
}