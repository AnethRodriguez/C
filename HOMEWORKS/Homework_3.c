//  main.c
//  HOMEWORK 3
//
//  Created by Aneth Rodriguez on 07/03/21.
//

#include <stdio.h>

#define T 1
#define F 0
int main () {
    
    int c;
    int num = F;
    int par = F;
    int quo = F;
    
    while ((c = getchar()) != EOF) {
        switch(c){
                
            case '(':
                par = T;
                putchar (c);
                break;
            case ')':
                par = F;
                putchar (c);
                break;
            
            case '[':
                par = T;
                putchar (c);
                break;
            case ']':
                par = F;
                putchar (c);
                break;
                
            case '{':
                par = T;
                putchar (c);
                break;
            case '}':
                par = F;
                putchar (c);
                break;
                
            case '<':
                par = T;
                putchar (c);
                break;
            case '>':
                par = F;
                putchar (c);
                break;
                
            case '\"':
                putchar (c);
                quo ++;
                break;
            case '\'':
                putchar (c);
                quo ++;
                break;
                
            default:
                
                if (c != '.' && c != ':' && c != ',' && c != ';' && c != '-' && c != '_' && c != '!' && c != '\?' ){
                    if ( par == T || quo == T){
                        putchar (c);
                    }
                    else {
                        if ( quo == 2 ){
                             quo = 0;
                        }
                        if (c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' || c == '0'){
                            num++;
                        } else {
                            num = 0;
                        }
                        if (num == 1){
                            putchar ('X');
                        }
                        if (num == 0){
                            putchar (c);
                        }
                    }
        }
    }
}
    return 0;
}//hecho en pareja con  ana fernanda
