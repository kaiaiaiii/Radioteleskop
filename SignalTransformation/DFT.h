#include <iostream>
#include <vector>
#include <complex>
#include <cmath>
using namespace std; 

class DiscreteFourierTransform{
    protected:
        void DFT(vector<complex<double>> InputVektor);
        void Transformation();
        double AbsolutWert;
    };