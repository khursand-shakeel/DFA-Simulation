//#include <stdio.h>
//#include <iostream>
//#include <sstream>
//using namespace std;
//
//bool Task1a();
//bool Task1b();
//bool gotoFuncPart2();
//bool switchFuncPart2();
//
//int main(void) {
//    
//    //
//    //gotoFuncPart2();
//    char input = '0';
//    cout << "+------------------------------------+";
//    cout << "|       DFA SIMULATION PROGRAM       |";
//    cout << "|                                    |";
//    cout << "|     By Muhammad Shehroz Sajjad     |";
//    cout << "|                                    |";
//    cout << "|          DFA : a(bb)*bc            |";
//    cout << "+------------------------------------+\n";
//    cout << "Please select one option:";
//    cout << "1. Using Goto statement.";
//    cout << "2. Using Switch statement.";
//    input = getchar();
//    if(input == 1){
//        Task1a();
//    }else{
//        Task1b();
//    }
//    
//    /*while (true) {
//     switchFuncPart2();
//     }*/
//}
//
//bool Task1a() {
//START:
//    string input = "";
//    cout << "Input string (Containing a,b,c only): ";
//    getline(cin, input);
//    for (int a = 0; a < input.length(); a++) {
//        if (input[a] == 'a' || input[a] == 'b' || input[a] == 'c')
//            continue;
//        else {
//            cout << "String is not accepted by language!" << endl;
//            cout << "\n\nPress any key to continue..." << endl;
//            getchar();
//            return 0;
//        }
//    }
//    int i = 0;
//    goto S1;
//    
//    
//S1:
//    if (input[i] == 'a')
//        goto S2;
//    else
//        goto TRAP;
//S2:
//    i++;
//    if (input[i] == 'b')
//        goto S3;
//    else
//        goto TRAP;
//S3:
//    i++;
//    if (input[i] == 'b')
//        goto S2;
//    else if (input[i] == 'c')
//        goto S4;
//    else
//        goto TRAP;
//TRAP:
//    cout << "String is not accepted by language!" << endl;
//    cout << "\n\nPress any key to continue..." << endl;
//    getchar();
//    return 0;
//S4:
//    i++;
//    if (input[i] != '\0')
//        goto TRAP;
//    cout << "String is accepted by language!" << endl;
//    cout << "\n\nPress any key to continue..." << endl;
//    getchar();
//    return  0;
//}
//
//bool Task1b() {
//    string input = "";
//    cout << "Enter string: ";
//    getline(cin, input);
//    for (int a = 0; a < input.length(); a++) {
//        if (input[a] == 'a' || input[a] == 'b' || input[a] == 'c')
//            continue;
//        else {
//            cout << "String is not recognized by language!" << endl;
//            cout << "\n\nPress any key to continue..." << endl;
//            getchar();
//            break;
//        }
//    }
//    int i = 0;
//    int cn = 1;
//    
//    while (true) {
//        switch (cn) {
//            case 0:
//                cout << "String is not accepted by language!" << endl;
//                cout << "\n\nPress any key to continue..." << endl;
//                getchar();                return false;
//                break;
//            case 1:
//                if (input[i] == 'a')
//                    cn = 2;
//                else
//                    cn = 0;
//                break;
//            case 2:
//                if (input[i] == 'b')
//                    cn = 3;
//                else
//                    cn = 0;
//                break;
//            case 3:
//                if (input[i] == 'b')
//                    cn = 2;
//                else if (input[i] == 'c')
//                    cn = 4;
//                else
//                    cn = 0;
//                break;
//            case 4:
//                if (input[i] != '\0')
//                    cn = 0;
//                cout << "String is accepted by language!" << endl;
//                cout << "\n\nPress any key to continue..." << endl;
//                getchar();
//                return true;
//        }
//        i++;
//    }
//}
//
//bool gotoFuncPart2() {
//START:
//    string input = "";
//    cout << "Enter string: ";
//    getline(cin, input);
//    for (int a = 0; a < input.length(); a++) {
//        if (input[a] == 'a' || input[a] == 'b')
//            continue;
//        else {
//            cout << "String not recognized" << endl;
//            system("pause");
//            system("cls");
//            goto START;
//        }
//    }
//    int i = -1;
//    goto EE;
//    
//EE:
//    i++;
//    if (input[i] == '\0') {
//        cout << "String accepted" << endl;
//        system("pause");
//        system("cls");
//        goto START;
//    }
//    else if (input[i] == 'a')
//        goto OE;
//    else if (input[i] == 'b')
//        goto EO;
//    else
//        goto TRAP;
//    
//OE:
//    i++;
//    if (input[i] == 'a')
//        goto EE;
//    else if (input[i] == 'b')
//        goto OO;
//    else
//        goto TRAP;
//    
//EO:
//    if (input[i] == 'a')
//        goto OO;
//    else if (input[i] == 'b')
//        goto EE;
//    else
//        goto TRAP;
//    
//OO:
//    if (input[i] == 'a')
//        goto EO;
//    else if (input[i] == 'b')
//        goto OE;
//    else
//        goto TRAP;
//    
//TRAP:
//    cout << "String rejected" << endl;
//    system("pause");
//    system("cls");
//    goto START;
//}
//
//bool switchFuncPart2() {
//    string input = "";
//    cout << "Enter string: ";
//    getline(cin, input);
//    for (int a = 0; a < input.length(); a++) {
//        if (input[a] == 'a' || input[a] == 'b' || input[a] == 'c')
//            continue;
//        else {
//            cout << "String not recognized" << endl;
//            system("pause");
//            system("cls");
//            break;
//        }
//    }
//    int i = 0;
//    int cn = 1;
//    
//    while (true) {
//        switch (cn) {
//            case 0:
//                cout << "String rejected" << endl;
//                system("pause");
//                system("cls");
//                return false;
//                break;
//            case 1:
//                if (input[i] == '\0') {
//                    cout << "String accepted" << endl;
//                    system("pause");
//                    system("cls");
//                    return true;
//                }
//                else if (input[i] == 'a')
//                    cn = 2;
//                else if (input[i] == 'b')
//                    cn = 3;
//                else
//                    cn = 0;
//                break;
//            case 2:
//                if (input[i] == 'a')
//                    cn = 1;
//                else if (input[i] == 'b')
//                    cn = 4;
//                else
//                    cn = 0;
//                break;
//            case 3:
//                if (input[i] == 'a')
//                    cn = 4;
//                else if (input[i] == 'b')
//                    cn = 1;
//                else
//                    cn = 0;
//                break;
//            case 4:
//                if (input[i] == 'a')
//                    cn = 3;
//                else if (input[i] == 'b')
//                    cn = 2;
//                else
//                    cn = 0;
//                break;
//        }
//        i++;
//    }
//   
//}
