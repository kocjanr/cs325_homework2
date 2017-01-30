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
        
        int first = _numbers[0];
        int last = _numbers[_numbers.size()-1];
        
        quickSort(_numbers, first, last);
    }
    
private:
    
    void quickSort(std::vector<int> vector, int left, int right){
        
        if (left >= right) {
            return;
        }
        
        int pivot = (left+right) / 2;
        int index = vectorPartition(vector, left, right, pivot);
        
        quickSort(vector, left, index-1);
        quickSort(vector, index, right);
    
    }
    
    int vectorPartition(std::vector<int> vector, int left, int right, int pivot){
        
        while (left < right){
            
            while (vector[right] < pivot) {
                left++;
            }
            
            while (vector[right] > pivot) {
                right--;
            }
            
            if(left < right){
                swapElements(left, right);
                left++;
                right--;
            }
        }
    
        return left;
    }
    
    void swapElements(int element1, int element2){
        int temp = _numbers[element1];
        _numbers[element1] = _numbers[element2];
        _numbers[element2] = temp;
    }
    
    void printVector(){
        for (int i = 0; i < _numbers.size(); i++) {
            std::cout << _numbers[i] << " ";
        }
    }

    //Class virables
    std::vector<int> _numbers;
    int count = (int) _numbers.size();
};
