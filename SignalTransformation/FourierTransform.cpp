#include <iostream>
#include <cmath>
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
int DFT()
{
   double LsgVektor[10]={0,0,0,0,0,0,0,0,0,0};
}
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

    double result = cos(t);
    std::cout <<  result << "\n";
    }
}
    //for (int )


    /*
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
