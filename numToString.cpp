#include <iostream>
#include <cmath>
using namespace std;

void printHundreds(int decs, int dec) {
    switch (decs % 3) {
    case 0: {
        switch (dec) {
        case 1: cout << "сто "; break;
        case 2: cout << "двести "; break;
        case 3: cout << "триста "; break;
        case 4: cout << "четыреста "; break;
        case 5: cout << "пятьсот "; break;
        case 6: cout << "шестьсот "; break;
        case 7: cout << "семьсот "; break;
        case 8: cout << "восемьсот "; break;
        case 9: cout << "девятьсот "; break;
        default: break;
        }
        break;
    }
    case 1: {
        switch (dec) {
        case 1: {
            if (decs == 4) {
                cout << "одна ";
            }
            else {
                cout << "один ";
            }
            break;
        }
        case 2: cout << "два "; break;
        case 3: cout << "три "; break;
        case 4: cout << "четыре "; break;
        case 5: cout << "пять "; break;
        case 6: cout << "шесть "; break;
        case 7: cout << "семь "; break;
        case 8: cout << "восемь "; break;
        case 9: cout << "девять "; break;
        default: break;
        }
        break;
    }
    case 2: {
        switch (dec) {
        case 1: cout << "десять "; break;
        case 2: cout << "двадцать "; break;
        case 3: cout << "тридцать "; break;
        case 4: cout << "сорок "; break;
        case 5: cout << "пятьдесят "; break;
        case 6: cout << "шестьдесят "; break;
        case 7: cout << "семьдесят "; break;
        case 8: cout << "восемьдесят "; break;
        case 9: cout << "девяносто "; break;
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
            cout << "тысяча ";
        }
        else if (dec >= 2 && dec <= 4) {
            cout << "тысячи ";
        }
        else {
            cout << "тысяч ";
        }
        break;
    }
    case 2: {
        if (dec == 1) {
            cout << "миллион ";
        }
        else if (dec >= 2 && dec <= 4) {
            cout << "миллиона ";
        }
        else {
            cout << "миллионов ";
        }
        break;
    }
    }
}

void numToString(int num = 0) {
    int decs = 0;
    if (num == 0) {
        cout << "Введите число (до миллиарда): "; cin >> num;
    }
    while (num / (int)pow(10, decs) > 0) {
        decs++;
    }
    if (num == 0) {
        cout << "ноль";
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