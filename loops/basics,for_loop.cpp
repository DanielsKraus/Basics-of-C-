#include <iostream>

// basic for loop 
using namespace std; 

int main() {
    for(int i = 0;i<=80;i++){
        if(i>=0 && i<10){
            cout << "slow" << endl;
        }
        else if(i>=10 && i<30){
            cout << "medium" << endl;
        }
        else if(i>=30 && i<=70){
            cout << "Too fast" << endl;
        }
    }
    return 0;
}
