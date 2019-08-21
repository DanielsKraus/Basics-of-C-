#include<vector>
// basics, declaring and filling in a vector named my vector
// Also an example of how to do this in one line of code

using namespace std;

int main() {
    // declaring a vector
    vector<float> myvector(4);
    
    // filling in the vectors
    myvector[0] = 4.5;
    myvector[1] = 2.1;
    myvector[2] = 8.54;
    myvector[3] = 9.0;
    
    // declare and fill vector in one line of code
    vector<float> myvector2(4, 3.5);
    return 0;
}