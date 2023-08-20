#include "myl.h"

int main(){
    int a = 0, ret_val = 0;
    float b = 0.0;
    
    printStr("Enter an integer: ");
    ret_val = readInt(&a);

    if(ret_val){
        printStr("The integer entered is: ");
        printInt(a);
    }
    else{
        printStr("Error: invalid input\n");
        return 0;
    }

    printStr("\n");

    printStr("Enter a float: ");
    ret_val = readFlt(&b);

    if(ret_val){
        printStr("The float entered is: ");
        printFlt(b);
    }
    else{
        printStr("Error: invalid input\n");
        return 0;
    }

    
    printStr("\n");
    
    return 0;
}