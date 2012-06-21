//
//  main.c
//  ClassCertificates
//
//  Created by Himanshu Awasthi on 20/06/12.
//  Copyright (c) 2012 GFITM. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void congratulateStudent (char *student, char *course, int *numDays)
{
    printf("%s has done as much as %s programming as I could fit into %d days. \n", student, course, numDays);
}

int main(int argc, const char * argv[])
{
    congratulateStudent("Mark", "Cocoa", 5);
    sleep(2);
    congratulateStudent("Bo", "Objective C", 2);
    sleep(2);
    congratulateStudent("Mike", "Python", 5);
    sleep(2);
return 0;
}

