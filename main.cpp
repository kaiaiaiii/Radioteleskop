#include <iostream>
#include "SignalTransformation/SignalTransformation.cpp"
//#include "SignalTransformation/ReadDataFromPi.h"
#include <complex>
using namespace std;

int DiscreteFourierTransform(string Dataset);
//int ReadDataFromPi();
int main(){
    while (true){
        //ReadDataFromPi();
        DiscreteFourierTransform("Dataset.txt");
        //PlotData();
        
    }
    return 0;

}
/*Pseudocode fuer meine Erinnerung und ideen
while true:
    Lesen inputsignal
    Schreiben in txt file
    txt file auswerten
    Daten plotten
*/