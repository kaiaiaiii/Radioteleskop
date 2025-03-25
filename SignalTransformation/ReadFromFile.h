#include <fstream>
#include <filesystem>
#include <string>
#include <sstream>
#include <complex>
#include <iostream>
using namespace std;
complex String_Split;
int StringLaenge=0;
double ReadFromFile(string Filename)
{   // Daten von File lesen
    string Text_from_file, Dataset;
    ifstream DFT_File(Filename);
    while (getline (DFT_File, Text_from_file)){
        Dataset = Text_from_file;
    }
    DFT_File.close();
    stringstream obj_ss(Dataset);
    while (getline(obj_ss, String_Split, ',')) {
        cout << String_Split << endl;
        StringLaenge+=StringLaenge;
        // evtl hier direkt string Wandeln und in einen Vektor schreiben?
    }
    
    for (int i =0; i < StringLaenge; i++){
        //Hier irgendwie den String geordnet in ein Array schreiben
    }
}

