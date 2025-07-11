#include <fstream>
#include <filesystem>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <iostream>

using namespace std;

class ReadFromFile{
    public:
        double ReadFromFile(const string& Filename);
    protected:
        vector<string> String_Split;
        int StringLaenge=0;

}