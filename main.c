//
//  main.c
//  chapter 1.2
//
//  Created by Aneth Rodriguez on 11/02/21.
//

#include <stdio.h>

// print fahrenheit - celcius table.
// for fahr - 0,20,..., 300; floating-point version.

int main ()
{
    float fahr, celsius;
    float lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    {
        printf("fahr celsius\n");
    }
    
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
        
    }
}
