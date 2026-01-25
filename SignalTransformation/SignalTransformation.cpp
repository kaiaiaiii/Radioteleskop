#include <iostream>
#include <vector>
#include <complex>
#include <cmath>
#include "SignalTransformation.h"
using namespace std;


string Dataset = "Dataset.txt";
int DFT(string Dataset){

    vector<string> InputDaten = SignalTransformation::ReadDataFromFile(Dataset);
    vector<complex<double>> DFT_Input = SignalTransformation::StringToComplex(InputDaten);
    vector<complex<double>> DFT_Ergebnis = SignalTransformation::DFT({DFT_Input});


    size_t Vektor_Length = DFT_Ergebnis.size();
    vector<double> Magnitudenvektor(Vektor_Length), Phasenvektor(Vektor_Length);

    for (int k = 0; k < Vektor_Length; k++){
        Magnitudenvektor[k] += sqrt(DFT_Ergebnis[k].imag()*DFT_Ergebnis[k].imag() + DFT_Ergebnis[k].real()*(DFT_Ergebnis[k].real()));
        Phasenvektor[k] += atan2(DFT_Ergebnis[k].imag(), DFT_Ergebnis[k].real());
    }

    SignalTransformation::WriteToFile(DFT_Ergebnis,Magnitudenvektor,Phasenvektor );
    return 0;
}