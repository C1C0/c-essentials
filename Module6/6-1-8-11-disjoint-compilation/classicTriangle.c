/**
 * @file classicTriangle.c
 * @author your name (you@domain.com)
 * @brief Classic triangle
 * @version 0.1
 * @date 2021-12-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
void classicTriangle(int nOfRows){
    for(int i = 1; i <= nOfRows; i++){
        for (int j = 0; j < i; j++){
            printf("\\");
        }
        printf("\n");
    }
}