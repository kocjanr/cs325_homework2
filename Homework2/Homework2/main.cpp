//
//  main.cpp
//  Homework2
//
//  Created by Ryan Kojan on 1/25/17.
//  Copyright © 2017 Ryan Kojan. All rights reserved.
//

#include <iostream>
#include "InsertionSort.cpp"
using namespace std;

int main(int argc, const char * argv[]) {
    int input;
    int exit = 00;
    
    InsertionSort insertion = *new InsertionSort();
    
    std::cout << "Enter 00 to quit." << std::endl;
    
    do
    {
        std::cout << ">: ";
        std::cin >> input;
        
        insertion.add(input);
        
    }while(input != exit);
    
    insertion.popLastElement();
    insertion.print();
    
    return 0;
}
