//
// Created by Dell on 2021/11/27.
//
#include <assert.h>
#include "numberConversion.h"

char* bin2Hex(const char* binNum, char* index) {
    int length = 0;
    const char* endIndex = binNum;
    while(length<=BinaryMaxLength && *(endIndex+1)!='\0') {
        length++;
        endIndex++;
    }
    assert(length<=BinaryMaxLength);
    static char hexSym[6] = { 'A', 'B', 'C', 'D', 'E', 'F' };
    while(length>=0) {
        int tempNum = 0;
        int i=0;
        for(; i<4 && length>=0; i++) {
            tempNum += (*endIndex - '0') << i;
            length--;
            endIndex--;
        }
        char bitNum;
        if(tempNum < 10) {
            bitNum = tempNum + '0';
        }  else {
            bitNum = hexSym[tempNum - 10];
        }
        *(index-1) = bitNum;
        index--;
    }
    return index;
}

char* Hex2bin(const char* hexNum, char* index) {
    int length = 0;
    const char* endIndex = hexNum;
    while(length<=HexMaxLength && *(endIndex+1)!='\0') {
        length++;
        endIndex++;
    }
    assert(length<=HexMaxLength);
    while(length>=0) {
        int bitNum;
        if(*endIndex - '0' <10) {
            bitNum = *endIndex - '0';
        } else {
            bitNum = *endIndex - 'A' + 10;
        }
        int i=0;
        for(; i<4; i++) {
            *(index-1) = bitNum % 2 + '0';
            bitNum /= 2;
            index--;
        }
        endIndex--;
        length--;
    }
    return index;
}


char* dec2Bin(const char* decNum, char* index) {
    int length = 0;
    const char* endIndex = decNum;
    while(length<=DecMaxLength && *(endIndex+1)!='\0') {
        length++;
        endIndex++;
    }
    assert(length<=DecMaxLength);
    int decNumber = 0;
    int i = 1;
    while(length>=0) {
        decNumber += (*endIndex - '0') * i;
        i *= 10;
        length--;
        endIndex--;
    }
    while(decNumber>0) {
        int bitNum = decNumber % 2;
        decNumber /= 2;
        if(bitNum==1) {
            *(index-1) = '1';
        } else {
            *(index-1) = '0';
        }
        index--;
    }
    return index;
}