#include "operaciones.h"
#include <limits.h>

int sumaValida(int a, int b){
    return !(((b>0)&&(a>INT_MAX-b)) || ((b<0)&&(a<INT_MIN-b)));
}

int suma(int a, int b){
    return a+b;
}

int restaValida(int a, int b){
    return !(((b>0)&&(a<INT_MIN+b)) || ((b<0)&&(a>INT_MAX+b)));
}


int resta(int a, int b){
    return a-b;
}


int productoValido(int a, int b){
    if(a>0){
        if(b>0){
            return !(a>(INT_MAX/b));
        }
        else{
            return !(b<(INT_MIN/a));
        }
    } 
    else{
        if(b>0){
            return !(a<(INT_MIN/b));
        }
        else{
            return !((a!=0)&&(b<(INT_MAX/a)));
        }
    }
}

int producto(int a, int b){
    return a*b;
}

int divisionEnteraValida(int a, int b){
    return (b!=0);
}


int divisionEntera(int a, int b){
    return a/b;
}