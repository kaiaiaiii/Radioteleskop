#include <fstream>
#include <filesystem>
#include <string>
#include <sstream>
#include <complex>
#include <iostream>
using namespace std;

double ReadFromFile(string Filename)
{   // Daten von File lesen
    double Vektor_Length;
    string Text_from_file, Dataset, String_Split;
    ifstream DFT_File(Filename);
    complex <double> S2F;
    while (getline (DFT_File, Text_from_file)){
        Dataset = Text_from_file;
    }
    DFT_File.close();
    stringstream obj_ss(Dataset);
    while (getline(obj_ss, String_Split, ',')) {
        cout << String_Split << endl;
        Vektor_Length += 1;
    }
    return Vektor_Length;
}
