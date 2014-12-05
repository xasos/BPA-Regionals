// Niraj Pant
// 23-0015-0052

#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
using namespace std;

double valueOfLibnizSeries(double);
double PI = 3.141592653589793;


int main(int argc, const char * argv[]) {
    
    double nlimit = 0;
    double approx1 = (22.0/7.0);
    double approx2 = (355.0/113.0);
    
    cout << "Please enter a maximum value of n:\n";
    cin >> nlimit;
    cout << endl;
    
    if (nlimit <= 0) {
        cout << "Please type in a poitive integer for n." << endl;
        exit(0);
    }
    
    double calculatedValue = valueOfLibnizSeries(nlimit);
    
    
    cout << "The value of n in the Leibniz Series: " << nlimit << endl;
    cout << "The Leibniz series approximation of PI at n is: " << fixed << setprecision(15) << calculatedValue << endl;
    cout << endl;
    
    cout << "The known value of PI to 15 decimal points: " << PI << endl;
    cout << "The difference between PI and the Leibniz Series: " << abs(PI - calculatedValue) << endl;
    cout << endl;
    
    cout << "The approximation of PI using 22 / 7: " << approx1 << endl;
    cout << "The difference between PI and the Leibniz Series: " << fixed << setprecision(15) << abs(calculatedValue - approx1) << endl;
    cout << endl;

    
    cout << "The approximation of PI using 355 / 113: " << approx2 << endl;
    cout << "The difference between PI and the Leibniz Series: " << fixed << setprecision(10) << abs(calculatedValue - approx2) << endl;
    cout << endl;
    
    return 0;
}

double valueOfLibnizSeries(double nlimit) {
    double piApprox = 0;
    for (double i=0; i < nlimit; ++i) {
        piApprox += 4 * (pow (-1, i)/((2*i) + 1));
    }
    return piApprox;
}
