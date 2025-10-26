#include "ReadFromFile.h"
#include "DFT.h"
using namespace std;

int main(){
    
    ReadFromFile("//wsl.localhost/Ubuntu-22.04/home/kai/Radioteleskop/SignalTransformation/Dataset/Dataset.txt");
    /*StringToComplex(Dataset);*/
    DFT(StringToComplex(Dataset));

}