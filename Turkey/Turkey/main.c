//
//  main.c
//  Turkey
//
//  Created by Himanshu Awasthi on 20/06/12.
//  Copyright (c) 2012 GFITM. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    //Declaring variable Weight with type float
    float weight;
    
    //Assigning value to the value
    weight = 14.2;
    
    //Log it to the user
    printf("The turkey weighs %f. \n", weight);
    
    
    //Declaring variable Cooking Time with type float
    float cookingTime;
    
    //Assigning value to the value
    cookingTime = 15.0 + 15.0 * weight;
    
    //Logging
    printf("Cook it for %f minutes. \n", cookingTime);
    

   return 0;
}

