#include <iostream>
// c++ basics 
// control statements and boolean logic
using namespace std;

int main() {
    
    int var = 1;
    
    if(var < 1){
        cout << "less than one!" << endl;
    }
    else if(var == 1){
        cout << "One exactly!" << endl;
    }
    else{
        cout << "It's a negative!" << endl;
    }
    
    char car = 'p';
    
    if(car=='p'){
        cout << "car is parked" << endl;
    }
    else if(car=='n'){
        cout << "car is in nuetral" << endl;
    }
    else if(car=='a'){
        cout << "car is accelerating" << endl;
    }
    else{
        cout << "car is braking" << endl;
    }
    
    return 0;
    
}