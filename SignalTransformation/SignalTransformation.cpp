#include <iostream>
#include <vector>
#include <complex>
#include <cmath>
#include "SignalTransformation.h"
using namespace std;



int main(){

    //vector<complex<double>> Auslesevektor = SignalTransformation::ReadDataFromFile();
    SignalTransformation::DFT({1,2,3});
    return 0;
}