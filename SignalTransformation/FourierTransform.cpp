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
#include <ranges>
#include "ReadFromFile.h"
using namespace std;
//Dataset will first be given by me/downloaded somewhere (link: https://www.kaggle.com/datasets/suraj520/rf-signal-data) and later on be implemented by me directly
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
    typedef complex<double> i;
    vector<complex<double>> LsgVektor(Vektor_Length, 0.0);
    vector<complex<double>> HilfsVektor(Vektor_Length, 0.0);
    double iteration_count=Vektor_Length;
    for (int j = 0; j< Vektor_Length; j++)
    {
         for (int i = 1;i < iteration_count; i++)
         {
             HilfsVektor[i]=j*i/(Vektor_Length+1);
             cout << "Hilfsvektor " << i+1 << ": " << HilfsVektor[i] << "\n";
         }
         // es fehlt noch imag in der Gleichung
         //i = -1;
         //i = sqrt(i);
         LsgVektor[j]=exp(-HilfsVektor[j]*2.0*acos(-1))*Inputvektor[j]; //std::imag*3,14*-2
         cout << "LSGVektor " << j+1 << ": " << LsgVektor[j] << "\n";
    } 
    CSV_Split();
    return 0;
}

