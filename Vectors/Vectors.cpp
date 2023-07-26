// Vectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>
#include <array>
#include <vector>
using namespace std;

struct A {
    void thing() { cout << "A::thing();"; }
};

template <typename T>
struct Food {
    void do_thing() { a.thing(); }
    T a;
};

struct Point {
    float operator[](size_t i) {
        return (& x)[i];
    }

    float x, y, z;
};

int main()
{
    array<size_t, 10> a;
    array<size_t, 5> b;

    assert(a.size() == a.max_size());
    assert(b.size() == b.max_size());
    cout << a.size() << endl;
    cout << a.max_size() << endl;
    cout << b.size() << endl;
    cout << b.max_size() << endl;
    
    /*int c_style_array[5];
    array<int, 5> cpp_style;
    int x = 0xA;
    cpp_style[0] = 2;
    cpp_style[4] = 15;
    
    vector<int> v;
    v.resize(5);
    v[0] = 2;
    v[4] = 15;

    for (auto& x : v) {
        cout << x << endl;
    }*/
}
//template <typename T>
//class IntArray {
//public:
//    T elements[Size];
//
//    T& operator[](size_t index) { return elements[index]; }
//    const int& operator[](size_t index) const { return elements[index]; }
//    T& at(size_t index) { return elements[index]; }
//    const T& at(size_t index) const { return elemetns[index]; }
//
//    size_t size() const { return Size; }
//    bool empty() const { return Size == 0; }
//};

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
