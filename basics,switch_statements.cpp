#include<iostream>
// basics of switch statemens using strings

using namespace std;

int main() {
    
    int num_doors = 2;
    
    switch(num_doors){
        case 0:
            cout << "You have a motorcycle" << endl;
            break;
        case 2:
            cout << "You have a coupe or a truck" << endl;
            break;
        case 4:
            cout << "You have a coupe or a truck" << endl;
            break;
        case 5:
            cout << "You have a minivan" << endl;
            break;
        
    }
    return 0;
}