//
// Created by Dell on 2021/11/27.
//
#include <stdio.h>
#include "chapter2.h"
#include "ques1.c"
#include "ques2.c"
#include "ques3.c"

void runChapter2() {
    printf("-----chapter1-----------------\n");
    runChapter2ByQuesNum(chap2_ques1);
    printf("------------------------------\n");
    runChapter2ByQuesNum(chap2_ques2);
    printf("------------------------------\n");
    runChapter2ByQuesNum(chap2_ques3);
    printf("------------------------------\n");
}

void runChapter2ByQuesNum(enum chap2 ques) {
    switch(ques) {
        case chap2_ques1:
            printf("---chap2_ques1-----------\n");
            chapter2_ques1_1();
            chapter2_ques1_2();
            chapter2_ques1_3();
            chapter2_ques1_4();
            break;
        case chap2_ques2:
            printf("---chap2_ques2-----------\n");

            break;
        case chap2_ques3:
            printf("---chap2_ques3-----------\n");
            chapter2_ques3_1();
            chapter2_ques3_2();
            chapter2_ques3_3();
            break;

        default:
            printf("error-----chapter2 no such ques---------\n");
    }
}
