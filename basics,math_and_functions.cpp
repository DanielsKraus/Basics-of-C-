#include<iostream>
/*
 basics,creating a function that does math
 v is velocity, t for elapsed time, and a for acceleration
 distance=velocity×elapsedtime+0.5×acceleration×elapsedtime×elapsedtime
*/
using namespace std;

float distance(float v,float t,float a){
    return (v*t)+(0.5*a*t*t);
}

int main() {
    cout << distance(3, 4, 5) << endl;  
    cout << distance(7.0, 2.1, 5.4) << endl;
    return 0;   
}
