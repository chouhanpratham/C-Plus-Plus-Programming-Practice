#include <stdio.h>
//A pointer in C++ is used to share a memory address among different contexts (primarily functions). They are used whenever a function needs to modify the content of a variable, but it does not have ownership.
void update(int *a,int *b) {
    // Complete this function    
    int c=*a+*b;
    int d=*a-*b;
    *a=c;
    if(d<0)
    d=-d;
    *b=d;
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}