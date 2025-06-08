#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("=== INFO SISTEM TERMUX ===\n");

    // CPU info
    printf("\n-- CPU Info --\n");
    system("cat /proc/cpuinfo | grep 'model name' | head -1");

    // RAM info
    printf("\n-- RAM Info --\n");
    system("free -h");

    // Penyimpanan
    printf("\n-- Penyimpanan --\n");
    system("df -h /data");

    return 0;
}
