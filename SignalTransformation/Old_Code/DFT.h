#include <iostream>
#include <vector>
#include <complex>
#include <cmath>
using namespace std; 

class DiscreteFourierTransform{
    public:
        void DFT(vector<complex<double>> InputVektor);
        void Transformation();
        double AbsolutWert;
        
        complex<double> a=-1;
        complex<double> imag = sqrt(a);
    };