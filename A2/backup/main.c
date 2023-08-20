#include "myl.h"

int main(){
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    float g = 0.0;
    
    printStr("Enter an integer: ");
    readInt(&b);
    printStr("The integer entered is: ");
    printInt(b);

    printStr("\n");

    printStr("Enter a float: ");
    readFlt(&g);
    printStr("The float entered is: ");
    printFlt(g);
    
    printStr("\n");
    
    return 0;
}