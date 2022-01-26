#include <stdio.h>
#include <assert.h>

#define Max_Major_Color 5U
#define Max_Minor_Color 5U

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

/* This function will be check pair names aginst pair number befor getting print */

void printOnConsole(int AIndex_i , const char* AmajorColor_c , const char* AminorColor_c)
{
    /* Below assert function will be check each pair */
    
    assert( majorColor[AIndex_i / Max_Major_Color] == AmajorColor_c);
    assert( minorColor[AIndex_i % Max_Minor_Color] == AminorColor_c);
     
    printf("%d | %s | %s\n", AIndex_i , AmajorColor_c, AminorColor_c);
}


int printColorMap() {
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
       for(j = 0; j < 5; j++) 
       {
           printf("%d | %s | %s\n", i * 5 + j, majorColor[i], minorColor[i]);
           printOnConsole(i * 5 + j , majorColor[i] ,  minorColor[i]);
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}
