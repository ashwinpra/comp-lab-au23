/*
    Compilers Lab Assignment 4
    21CS10026 - Gorantla Thoyajakshi
    21CS30009 - Ashwin Prasanth 

    Test file for parser of tinyC
*/


inline unsigned func(volatile int n1, int* restrict n2, ...) {
    extern int a;
    static int b = 4;
    auto int c;
    register int d;
}


int main () { 
    int a,b,c,d;
    char s[] = "string123";
    char ch = 'c';
    float fl = 12.34;
    unsigned long n1 = -123;
    short n2 = ~16;
    float n3 = -2.3332;
    double n4 = 1.29e-7;
    _Bool n5 = !1;
    double _Imaginary n6;
    double _Complex n7;

    enum e1;
    enum e2 { A, B };
    enum { C = 0, D } e3;

    n1 *= n1;
    n1 /= n1, n1 %= n1;
    n1 <<= (n1 >>= n1);
    n1 ^= n1 &= n1;

    n1 = ( (n1==1 || n2==2) && n1!=n2 ) ? n1 = 0 : n2;

    do {
        n2++;
    } while(n2 < 0);


    a = a + b - c / d % c * a;
    a = b & c | (d ^ b);
    a = a>>2;
    a = a<<2;

    for (int i = 1; i < 100; i++) {
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

    // finding area of rectangle
    int l,b;
    printf("Enter the length and breadth of rectangle: \n");
    scanf("%d %d",&l,&b);
    printf("Area of rectangle is: %d",l*b);

    int num = 10;
    printf("Value of num is %d",num);

    // printing elements of array
    int ar[] = {1,2,3,4,5};
    int i;
    int size = sizeof(ar)/sizeof(ar[0]);
    for (i = 0; i < size; i++) {
        printf("%d ",ar[i]);
    }
    return 0;
}