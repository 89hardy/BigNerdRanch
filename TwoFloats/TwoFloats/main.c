//
//  main.c
//  TwoFloats
//
//  Created by Himanshu Awasthi on 20/06/12.
//  Copyright (c) 2012 GFITM. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    float weight = 14.2;
    
    float cookingTime = 15.0 + 15.0 * weight;
    
    double recepie = weight + cookingTime;
    
    printf("Sum of the two variables is %f. \n", recepie);
    
   return 0;
}

