// Structs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


enum class State {
    Scared,
    Chase,
    InPen,
    Dead
};

enum class PlayerState{
    Alive,
    Dead
};



struct Pos {
    int x;
    int y;

    
};

class INpc {
public:
    virtual ~INpc();
    virtual void print() {};
};
class Npc: public INpc {
    public:
        void print() override {
            cout << "Npc: {name: " << name << " }";
        };

        Pos pos;
        State state = State::Dead;
        string name;
};

int main()
{
    Npc npc1{ 0, 0, State::InPen, "Pinky"};

    Npc npc2{ 0, 0, State::InPen, "John" };

    Npc npc3{ 0, 0, State::InPen, "Bella" };

    Npc npc4{ 0, 0, State::InPen, "Jacob" };

    Npc npc5{ 0, 0, State::InPen, "Roomie" };

    cout << (int)npc1.state << endl;

    return 0;
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
