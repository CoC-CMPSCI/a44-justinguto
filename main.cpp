// Rewrite the following program. Use a switch statement instead of the if/else if statement.

#include <iostream>
using namespace std;
int main()
{
       int selection;
        cout << "Which formula do you want to see?\n\n";
        cout << "1. Apple\n";
        cout << "2. Bannana\n";
        cout << "3. Orange\n" ;
        cout << "4. None of them\n";
        cin >> selection;
// TODO
        switch (selection) {
            case 1:
                cout << "Menu 1 selected\n";
                break;
            case 2:
                cout << "Menu 2 selected\n";
                break;
            case 3:
                cout << "Menu 3 selected\n";
                break;
            case 4:
                cout << "Menu 4 selected\n";
                break;
            default:
                cout << "Wrong menu item\n";
                break;
        }
// TODO
}
