#include <iostream>
using namespace std;

void swaped(char *x, char *y) {

    char temp = *x;
    *x = *y;
    *y = temp;
}

void permuted(char *a, int k, int n) {

   
    if(k==n) {
        cout << a << "\n" ;

    }else {
        for (int i = k; i<=n; ++i) {
            swaped((a+k), (a+i));
            permuted(a, k+1, n);
            swaped((a+k), (a+i));
        }
    }
}

int main() {

    char a[] = "ABCDE";
    
    int size = (sizeof(a)/sizeof(a[0]))-2;
    
    permuted(a, 0, size);

    return 0;
}