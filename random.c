#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rand_string(char *st, int size){
    for(int i = 0; i < size; i ++){
        st[i]= rand()%26 + 'a';
    }
    st[size]= '\0';
}