
#include <iostream>
using namespace std;


void cubeByRef(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr;
}

int main(){
    int y = 7;
    int z = 5;
    int x;
    int *yPtr = nullptr;
    int *xPtr = nullptr;
    int * const zPtr = &z;
    yPtr = &y;
    

    //    zPtr = z;

    cout << y << endl;
    cout << &y << endl;
    cout << yPtr << endl;
    cout << xPtr << endl;
    cout << *yPtr << endl;
    cout << *zPtr << endl;
    cout << zPtr << endl;
}
//    int number = 5;
//
//    cout << "number before is: " << number << endl;
//
//    cubeByRef( &number);
//
//    cout << "number after is: " << number << endl;
//
//}


