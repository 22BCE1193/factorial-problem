#include<stdio.h>
#include<math.h>

void main(){
    long double n,fac,d;
    fac=1;
    scanf("%Lf",&n);
    while(n!=0){
    fac = fac* (n);
    n=n-1;
    if (fmod(n,10)==0){
        fac=fac/10;
    }
    }
    d=fmod(fac,10);
    printf("%Lf",d);
}