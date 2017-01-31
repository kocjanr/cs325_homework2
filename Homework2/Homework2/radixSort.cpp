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
   
public:

    void add(int input){
        _numbers.push_back(input);
    }
    
    void popOffLastElement(){
        _numbers.pop_back();
    }
    
    void print(){
        printVector(_numbers);
        
    }
    
    
    
    
    
    
    int digitLength(int input) {
    
        return 1;
    }
    
    int findValueToSortBy(int number, int digitPlace){
        
        int value = (digitPlace == 0) ? number % 10 : findValueToSortBy(number/10, --digitPlace);
        int inputNumber = number;
        return addToBucket(value, inputNumber);

    }
    

    
    int addToBucket(int digit, int number){
        cout << "Add to bucket:" << endl;
        cout << "Digit: " << digit << " " << "Number: " << number << " " << endl;
        
        return 1;
    
    }

    void sort(){
        
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < _numbers.size(); j++) {
                int value;
                value = findValueToSortBy(_numbers[j], i);
                value = 0;
            }
        }
        

    }
    
    void printVector(std::vector<int> &input){
        for (int i = 0; i < input.size(); i++) {
            cout << input[i] << " ";
        }
    }
    
    
    std::vector<int> _numbers;
    std::vector<int> _bucket;
};
