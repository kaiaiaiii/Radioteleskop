#include "ReadFromFile.h"
using namespace std;

/*void StringToComplex(Vektor_Length, Dataset){
    ReadFromFile("/home/vboxuser/Documents/repos/Radioteleskop/SignalTransformation/Dataset/Dataset.txt");
    cout << Vektor_Length;
}*/

int main(){
    ReadFromFile("/home/vboxuser/Documents/repos/Radioteleskop/SignalTransformation/Dataset/Dataset.txt");
    StringToComplex(Dataset);
    DFT(ComplexVektor);
}