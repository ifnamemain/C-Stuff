#include <iostream>
#include "myFunctions.h"
using namespace std;

int main(){
    struct numsPtr{
        int *first;
        int *second;
        short *third;
    };
    int x = 1, y = 2;
    short z = 15000;
    cout << "&x: " << &x << endl;
    cout << "&y: " << &y << endl;
    cout << "&z: " << &z << endl;
    numsPtr a = {&x, &y};
    numsPtr *b = &a;
    char *pY = (char*)b->second-6;
    cout << "b->second-2 = &y-2: " << b->second - 2 << endl;
    cout << "*(short*)pY : " << *(short*)pY << endl;
    cout << "b->second-1 = &y-1: " << b->second - 1 << endl;
    cout << "b->second = &y: " << b->second << endl;
    cout << "b->second+1 = &z: " << b->second + 1 << endl;
    cout << "(b->second+1)[0] = z: " << (b->second + 1)[0] << endl;
    
    return 0;
}
