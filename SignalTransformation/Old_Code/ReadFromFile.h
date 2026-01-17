#ifndef READFROMFILE_H
#define READFROMFILE_H

#include <fstream>
#include <filesystem>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <iostream>

using namespace std;

class ReadFromFile {
public:
    double ReadDataFromFile(const string& filename);

protected:
    vector<string> String_Split;
    int StringLaenge = 0;
};

#endif // READFROMFILE_H
