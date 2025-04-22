#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function  
    int tempa = (*a);
    (*a) = (*a)+(*b);
    if((tempa)>=(*b)){
        (*b) = (tempa)-(*b); 
    }
    else{
        (*b) = (*b)-(tempa); 
    }
     
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}