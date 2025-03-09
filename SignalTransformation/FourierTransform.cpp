#include <iostream>
#include <cmath>
#include <complex>
#include <math.h>
#include <vector>
#include <iomanip>
#include <fstream>
#include <filesystem>
#include <string>
#include <sstream>
using namespace std;
//Dataset will first be given by me/downloaded somewhere (link: https://www.kaggle.com/datasets/suraj520/rf-signal-data) and later on be implemented by me directly

void CSV_Split()
{   // Daten von File lesen
    string Text_from_file, Dataset, String_Split;
    ifstream DFT_File("Dataset.txt");
    // Daten in String schreiben
    while (getline (DFT_File, Text_from_file)){
        Dataset = Text_from_file;
        //cout <<Dataset;
    }
    DFT_File.close();
    //String nach Kommas separieren
    stringstream obj_ss(Dataset);
    //cout <<String_Split << "\n\n";
    // while loop function to go through source string until it is finished.
    while (getline(obj_ss, String_Split, ',')) {
        cout << String_Split << endl;
       // istringstream Dataset ('(' + Dataset + ')');
        //complex <float> complex_number;
        //Dataset >> complex_number;
        //cout << complex_number << "\n \n";
    }
}

int main()
{   
   double Vektor_Length;
   cout << "Length input: ";
   cin >> Vektor_Length;
   vector<double> Inputvektor(Vektor_Length, 0.0);
    // Vektor input, erstmal Manuell
   for (int k =0; k< Vektor_Length; k++)
   {
    cout << "Position " << k+1 << ": ";
    cin >> Inputvektor[k];
    // std::cout << Inputvektor;
   }
    //DFT Berechnung
    vector<double> LsgVektor(Vektor_Length, 0.0);
    vector<double> HilfsVektor(Vektor_Length, 0.0);
    double iteration_count=Vektor_Length;
    for (int j = 0; j< Vektor_Length; j++)
    {
         for (int i = 1;i < iteration_count; i++)
         {
             HilfsVektor[i]=j*i/(Vektor_Length+1);
             cout << "Hilfsvektor " << i+1 << ": " << HilfsVektor[i] << "\n";
         }
         // es fehlt noch imag in der Gleichung
         LsgVektor[j]=exp(-HilfsVektor[j]*2*3.14)*Inputvektor[j]; //std::imag*3,14*-2
         cout << "LSGVektor " << j+1 << ": " << LsgVektor[j] << "\n";
    } 
   CSV_Split();
    return 0;
}

