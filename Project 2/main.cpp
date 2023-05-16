#include <iostream>


int inc(int i){
    static int value;
    value += i;
    return value;
}
int main() {

    printf("INCREMENT %d\n", inc(5));
    printf("INCREMENT %d\n", inc(9));
    printf("INCREMENT %d\n", inc(19));
    printf("INCREMENT %d\n", inc(999));
    return 0;

}