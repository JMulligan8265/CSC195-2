// Memory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
/*const static int initializedStatic = 5;
static int uninitializedStatic*/;

class Item {
    bool isActive;
    int id;
    float weight;
};

struct Foo {
    int a;
    int b;
};

int pass_by_value(int x) {
    x = 1;
    return x;
}

int fn_with_pointer_arg(int* x) {
    *x = 2;
    return *x;
}

int fn_with_ref_arg(int& x) {
    x = 3;
    return x;
}

int main()
{
    int x = 5;
    int* px = &x;
    pass_by_value(x);
    fn_with_pointer_arg(px);
    fn_with_ref_arg(x);
    cout << x << std::endl;
    

    //int* x;

    /*int x = 5;
    int* px = &x;
    std::cout << px << endl;
    std::cout << sizeof(Item) << endl;
    std::cout << &initializedStatic << endl;
    std::cout << &uninitializedStatic << endl;
    std:cout << (int)((char*) & uninitializedStatic - (char*) & x);
    cout << uninitializedStatic << endl;
    
    char bigArray[bytesAvailable];
    bigArray[bytesAvailable - 1] = 1;
    bigArray[bytesAvailable - 2] = 1;*/
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
