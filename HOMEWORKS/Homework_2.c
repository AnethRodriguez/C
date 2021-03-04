//
//  main.c
//  Homework 2
//
// Created by Aneth Rodriguez on 01/03/21
//

#include <stdio.h>
#include <math.h>

#define K 20

void prime (int n);
void binary (int r);

int main() {
    prime (K);
    return 0;
    
}

void binary (int r) {
    int i = 0;
    int base [9] = {0};
    while (r > 0)
        {
            base [i] = r%2;
            r/=2;
            ++i;
        }
    for (int x = 7; x >= 0; --x)
    { printf ("%01d", base [x]);
        
    }
    printf ("\n");
    
}

void prime (int k) {
    
    int count, i, flag, sr;
    int n = 1;
    count = 1;
    
    while (count <= k){
        sr = sqrt (n);
        flag = 0;
        
        for ( i = 2; i <= sr; i++){
            if (n%i == 0){
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            binary(n);
            count++;
        }
        n++;
    }
}

///Hecho en pareja con Ana Ramírez
