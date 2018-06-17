#include <iostream>

using namespace std;


void increment()
{
int v[] = {0,1,2,3,4,5,6,7,8,9};
    for (auto & x : v){
        ++x;
    }
    
    for (int x : v) {
        cout << x << endl;
    }
}




int main(int argc, char *argv[])
{
    increment();
    
    return 0;
}

