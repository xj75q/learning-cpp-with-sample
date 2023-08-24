#include <iostream>  
//C++ FileStream示例：写入文件
#include <fstream>  
using namespace std;  
int main () {  
  ofstream filestream("testout.txt");  
  if (filestream.is_open())  
  {  
    filestream << "Welcome to javaTpoint.\n";  
    filestream << "C++ Tutorial.\n";  
    filestream.close();  
  }  
  else cout <<"File opening is fail.";  
  return 0;  
}


