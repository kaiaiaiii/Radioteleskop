#include <iostream>
#include <vector>
#include <complex>
#include <cmath>
#include <chrono>
#include "SignalTransformation.h"
#include "FileReadWrite.h"
using namespace std;

int DiscreteFourierTransform(string Dataset, string Outputfile){
    auto start = std::chrono::high_resolution_clock::now();
    vector<string> InputDaten = FileReadWrite::ReadDataFromFile(Dataset);
    vector<complex<double>> DFT_Input = SignalTransformation::StringToComplex(InputDaten);
    vector<complex<double>> DFT_Ergebnis = SignalTransformation::DFT({DFT_Input});


    int Vektor_Length = DFT_Ergebnis.size();
    vector<double> Magnitudenvektor(Vektor_Length), Phasenvektor(Vektor_Length);
    #pragma omp parallel
    for (int k = 0; k < Vektor_Length; k++){
        Magnitudenvektor[k] += sqrt(DFT_Ergebnis[k].imag()*DFT_Ergebnis[k].imag() + DFT_Ergebnis[k].real()*(DFT_Ergebnis[k].real()));
        Phasenvektor[k] += atan2(DFT_Ergebnis[k].imag(), DFT_Ergebnis[k].real());
    }

    FileReadWrite::WriteToFile(DFT_Ergebnis,Magnitudenvektor,Phasenvektor,Outputfile);
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop-start);
    cout << duration.count() << endl;
    return 0;
}