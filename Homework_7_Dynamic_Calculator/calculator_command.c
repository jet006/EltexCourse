#include <stdio.h>
int summ(int a,int b){ 
    int c;
    c = a + b;
    return c;
}
int substr(int a,int b){
    int c;
    if (a>=b){
          c = a - b;
          return c;
             }
          else {
                c = b - a;
                return c;
          }
}
int mult(int a,int b){
        int c;
        c = a * b;
        return c;
}
int divis(int a,int b){
        int c;
        c = a / b;
        return c;
}

