//
//  main.c
//  Test_C
//
//  Created by Welly Malquitar on 11/11/2015.
//  Copyright © 2015 Welly Malquitar. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int x;
    int y = 5;
    
    printf("Hello, please enter a number: ");
    scanf("%d", &x);
    
    printf("Please enter another value: ");
    scanf("%d", &y);
    
    int sum = x + y;
    
    printf("The sum of entered value is %d\n", sum);
    printf("Hello, World!\n");
    return 0;
}
