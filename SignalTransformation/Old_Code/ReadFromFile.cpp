#include "ReadFromFile.h"
#include <iostream>
#include <string>
#include <complex>
#include <sstream>
using namespace std;

double Vektor_Length = 0; // Initialisierung außerhalb der Klasse

vector<string> ReadDataFromFile(string filename)
{
    // Daten von File lesen
    string TextFromFile, Dataset;
    ifstream DFT_File(filename);
    vector<string> String_Split;

    if (!DFT_File.is_open()) {
        cerr << "Fehler: Datei konnte nicht geöffnet werden: " << filename << endl;
    }

    while (getline(DFT_File, TextFromFile)) {
        Dataset += TextFromFile + "\n";
    }

    DFT_File.close();

    // String aufteilen und in komplexe Zahl umwandeln

   stringstream obj_ss(Dataset);
   string SplitString;
    while (getline(obj_ss, SplitString, ',')) {
        cout << "String-Split: " << SplitString << endl;
        String_Split.push_back(SplitString);

    }
    cout << endl << "Dataset 5: " << String_Split[5];
    return String_Split;
}

static vector<string> StringBereinigen(vector<string> SplitString){
    vector<string> BereinigterString;
    int length = SplitString.size();
    for (int i = 0; i<length; i++){
        if (SplitString[i].front() == '(' && SplitString[i].back() == ')') {
        SplitString[i] = SplitString[i].substr(1, SplitString[i].size() - 2);
        }

        if (!SplitString[i].empty() && SplitString[i].back() == 'j') {
            SplitString[i].pop_back();
        }   
        cout << "StringBereinigt " << SplitString[i] << "Test" << endl;
    }
    BereinigterString = SplitString;
    
    return BereinigterString;
}

static vector<complex<double>> StringToComplex(vector<string> Inputstring){
    cout << Inputstring[7] << "Test";
    vector<complex<double>> KomplexerVektor;
    int Vektor_Length = Inputstring.size();
    for(int i = 0; i < Vektor_Length; i++){
        KomplexerVektor.push_back(stod(Inputstring[i]));

        cout << "Komplex"  << Inputstring[i] << endl;
    }

    return{(KomplexerVektor)};
}

int main() {
    vector<string> Inputstring = ReadDataFromFile("Dataset.txt");
    StringBereinigen(Inputstring);
    //StringToComplex(Inputstring);
    return 0;
}
