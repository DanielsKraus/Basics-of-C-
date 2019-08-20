#include <iostream>
// c++ basics 
// control statements and boolean logic
using namespace std;

int main() {
    
    int var = 0;
    
    if(var < 0){
        cout << "less than zero!" << endl;
    }
    else if(var == 0){
        cout << "It's zero!" << endl;
    }
    else if(var > 0){
    	cout << "It's greater than zero!" << endl;
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