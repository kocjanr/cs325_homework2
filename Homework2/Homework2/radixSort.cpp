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
    

    int findValueToSortBy(int number, int digitPlace){
        
        return (digitPlace == 0) ? number % 10 : findValueToSortBy(number/10, --digitPlace);
    }

    int addToBucket(int digit, int number){
        
        int zeroCount, oneCount, twoCount, threeCount, fourCount, fiveCount, sixCount, sevenCount, eightCount, nineCount;
        int numbersVectorSizeMultipler = (int)_numbers.size() *3;

        vector<int> vector0;
        vector<int> vector1;
        vector<int> vector2;
        vector<int> vector3;
        vector<int> vector4;
        vector<int> vector5;
        vector<int> vector6;
        vector<int> vector7;
        vector<int> vector8;
        vector<int> vector9;
        
        if (digit == 0) {
            vector0.push_back(number);
            zeroCount++;
        }
        
        if (digit == 1) {
            vector1.push_back(number);
            oneCount++;
        }
        
        if (digit == 2) {
            vector2.push_back(number);
            twoCount++;
        }
        
        if (digit == 3) {
            vector3.push_back(number);
            threeCount++;
        }
        
        if (digit == 4) {
            vector4.push_back(number);
            fourCount++;
        }
        
        if (digit == 5) {
            vector5.push_back(number);
            fiveCount++;
        }
        
        if (digit == 6) {
            vector6.push_back(number);
            sixCount++;
        }
        
        if (digit == 7) {
            vector7.push_back(number);
            sevenCount++;
        }
        
        if (digit == 8) {
            vector8.push_back(number);
            eightCount++;
        }
        
        if (digit == 9) {
            vector9.push_back(number);
            nineCount++;
        }
        
        else if (_count == numbersVectorSizeMultipler){
            
            cout << "Since I'm a total failure as student I couldn't figure out how to put the vectors values sorted into a bucket. " << endl;
//            for (int i = 0; i < zeroCount; i++) {
//                _bucket.push_back(vector0[i]);
//            }
//
//            for (int i = 0; i < oneCount; i++) {
//                _bucket.push_back(vector1[i]);
//            }
//            
//            for (int i = 0; i < twoCount; i++) {
//                _bucket.push_back(vector2[i]);
//            }
//            
//            for (int i = 0; i < threeCount; i++) {
//                _bucket.push_back(vector3[i]);
//            }
//            
//            for (int i = 0; i < fourCount; i++) {
//                _bucket.push_back(vector4[i]);
//            }
//            
//            for (int i = 0; i < fiveCount; i++) {
//                _bucket.push_back(vector5[i]);
//            }
//            
//            for (int i = 0; i < sixCount; i++) {
//                _bucket.push_back(vector6[i]);
//            }
//            
//            for (int i = 0; i < sevenCount; i++) {
//                _bucket.push_back(vector7[i]);
//            }
//            
//            for (int i = 0; i < eightCount; i++) {
//                _bucket.push_back(vector8[i]);
//            }
//            
//            for (int i = 0; i < nineCount; i++) {
//                _bucket.push_back(vector9[i]);
//            }
        
        }
        
        return 1;
    }

    void sort(){
        int counter;
    
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < _numbers.size(); j++) {
                int value;
                value = findValueToSortBy(_numbers[j], i);
                addToBucket(value, _numbers[j]);
                value = 0;
                counter++;
                _count = counter;
            }

        }
    }
    
    std::vector<int> _numbers;
    std::vector<int> _bucket;
    int _count;

};
