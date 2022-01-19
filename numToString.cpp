#include <iostream>
#include <cmath>
using namespace std;

void printHundreds(int decs, int dec) {
    switch (decs % 3) {
    case 0: {
        switch (dec) {
        case 1: cout << "??? "; break;
        case 2: cout << "?????? "; break;
        case 3: cout << "?????? "; break;
        case 4: cout << "????????? "; break;
        case 5: cout << "??????? "; break;
        case 6: cout << "???????? "; break;
        case 7: cout << "??????? "; break;
        case 8: cout << "????????? "; break;
        case 9: cout << "????????? "; break;
        default: break;
        }
        break;
    }
    case 1: {
        switch (dec) {
        case 1: {
            if (decs == 4) {
                cout << "???? ";
            }
            else {
                cout << "???? ";
            }
            break;
        }
        case 2: cout << "??? "; break;
        case 3: cout << "??? "; break;
        case 4: cout << "?????? "; break;
        case 5: cout << "???? "; break;
        case 6: cout << "????? "; break;
        case 7: cout << "???? "; break;
        case 8: cout << "?????? "; break;
        case 9: cout << "?????? "; break;
        default: break;
        }
        break;
    }
    case 2: {
        switch (dec) {
        case 1: cout << "?????? "; break;
        case 2: cout << "???????? "; break;
        case 3: cout << "???????? "; break;
        case 4: cout << "????? "; break;
        case 5: cout << "????????? "; break;
        case 6: cout << "?????????? "; break;
        case 7: cout << "????????? "; break;
        case 8: cout << "??????????? "; break;
        case 9: cout << "????????? "; break;
        default: break;
        }
        break;
    }
    }
}

void printTriple(int decs, int dec) {
    int triple = (decs - 1) / 3;
    switch (triple) {
    case 1: {
        if (dec == 1) {
            cout << "?????? ";
        }
        else if (dec >= 2 && dec <= 4) {
            cout << "?????? ";
        }
        else {
            cout << "????? ";
        }
        break;
    }
    case 2: {
        if (dec == 1) {
            cout << "??????? ";
        }
        else if (dec >= 2 && dec <= 4) {
            cout << "???????? ";
        }
        else {
            cout << "????????? ";
        }
        break;
    }
    }
}

void numToString(int num = 0) {
    int decs = 0;
    if (num == 0) {
        cout << "??????? ????? (?? ?????????): "; cin >> num;
    }
    while (num / (int)pow(10, decs) > 0) {
        decs++;
    }
    if (num == 0) {
        cout << "????";
        decs = 0;
    }
    while (decs > 0) {
        int dec = (num / (int)pow(10, decs - 1)) % 10;
        printHundreds(decs, dec);
        if (decs % 3 == 1 && decs > 3) {
            printTriple(decs, dec);
        }
        decs--;
    }
    cout << endl;
}