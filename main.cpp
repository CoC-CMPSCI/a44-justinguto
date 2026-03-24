#include <iostream>
using namespace std;

int main()
{
    int selection;

    cout << "Which formula do you want to see?\n\n";
    cout << "1. Apple\n";
    cout << "2. Bannana\n";
    cout << "3. Orange\n";
    cout << "4. None of them\n";
    cin >> selection;

    switch (selection)
    {
        case 1:
            cout << "Menu 1 selected";
            break;
        case 2:
            cout << "Menu 2 selected";
            break;
        case 3:
            cout << "Menu 3 selected";
            break;
        case 4:
            cout << "Menu 4 selected";
            break;
        default:
            cout << "Wrong menu item";
            break;
    }

    return 0;
}