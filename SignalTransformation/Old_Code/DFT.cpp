#include <iostream>
#include <vector>
#include <complex>
#include <cmath>
#include "DFT.h"
using namespace std; 

void DiscreteFourierTransform::DFT(vector<complex<double>> InputVektor){

    double Vektor_Length = InputVektor.size();
    vector<complex<double>> ErgebnisVektor(Vektor_Length, 0);

    for (double k =0; k<(Vektor_Length); k++)
        {
            for (double j =0; j<(Vektor_Length); j++)
            {
                ErgebnisVektor[k]+= (1/sqrt(Vektor_Length))*InputVektor[j]*exp(-2*M_PI*imag*j*(k)/(Vektor_Length));
            }
            
            cout << ErgebnisVektor[k];

        }
}

void DiscreteFourierTransform::Transformation(){
    DFT({1,2,3});
}

int main(){
    DiscreteFourierTransform dft;
    dft.DFT({complex<double>(1), complex<double>(2), complex<double>(3)});
    return 0;
}