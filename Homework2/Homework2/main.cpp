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
using namespace std;

int main(int argc, const char * argv[]) {
    int input;
    int exit = 00;
    
    InsertionSort insertion = *new InsertionSort();
    QuickSort quick = *new QuickSort();
    
    std::cout << "Enter 00 to quit." << std::endl;
    
    do
    {
        std::cout << ">: ";
        std::cin >> input;
        
        insertion.add(input);
        
    }while(input != exit);
    cout << endl;
    
    //Insertion Sort
    insertion.popLastElement();
    cout << "Numbers entered: ";
    insertion.print();
    cout << endl;
    cout << "Insertion sort: ";
    insertion.sort();
    insertion.print();
    
    cout << endl;
    
    //Quick Sort
    
    return 0;
}
