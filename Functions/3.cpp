// Minimum of two Numbers..

#include <iostream>
using namespace std;

int minOfTwo(int a, int b) // Parameters
 {
    if(a < b){
        return a;
    }else{
        return b;
    }
}


int main(){

   cout << "Min: " << minOfTwo(5, 3) << endl; // (5, 3) it's an Argument
   return 0;
}