//
// Created by Dell on 2021/11/26.
//

#define length 2500
#define averageVelocity 100

double ques1_1(int changeLength, int changeVelocity) {
    double timeRate = (double) changeLength / length;
    double velocityRate = (double) changeVelocity / averageVelocity;
    double s = 1 / ((1 - timeRate) + timeRate / velocityRate);
    return s;
}

double ques1_2(int changeLength, double s) {
    double timeRate = (double) changeLength / length;
    double velocityRate = timeRate / (1 / s + timeRate - 1);
    double changeVelocity = velocityRate * averageVelocity;
    return changeVelocity;
}
