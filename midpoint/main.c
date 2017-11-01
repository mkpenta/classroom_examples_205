/*
Michael Penta
Project/Assignemnt/Lab example
This pogram prompts a user and prints a result
*/

#include <stdio.h>
void midpoint( float , float, float, float , float*, float* );

int main() {

    float xmid;
    float ymid;
    
    float *ptr;
    
    ptr = &ymid;
    
    midpoint(0, 0, 10, 10, &xmid, ptr);

    printf("(%f, %f)", xmid, *ptr);
}



void midpoint( float x1, float y1, float x2, float y2, float *xm, float* ym )
{
    *xm = (x2 - x1)/2.0;
    *ym = (y2 - y1)/2.0;
}
