#include <iostream>
#include "Characters.h";
#include "Players.h";
#include "Enemies.h";
#include "Database.h";
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
using namespace std;

int main()
{

    int choice = 0;
    Database::Database* data = new Database::Database;
    string name;
    int type = 0;
    int id = 0;
    int remove = 0;
    bool quit = false;
    while (!quit) {
        cout << "\n1 - Create";
        cout << "\n2 - Display All";
        cout << "\n3 - Display Id";
        cout << "\n4 - Display Type";
        cout << "\n5 - Remove";
        cout << "\n6 - Load";
        cout << "\n7 - Save";
        cout << "\n8 - Quit";
        cout << "\n\nChoose an option (1-8):\n";

        cin >> choice;
        while (choice < 1 || choice > 8) {
            cout << "\nNot an option, please choose between 1 & 8.\n";
            cin >> choice;
        }
        

        switch (choice) {
        case 1:
            
            cout << "\n1 - Player";
            cout << "\n2 - Enemy";
            cout << "\nChoose an option (1-2):\n";

            cin >> type;
            while (type < 1 || type > 2) {
                cout << "\nNot an option, please choose between 1 & 2.\n";
                cin >> type;
            }

            data->Add(static_cast<Characters::Characters::eType>(type - 1));
            cout << "\nCharacter created\n";
            break;
        case 2:
            data->DisplayAll();
            break;
        case 3:
            cout << "\nEnter an id:\n";
            cin >> id;

            data->Display(id);
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
            data->Display(static_cast<Characters::Characters::eType>(type - 1));
            break;
        case 5:
            std::cout << "\n1) All";
            std::cout << "\n2) Id";
            std::cout << "\n3) Type";
            cout << "\nChoose an option (1-3):\n";
            cin >> remove;
            while (remove < 1 || remove > 3) {
                cout << "\nNot an option, please choose between 1 & 3.\n";
                cin >> remove;
            }
            switch (remove) {
            case 1:
                data->RemoveAll();
                break;
            case 2:
                cout << "\nEnter id:\n";
                cin >> id;
                data->Remove(id);
                break;
            case 3:
                cout << "\n\n1 - Player";
                cout << "\n2 - Enemy";
                cout << "\nChoose an option (1-2):\n";

                cin >> type;
                while (type < 1 || type > 2) {
                    cout << "\nNot an option, please choose between 1 & 2.\n";
                    cin >> type;
                }
                data->Remove(static_cast<Characters::Characters::eType> (type - 1));
                break;
            }
            break;
        case 6:
            cout << "enter filename: ";
            cin >> name;
            data->Load(name);
            break;
        case 7:
            cout << "enter filename: ";
            cin >> name;
            data->Save(name);
            break; 
        case 8:
            quit = true;
            break;


        }

    }

    delete data;
    _CrtDumpMemoryLeaks();
}

