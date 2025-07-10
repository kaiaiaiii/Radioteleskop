#include <fstream>
#include <filesystem>
#include <string>
#include <sstream>
#include <complex>
#include <iostream>
using namespace std;
double Vektor_Length;
string String_Split;


void ReadFromFile::step()
{
    ReadFromFile(Dataset.txt);
}

double ReadFromFile::ReadFromFile(string Filename)
{   // Daten von File lesen
    string TextFromFile, Dataset;
    ifstream DFT_File(Filename);
    while (getline (DFT_File, TextFromFile)){
        Dataset = TextFromFile;
    }
    DFT_File.close();
    // String aufteilen und in komplexe Zahl umwandeln
    stringstream obj_ss(Dataset);
    while (getline(obj_ss, String_Split, ',')) {
        cout << String_Split << endl;
        istringstream S2C(String_Split);
        complex<double> KomplexeZahl=S2C;
        cout << KomplexeZahl;
        Vektor_Length += 1;
    }
    return Vektor_Length;
}

