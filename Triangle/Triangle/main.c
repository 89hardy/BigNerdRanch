//
//  main.c
//  Triangle
//
//  Created by Himanshu Awasthi on 21/06/12.
//  Copyright (c) 2012. All rights reserved.
//

#include <stdio.h>

float remainingAngle (float angleA, float angleB)
{
    float angleC = 180 - (angleA + angleB);
    //printf("AngleC is %f. \n", angleC);
    return angleC;
}

int main(int argc, const char * argv[])
{
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angle is %f \n", angleC);
    return 0;
}

