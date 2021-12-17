#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    ifstream a("score.txt");
    string b;
    double c = 0;
    double N = 0;
    double M;
    double P;
    double R = 0;
    while (getline(a,b))
    {
        c = c + stod(b);
        N++;
        R = R + pow(stod(b),2);
    }
    M =(c/N);
    P = sqrt((R/N) - (M*M));
    a.close();
    cout << "Number of data = " << N << "\n";
    cout << setprecision(3);
    cout << "Mean = " << M << "\n";
    cout << "Standard deviation = " << P;
}