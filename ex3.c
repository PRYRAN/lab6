#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void handler(int sig) {
   printf("sign %d\n", sig);
   exit(1);
}

int main() {
    signal(SIGINT, handler);

    while(1){
       printf("skip");
       sleep(1); 
    }

    return 0;
} 
