#include <iostream>
#include <chrono>
 
 using namespace std;
 
 int main(){
   string my ="On this machine, the steady_clock and high_resolution_clock have the same characteristics, both are non-adjustable clocks with nanosecond precision. On the other hand, the system_clock is adjustable and it has only microsecond precision.For comparison, this is the output of the program, compiled with Visual Studio 2012, on a Windows 7 machine:";
      auto start1 = chrono::steady_clock::now();
      int a =my.find("Windows",0);
      auto end1 = chrono::steady_clock::now();
      auto diff1 = end1 - start1;
      cout << chrono::duration <double, nano> (diff1).count() << " ns" << endl;
      auto start2 = chrono::steady_clock::now();
      int b =my.find("Windows",326);
      auto end2 = chrono::steady_clock::now();
      auto diff2 = end2 - start2;
      cout << chrono::duration <double, nano> (diff2).count() << " ns" << endl;
     return 0;
 }
