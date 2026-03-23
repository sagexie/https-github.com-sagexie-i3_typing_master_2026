
#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "------------ Welcome to I3 Typing Master v2026 -----------" << endl;
    cout << "1. Login" << endl;
    cout << "2. Register" << endl;
    cout << "3. Exit" << endl;
    cout << "Choose an option: ";
    cin >> choice;

    if(choice == 1){
        cout << "Login Screen" << endl;
    }
    else if(choice == 2){     
        cout << "Register Screen" << endl;
    }
    else if(choice == 3){
        cout << "Exit Program" << endl;
    }
    else{
        cout << "Invalid option" << endl;
    }

    return 0;
}