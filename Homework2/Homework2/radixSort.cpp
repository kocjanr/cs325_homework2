//
//  radixSort.cpp
//  Homework2
//
//  Created by Ryan Kojan on 1/28/17.
//  Copyright © 2017 Ryan Kojan. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class radixSort{
    
    radixSort(){
        
    }
    
    void add(int input){
        _numbers.push_back(input);
    }
    
    void popOffLastElement(){
        _numbers.pop_back();
    }
    
    int sortingValue(int element, int digitPosition){
        
        int arrayOfvalue[3];
        int value;q
        
        for (int i = 0; i < digitPosition; i++) {
            //get element from place
        }
        
        return 1;
    }
    
    void addToBucket(std::vector<int> list, int digitPlace){
        
        int digitToSortBy;
    
    }

    void sort(){
        int digitIndex = 3;
        int digitvalue;
        //int array[10];
        std::vector<int [10]> bucket;
        
        while (digitIndex < 1) {
            
            for (int i = 0; i < _numbers.size() - 1; i++) {
                
            }
            
            digitIndex--;
        }
    }
    
    void print(std::vector<int> &input){
        for (int i = 0; i < input.size(); i++) {
            cout << input[i] << " ";
        }
    }
    
    
    std::vector<int> _numbers;
    std::vector<int> _sortedNumbers;
    std::vector<int> _bucket;
    int _numbersSize = (int) _numbers.size();

};
