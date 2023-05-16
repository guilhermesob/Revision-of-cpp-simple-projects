#include <iostream>
#include "version.h"
#include "main.h"

//OCSALY
std::string app_name = "Port Scanner";

int inc(int i){
    static int value;
    value +=1; // increment by one
    return value;
}

int main() {

    printf("INCREMENT %d", inc(5));
    printf("INCREMENT %d", inc(9));
    printf("INCREMENT %d", inc(19));
    printf("INCREMENT %d", inc(999));
    return 0;
}

void print_version(){
    printf("Version = %d", ::version);
}

void usage(){
    std::cout << app_name << " ";
    print_version();
}



// :: = Scope Resolution Operator
// extern = EXTERNAL LINKAGE