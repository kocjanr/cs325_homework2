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
    std::vector<int> _numbers;
    
    
    void add(int input) {
        _numbers.push_back(input);
    }
    
    void popLastElement() {
        _numbers.pop_back();
    }
    
    void print (){
        for (int i = 0; i < _numbers.size(); i++) {
            std::cout << _numbers[i] << " ";
        }
    }
    
    void sort(){
    
    }
};
