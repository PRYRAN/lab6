#include <stdio.h> 
#include <unistd.h> 
#define MSGSIZE 12



int main() { 
    char* str1 = "hello world"; 
    char str2[MSGSIZE]; 
    int p[2];  
    if (pipe(p) < 0) 
        return 0;  
    write(p[1], str1, MSGSIZE);  
    read(p[0], str2, MSGSIZE); 
    printf("%s\n", str2);
    printf("%s\n", str1);

    return 0;
} 
