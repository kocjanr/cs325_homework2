//
//  QuickSort.cpp
//  Homework2
//
//  Created by Ryan Kojan on 1/26/17.
//  Copyright © 2017 Ryan Kojan. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class QuickSort {

public:
    
    void add(int input) {
        _numbers.push_back(input);
    }
    
    void popLastElement() {
        _numbers.pop_back();
    }
    
    void print() {
        printVector();
    }
    
    void sort() {
        quickSort(_numbers);
    }
    
private:
    
    void quickSort(std::vector<int> &input){
        
        int left = input[0];
        int right = input[input.size()+1];
        
        int size = (int) (input.end() - input.begin()) + 1;
        
        if (size <= 3) {
            //manual sort
        }
        
        else{
            
        
        }
        
    
    }
    
    void order(int a, int b) {
    
    }
    
    int pivotPoint(int start, int end) {
        
        int centerPoint = (start + end) / 2;
        
        return centerPoint;
    }
    
    void swap(int a, int b) {
    
    }
    
    void printVector(){
        for (int i = 0; i < _numbers.size(); i++) {
            std::cout << _numbers[i] << " ";
        }
    }

    std::vector<int> _numbers;

};
