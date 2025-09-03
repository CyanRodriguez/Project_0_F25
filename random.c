#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rand_string(char *s, int size){
    for(int i = 0; i < size; i ++){
        s[i]= rand()%26 + 'a';
    }
    s[size]= '\0';
}