#include <gpiod.h>
#include <iostream>
#include <unistd.h>
#include "SignalTransformation/SignalTransformation.h"
#include "SignalTransformation/ReadDataFromPi.h"
using namespace std;

int DiscreteFourierTransform(string Dataset);
int Auslesen();

int main(){
    while (true){
        Auslesen();
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