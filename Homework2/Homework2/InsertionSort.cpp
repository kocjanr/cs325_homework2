//
//  InsertionSort.cpp
//  Homework2
//
//  Created by Ryan Kojan on 1/25/17.
//  Copyright © 2017 Ryan Kojan. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class InsertionSort {
    
public:
    
    void add(int input) {
        _numbers.push_back(input);
    }
    
    void popLastElement() {
        _numbers.pop_back();
    }
    
    void sort() {
        insertionSort();
    }
    
    void print() {
        printVector();
    }
    
private:
    
    void insertionSort(){
        int in;
        
        for (int out = 1; out < _numbers.size(); out++) {
            int temp = _numbers[out];
            in = out;
            
            while (in > 0 && _numbers[in-1] >= temp) {
                _numbers[in] = _numbers[in-1];
                --in;
            }
            _numbers[in] = temp;
        }
    }
    
    void printVector(){
        for (int i = 0; i < _numbers.size(); i++) {
            std::cout << _numbers[i] << " ";
        }
    }
    
    std::vector<int> _numbers;
};
