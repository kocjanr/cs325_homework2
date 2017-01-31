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
    
    void findValueToSortBy(int digitPlace){
        
        int temp;
        
        return addToBucket(temp);
    
    }
    
    void addToBucket(int input){
        
        int count;
        
        std::vector<int> zero;
        std::vector<int> one;
        std::vector<int> two;
        std::vector<int> three;
        std::vector<int> four;
        std::vector<int> five;
        std::vector<int> six;
        std::vector<int> seven;
        std::vector<int> eight;
        std::vector<int> nine;
        
        if (input == 0) {
            zero.push_back(input);
            count++;
        }
        
        if (input == 1) {
            one.push_back(input);
            count++;
        }
        
        if (input == 2) {
            two.push_back(input);
            count++;
        }
        
        if (input == 3) {
            three.push_back(input);
            count++;
        }
        
        if (input == 4) {
            four.push_back(input);
            count++;
        }
        
        if (input == 5) {
            five.push_back(input);
            count++;
        }
        
        if (input == 6) {
            six.push_back(input);
            count++;
        }
        
        if (input == 7) {
            seven.push_back(input);
            count++;
        }
        
        if (input == 8) {
            eight.push_back(input);
            count++;
        }
        
        if (input == 9) {
            nine.push_back(input);
            count++;
        }
        
        else if (count == _numbers.size()){
        
        }
    
    }

    void sort(){
        int digitIndex = 3;
        int digitvalue;
        
        while (digitIndex < 1) {
            
            for (int i = 0; i < _numbers.size() - 1; i++) {
                
            }
            
            digitIndex--;
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
