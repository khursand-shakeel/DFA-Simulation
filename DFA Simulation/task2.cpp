#include <stdio.h>
#include <iostream>
#include <sstream>
using namespace std;


bool Task2a();
bool Task2b();

int main(void) {
    
    string input = "";
    cout << "+------------------------------------+"<< endl;
    cout << "|       DFA SIMULATION PROGRAM       |"<< endl;
    cout << "|                                    |"<< endl;
    cout << "|     By Muhammad Shehroz Sajjad     |"<< endl;
    cout << "|                                    |"<< endl;
    cout << "|          DFA : {a, b}*             |"<< endl;
    cout << "+------------------------------------+\n"<< endl;
    cout << "Please select one option:"<< endl;
    cout << "1. Using Goto statement."<< endl;
    cout << "2. Using Switch statement."<< endl;
    getline(cin, input);
    if(input == "1"){
       Task2a();
    }else if(input == "2"){
        Task2b();
    }
    
}
bool Task2a() {
START:
    string input = "";
    cout << "Input string (Containing a,b,c only): ";
    getline(cin, input);
    for (int a = 0; a < input.length(); a++) {
        if (input[a] == 'a' || input[a] == 'b')
            continue;
        else {
            cout << "String is not accepted by language!" << endl;
            cout << "\n\nPress any key to continue..." << endl;
            getchar();
            return 0;
        }
    }
    int i = -1;
    goto EE;
    
EE:
    i++;
    if (input[i] == '\0') {
        cout << "String is accepted by language!" << endl;
        cout << "\n\nPress any key to continue..." << endl;
        getchar();
        return 0;
    }
    else if (input[i] == 'a')
        goto OE;
    else if (input[i] == 'b')
        goto EO;
    else
        goto TRAP;
    
OE:
    i++;
    if (input[i] == 'a')
        goto EE;
    else if (input[i] == 'b')
        goto OO;
    else
        goto TRAP;
    
EO:
    if (input[i] == 'a')
        goto OO;
    else if (input[i] == 'b')
        goto EE;
    else
        goto TRAP;
    
OO:
    if (input[i] == 'a')
        goto EO;
    else if (input[i] == 'b')
        goto OE;
    else
        goto TRAP;
    
TRAP:
    cout << "String is not accepted by language!" << endl;
    cout << "\n\nPress any key to continue..." << endl;
    getchar();
    return 0;
}

bool Task2b() {
    string input = "";
    cout << "Input string (Containing a,b,c only): ";
    getline(cin, input);
    for (int a = 0; a < input.length(); a++) {
        if (input[a] == 'a' || input[a] == 'b' || input[a] == 'c')
            continue;
        else {
            cout << "String is not accepted by language!" << endl;
            cout << "\n\nPress any key to continue..." << endl;
            getchar();
            break;
        }
    }
    int i = 0;
    int cn = 1;
    
    while (true) {
        switch (cn) {
            case 0:
                cout << "String is not accepted by language!" << endl;
                cout << "\n\nPress any key to continue..." << endl;
                getchar();
                return false;
                break;
            case 1:
                if (input[i] == '\0') {
                    cout << "String is  accepted by language!" << endl;
                    cout << "\n\nPress any key to continue..." << endl;
                    getchar();
                    return true;
                }
                else if (input[i] == 'a')
                    cn = 2;
                else if (input[i] == 'b')
                    cn = 3;
                else
                    cn = 0;
                break;
            case 2:
                if (input[i] == 'a')
                    cn = 1;
                else if (input[i] == 'b')
                    cn = 4;
                else
                    cn = 0;
                break;
            case 3:
                if (input[i] == 'a')
                    cn = 4;
                else if (input[i] == 'b')
                    cn = 1;
                else
                    cn = 0;
                break;
            case 4:
                if (input[i] == 'a')
                    cn = 3;
                else if (input[i] == 'b')
                    cn = 2;
                else
                    cn = 0;
                break;
        }
        i++;
    }
   
}
