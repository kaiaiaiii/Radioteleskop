#include <iostream>
#include <vector>
#include <complex>
#include <string>
#include <sstream>
#include <cmath>
#include <fstream> 
#include <stdexcept>
#include <algorithm>
using namespace std; 


class FileReadWrite{
public:
static vector<string> ReadDataFromFile(string filename)
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
        //cout << "String-Split: " << SplitString << endl;
        String_Split.push_back(SplitString);

    }
    //cout << endl << "Dataset 5: " << String_Split[5];
    return String_Split;
}

static int WriteToFile(vector<complex<double>> ErgebnisVektor, vector<double> Magnitudenvektor, vector<double> Phasenvektor, string Outputfile){
    ofstream File;
    File.open(Outputfile);
    int VektorLength = ErgebnisVektor.size();
    for(int i = 0; i<VektorLength; i++){
        File << ErgebnisVektor[i] << " " << Magnitudenvektor[i] << " " << Phasenvektor[i]<< endl;
    }

    File.close();
    return 0;
}

static int WriteIntToFile(int Input, string filename){
    ofstream File;
    File.open(filename);
    while(true){
        File << Input << endl;
    }

    File.close();
    return 0;
}
};