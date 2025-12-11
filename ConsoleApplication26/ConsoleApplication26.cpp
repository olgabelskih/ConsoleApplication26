#include <iostream>
#include "libery.h"
#include <vector>
#include <string>
#include <windows.h>
#include <fstream>
using namespace std;


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    bibleoteka lib;
    lib.my_bibleoteka();
    cout << endl;
    return 0;
}