#include <iostream>
#include "Characters.h";
#include "Players.h";
#include "Enemies.h";
#include "Database.h";
using namespace std;

int main()
{
    int choice = 0;
    Database::Database data;
    int type = 0;
    int id = 0;
    bool quit = false;
    while (!quit) {
        cout << "\n1 - Create";
        cout << "\n2 - Display All";
        cout << "\n3 - Display Id";
        cout << "\n4 - Display Type";
        cout << "\n5 - Quit";
        cout << "\n\nChoose an option (1-5):\n";

        cin >> choice;
        while (choice < 1 || choice > 5) {
            cout << "\nNot an option, please choose between 1 & 5.\n";
            cin >> choice;
        }
        

        switch (choice) {
        case 1:
            
            cout << "\n\n1 - Player";
            cout << "\n2 - Enemy";
            cout << "\nChoose an option (1-2):\n";

            cin >> type;
            while (type < 1 || type > 2) {
                cout << "\nNot an option, please choose between 1 & 2.\n";
                cin >> type;
            }

            data.Create(static_cast<Characters::Characters::eType>(type - 1));
            cout << "\nCharacter created\n";
            break;
        case 2:
            data.DisplayAll();
            break;
        case 3:
            cout << "\nEnter an id:\n";
            cin >> id;

            data.Display(id);
            break;
        case 4:
            cout << "\n\n1 - Player";
            cout << "\n2 - Enemy";
            cout << "\nChoose an option (1-2):\n";

            cin >> type;
            while (type < 1 || type > 2) {
                cout << "\nNot an option, please choose between 1 & 2.\n";
                cin >> type;
            }
            data.Display(static_cast<Characters::Characters::eType>(type - 1));
            break;
        case 5:
            quit = true;
            break;
        }
    }
}

