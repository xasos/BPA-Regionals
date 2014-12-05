//
//  main.cpp
//  BPA-Regionals
//
//  Created by Niraj  on 12/5/14.
//  Copyright (c) 2014 Niraj Pant. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int calcLeibniz(int n) {
    int piApprox = 0;
    for (int i=0; i < n; ++i) {
//        std::cout << "i: " << i << "\n";
        int power = pow (-1, n);
        if(i < 5)
        {
            printf("power is: %d", power);
        }
//        piApprox = piApprox + (power/(2*n +1));
    }
    
    return piApprox;
}

int main(int argc, const char * argv[]) {
    int PI = 3.141592653589793;
    float approx1 = (22/7);
    float approx2 = (355/113);
    int LEIBNIZ_const = 1000000;
    calcLeibniz(LEIBNIZ_const);
    
    std::cout << "Hello, World!\n";
    std::cout << calcLeibniz(LEIBNIZ_const);
    return 0;
}


