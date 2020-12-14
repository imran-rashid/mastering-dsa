// https://stackoverflow.com/questions/37225244/error-assignment-to-expression-with-array-type-error-when-i-assign-a-struct-f

#include <stdio.h>
#include <string.h>

struct student {
    int id; // 4 bytes occupied
    char name[10]; // 10*1 == 10 bytes occupied
    char department[20]; // 20 bytes occupied
    char address[10]; // 10*1==10 bytes occupied
};

int main(){
    struct student s;
    s.id = 5;
    // s.name = "Paulo" Error(direct assignment in array not possible)
    strcpy(s.name, "Rena");
    strcpy(s.department, "foreign-language");
    strcpy(s.address, "Baku");

    printf("Address is %s\n", s.address);
}