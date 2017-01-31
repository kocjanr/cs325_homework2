//
//  main.cpp
//  Homework2
//
//  Created by Ryan Kojan on 1/25/17.
//  Copyright © 2017 Ryan Kojan. All rights reserved.
//

#include <iostream>
#include "InsertionSort.cpp"
#include "QuickSort.cpp"
#include "radixSort.cpp"
using namespace std;

int main(int argc, const char * argv[]) {
    int input;
    int exit = 00;
    
    InsertionSort insertion = *new InsertionSort();
    QuickSort quick = *new QuickSort();
    radixSort radix = *new radixSort();
    
    std::cout << "Enter 00 to quit." << std::endl;
    
    do
    {
        std::cout << ">: ";
        std::cin >> input;
        
        insertion.add(input);
        quick.add(input);
        radix.add(input);
        
    } while(input != exit);
    cout << endl;
    cout << "Numbers entered: ";
    insertion.popLastElement();
    insertion.print();
    cout << endl;
    
    
    //Radix Sort
    cout << "Radix sort: ";
    radix.popOffLastElement();
    //radix.print();
    radix.sort();
    
    

    
    cout << endl;
    return 0;
}
