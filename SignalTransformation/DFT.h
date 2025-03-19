#include <iostream>
#include <vector>
#include <complex>
#include <cmath>
using namespace std; 
void DFT(vector<complex<double>> InputVektor){
    double Vektor_Length = InputVektor.size();
    vector<complex<double>> ErgebnisVektor{0,0,0,0};
    vector<complex<double>> Hilfsergebnis{0,0,0,0};
    complex<double> a=-1;
    complex<double> imag = sqrt(a);
    for (double k =0; k<(Vektor_Length); k++)
        {
            for (double j =0; j<(Vektor_Length); j++)
            {
                ErgebnisVektor[k]+= (1/sqrt(Vektor_Length))*InputVektor[j]*exp(-2*M_PI*imag*j*(k)/(Vektor_Length));
            }
            
            cout << ErgebnisVektor[k];

        }
}