#include <stdio.h>
int main() {
   printf("Welcome to aninit!\n");
   printf("Start running commands from config...\n");
   printf("[*] Init bash...\n");
   init();
   return 0;
}
int init() {
    system("bash");
    return 0;
}
