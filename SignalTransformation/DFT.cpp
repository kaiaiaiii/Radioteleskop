#include <iostream>
#include <vector>
#include <complex>
#include <cmath>
using namespace std; 
void DFT(double Vektor_Length, vector<complex<double>> InputVektor){
    vector<complex<double>> ErgebnisVektor{0,0,0,0};
    vector<complex<double>> Hilfsergebnis{0,0,0,0};
    complex<double> a=-1;
    complex<double> r = sqrt(a);
    for (double i =0; i<3; i++)
        {
            for (double k =0; k<(3); k++)
            {
                Hilfsergebnis[k]+= exp(-6.242*r*i*k/Vektor_Length);
                ErgebnisVektor[i]+=InputVektor[i]*Hilfsergebnis[k];
            }

            cout << ErgebnisVektor[i];

        }
}

int main(){
    DFT(4, {1,-4,3,1});
}