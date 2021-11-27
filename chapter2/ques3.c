//
// Created by Dell on 2021/11/27.
//
#include <malloc.h>
#include "numberConversion.h"


void dec2HexAndBin(const char* decNum) {
    char* binNum = malloc((DecMaxLength*4+1)* sizeof(char));
    char* index1 = binNum + DecMaxLength/4;
    *index1 = '\0';
    printf("%s\t0x", decNum);
    index1 = dec2Bin(decNum, index1);
    printf("%s\t", index1);
    char* hexNum = malloc((BinaryMaxLength/4+1)* sizeof(char));
    char* index2 = hexNum + BinaryMaxLength/4;
    *index2 = '\0';
    printf("0x");
    printf("%s\n", bin2Hex(index1, index2));
    free(hexNum);
    free(binNum);
}

void chapter2_ques3_1() {
    dec2HexAndBin("167");
}
void chapter2_ques3_2() {
    dec2HexAndBin("62");
}
void chapter2_ques3_3() {
    dec2HexAndBin("188");
}
