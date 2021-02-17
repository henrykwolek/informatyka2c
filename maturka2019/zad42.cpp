#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    fstream openFile;
    openFile.open("liczby.txt", ios::in);
    string line;
    int j = 0, lineInteger;
    while (openFile.good())
    {
        getline(openFile, line);
        lineInteger = atoi(line.c_str());

        if (lineInteger % 3 == 0)
        {
            int m = 0;
            cout << "test";
            while (lineInteger > 1)
            {
                m = (lineInteger / 3);
            }
        }
    }
}