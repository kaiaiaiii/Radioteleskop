#include <iostream>
#include <cmath>
#include <complex>
#include <cmath>
#include <vector>
#include <iomanip>
#include <fstream>
#include <filesystem>
#include <string>
#include <sstream>
#include <ranges>
#include "ReadFromFile.h"
#include "DFT.h"
using namespace std;
//Dataset will first be given by me/downloaded somewhere (link: https://www.kaggle.com/datasets/suraj520/rf-signal-data) and later on be implemented by me directly
//Discrete Fourier Transform

double Vektor_Length =0; 
void ReadFromFile()
{   // Daten von File lesen
    string Text_from_file, Dataset, String_Split;
    ifstream DFT_File("1.txt");
    complex <double> S2F;
    // Daten in String schreiben
    while (getline (DFT_File, Text_from_file)){
        Dataset = Text_from_file;
    }
    
    DFT_File.close();
    //String nach Kommas separieren
    stringstream obj_ss(Dataset);
    while (getline(obj_ss, String_Split, ',')) {
        cout << String_Split << endl;
        Vektor_Length +=1;
        
    }
    cout << Vektor_Length;
}

int main()
{   DFT({1,2,1,2});
    return 0;
}



