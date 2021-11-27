//
// Created by Dell on 2021/11/27.
//

#include <malloc.h>
#include "numberConversion.h"

void chapter2_ques1_1() {
    char* binNum = malloc((HexMaxLength*4+1)* sizeof(char));
    char* index = binNum + HexMaxLength*4;
    *index = '\0';
    printf("0b");
    printf("%s\n", Hex2bin("39A7F8", index));
    free(binNum);
}

void chapter2_ques1_2() {
    char* hexNum = malloc((BinaryMaxLength/4+1)* sizeof(char));
    char* index = hexNum + BinaryMaxLength/4;
    *index = '\0';
    printf("0x");
    printf("%s\n", bin2Hex("1100100101111011", index));
    free(hexNum);
}

void chapter2_ques1_3() {
    char* binNum = malloc((HexMaxLength*4+1)* sizeof(char));
    char* index = binNum + HexMaxLength*4;
    *index = '\0';
    printf("0b");
    printf("%s\n", Hex2bin("D5E4C", index));
    free(binNum);
}

void chapter2_ques1_4() {
    char* hexNum = malloc((BinaryMaxLength/4+1)* sizeof(char));
    char* index = hexNum + BinaryMaxLength/4;
    *index = '\0';
    printf("0x");
    printf("%s\n", bin2Hex("1001101110011110110101", index));
    free(hexNum);
}
