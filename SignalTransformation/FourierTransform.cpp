#include <iostream>
#include <cmath>
#include <complex>
#include <math.h>
#include <vector>
#include <iomanip>
#include <fstream>

//Dataset will first be given by me/downloaded somewhere (link will follow) and later on be implemented by me directly
//need to fix this one, its just the algorithm
/*
void fft(n, f) {
    if (int n == 1){
        return f;
    } else {
        g = fft(float n/2, ());
        u = fft(float n/2, ());
        for(float k= 0; k<n/2+1, k++)
            c_k=g_k+u_k*exp(-2*pi*i*k/n)
            c_k+n/2=g_k-u_k*exp(-2*pi*i*k/n)

    }
}
//Normal fourier Transform?
*/
/*
void DFT()
{
    double Vektor_Length;
    std::vector<double> LsgVektor(Vektor_Length, 0.0);
    std::vector<double> HilfsVektor(Vektor_Length, 0.0);
    double iteration_count=0;
    for (int j = 0; j< Vektor_Length; j++)
    {
         for (int i = 0;i < iteration_count; i++)
         {
             HilfsVektor[i]=j*i/Vektor_Length;
             std::cout << HilfsVektor[i];
         }
         LsgVektor[j]=exp(HilfsVektor[j]*2); //std::imag*3,14*-2
         std::cout << LsgVektor[j];
         std::cout << LsgVektor[1];
         std::cout << LsgVektor[2];
    }
}*/
void ReadFromFile(){
    std::string Text_from_file;
    std::ifstream DFT_File("Dataset.txt") ;
    while (getline (DFT_File, Text_from_file)){
        std::cout << Text_from_file;
    };
    DFT_File.close();
}
int main()
{   
   double Vektor_Length;
   std::cout << "Length input: ";
   std::cin >> Vektor_Length;
   std::vector<double> Inputvektor(Vektor_Length, 0.0);
    // Vektor input, erstmal Manuell
   for (int k =0; k< Vektor_Length; k++)
   {
    std::cout << "Position " << k+1 << ": ";
    std::cin >> Inputvektor[k];
    // std::cout << Inputvektor;
   }
   
   //DFT Berechnung
   std::vector<double> LsgVektor(Vektor_Length, 0.0);
   std::vector<double> HilfsVektor(Vektor_Length, 0.0);
   double iteration_count=Vektor_Length;
   for (int j = 0; j< Vektor_Length; j++)
   {
        for (int i = 1;i < iteration_count; i++)
        {
            HilfsVektor[i]=j*i/(Vektor_Length+1);
            std::cout << "Hilfsvektor " << i+1 << ": " << HilfsVektor[i] << "\n";
        }
        // es fehlt noch imag in der Gleichung
        LsgVektor[j]=exp(-HilfsVektor[j]*2*3.14)*Inputvektor[j]; //std::imag*3,14*-2
        std::cout << "LSGVektor " << j+1 << ": " << LsgVektor[j] << "\n";
   } 
   ReadFromFile();
    return 0;
}


/*
int main(){
    DFT();
    return;
}
/* Updated
int calculator(int x, int y){
    int x, y;
    int sum;
    std::cout << "Type a number: ";
    std::cin >> x;
    std::cout << "Type another number: ";
    std::cin >> y;

    return x+y;
}
int main() {
    double t;
    std::cout << "Type a Number";
    std::cin>> t;
    for (double t = 0; t<20.01; t=t+0.2){
    //double t = 1.0;]
    std::cout << "Versuch3";
    double result = cos(t);
    std::cout <<  result << "\n";
    }
}
    //for (int )


    
    string str1("Hello")
    ifstream f("Dataset.txt");


    if (!f.is_open()) {
        cerr << "Error opening the file!";
        return 1;
    }


    string s;

    while (getline(f, s))
        str1.append(s)
        cout << str1 << endl;

    f.close();


    return 0;
} */
