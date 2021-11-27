//
// Created by Dell on 2021/11/26.
//
#include "ques1.c"
#include "ques2.c"

enum chap1 { quesNum1_1, quesNum1_2, quesNum2  };

void runchap1ByQuesNum(enum chap1 ques);

void runchapter1() {
    runchap1ByQuesNum(quesNum1_1);
    runchap1ByQuesNum(quesNum1_2);
    runchap1ByQuesNum(quesNum2);
}

void runchap1ByQuesNum(enum chap1 ques) {
    switch(ques) {
        case quesNum1_1:
            printf("---ques1_1-----------\n");
            printf("%f\n", ques1_1(1500, 150));
            printf("--------------\n");
            break;
        case quesNum1_2:
            printf("---ques1_2-----------\n");
            printf("%f\n", ques1_2(1500, 1.67));
            printf("--------------\n");
            break;
        case quesNum2:
            printf("---ques2-----------\n");
            printf("%f\n", ques2(2, 0.8));
            printf("--------------\n");
            break;
        default:
            printf("error-----no such ques---------\n");
    }
}

