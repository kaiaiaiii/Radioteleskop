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
//#include "ReadFromFile.h"
using namespace std;
//Dataset will first be given by me/downloaded somewhere (link: https://www.kaggle.com/datasets/suraj520/rf-signal-data) and later on be implemented by me directly
//Discrete Fourier Transform

double Vektor_Length =0; 
void CSV_Split()
{   // Daten von File lesen
    string Text_from_file, Dataset, String_Split;
    ifstream DFT_File("Dataset.txt");
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
{   
    CSV_Split();
    int max_frequency;
    double Hilfsergebnis;
    cout << "Maximale Frequenz: ";
    cin >> max_frequency;
    //DFT Berechnung
    vector<complex<double>> LsgVektor(Vektor_Length, 0.0);
    vector<complex<double>> HilfsVektor(Vektor_Length, 0.0);
    //vector<complex<double>> InputVektor(Vektor_Length, 0.0);
    vector<double> InputVektor = {2,3,4,5,6,7,8,1,4,5};
    double iteration_count=Vektor_Length;
    for (int n = 0; n < max_frequency; n++)
    {
         for (int k = 1;k < max_frequency; k++)
         {
             Hilfsergebnis += (-2*3,141)+(k*n/Vektor_Length); // imag fehlt
             //cout << "Hilfsvektor " << k+1 << ": " << HilfsVektor[k] << "\n";
         }
         
         LsgVektor[n]+=exp(Hilfsergebnis)*InputVektor[n];
         cout << "LSGVektor " << n+1 << ": " << LsgVektor[n] << "\n";
    } 
    return 0;
}
/* Backup, das lief bisher
int main()
{   
    CSV_Split();
    //DFT Berechnung
    vector<complex<double>> LsgVektor(Vektor_Length, 0.0);
    vector<complex<double>> HilfsVektor(Vektor_Length, 0.0);
    vector<complex<double>> InputVektor(Vektor_Length, 0.0);
    double iteration_count=Vektor_Length;
    for (int j = 0; j< Vektor_Length; j++)
    {
         for (int i = 1;i < iteration_count; i++)
         {
             HilfsVektor[i]+=j*i/(Vektor_Length+1);
             cout << "Hilfsvektor " << i+1 << ": " << HilfsVektor[i] << "\n";
         }
         // es fehlt noch imag in der Gleichung
         //i = -1;
         //i = sqrt(i);
         LsgVektor[j]+=exp(-HilfsVektor[j]*2.0*acos(-1))*InputVektor[j]; //std::imag*3,14*-2
         cout << "LSGVektor " << j+1 << ": " << LsgVektor[j] << "\n";
    } 
    return 0;
} */