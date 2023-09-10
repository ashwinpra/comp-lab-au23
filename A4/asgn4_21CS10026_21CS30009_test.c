/*
    Compilers Lab Assignment 3 
    21CS10026 - Gorantla Thoyajakshi
    21CS30009 - Ashwin Prasanth 

    Test file for lexer of tinyC
*/

int main () { 
    int a,b,c,d;
    char s[] = "string123";
    char ch = 'c';
    float val = 12.34;

    for (i = 1; i < 100; i++) {
        if (i<10) {
            printf("i is less than 10\n");
        }
        else {
            printf("i is greater than 10\n");
        }
    }

    int arr[10];
    arr[0] = 1;
    arr[1] = 2;
    find_sum(arr);

    int l,b;
    printf("Enter the length and breadth of rectangle: \n");
    scanf("%d %d",&l,&b);
    printf("Area of rectangle is: %d",l*b);

    int a = 10;
    printf("Value of a is %d",a);

    int ar[] = {1,2,3,4,5};
    int i;
    int size = sizeof(ar)/sizeof(ar[0]);
    for (i = 0; i < size; i++) {
        printf("%d ",ar[i]);
    }

    

    return;
}