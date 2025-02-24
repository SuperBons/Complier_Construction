# Complier_Construction


this code has been running with the command
    - javac *.java 
        - to compile the code
    java Scanner ./all_tests/{file wanting to run}

from this, the program will ouptut with the extension gen with cse141 added to identifiers 

the out for foo.c in my program is 

#include <stdio.h>
#define read(x) scanf("%d\n", &x)
#define write(x) printf("%d\n", x)
// function foo
void cse141foo() {
    int cse141a;
    read(cse141a);
    write(cse141a);
}

int main() {
    cse141foo();
}

Proving correct according to the document provided. All other test have been executed and checked. With only 2 giving errors, being parse2.c and errorstring.c which both should not run. 