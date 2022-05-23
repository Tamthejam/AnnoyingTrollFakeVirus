#include <iostream>

using namespace std;
string yesorno = "N";

int main() {
    cout << "WARNING: This file is intended to be a joke program, however it may cause damages to your computer. In the case it does, the author (Tamthejam) assumes no liabilities for any damages caused. Run at your own risk.\n";
    cout << "To repair your device do CTRL+ALT+DEL and click restart.\n";
    cout << "By running this file you agree to these conditions.\n";
    cout << "Run Y/N?";
    cin >> yesorno;
    if (yesorno == "Y" || yesorno == "y") {
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
        cout << "Restart your computer to fix!";
    } else {
        cout << "Closing file.";
        return 0;
    }
}