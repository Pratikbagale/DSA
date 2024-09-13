// Nested Loop

#include <iostream>
using namespace std;

int main(){
    int savings;
    cin >> savings ;
    
    if(savings > 5000){
    if(savings > 1000){
        cout << "Road trip with friends";
    } else{
        cout << "Shopping with Riya";
    }
    }else if(savings > 7000){
        cout << "Jiya\n";
    } else {
        cout << "Miku\n";
    }
//
    return 0;
}