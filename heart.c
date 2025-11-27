#include <stdio.h>
#include <unistd.h> // for usleep
#include <stdlib.h>

void clearScreen() {
    printf("\033[H\033[J"); // ANSI escape code to clear terminal
}

void frame1() {
    printf("  O        O  \n");
    printf(" /|\\      /|\\ \n");
    printf(" / \\      / \\ \n");
    printf("Ready!\n");
}

void frame2() {
    printf("  O        O  \n");
    printf(" /|\\      /|\\ \n");
    printf(" / \\       |  \n");
    printf("Move closer!\n");
}

void frame3() {
    printf("  O        O  \n");
    printf(" /|\\      /|\\ \n");
    printf("  |        |  \n");
    printf("Punch!\n");
}

void frame4() {
    printf("  O        O  \n");
    printf(" /|\\      /|\\ \n");
    printf(" / \\      / \\ \n");
    printf("Kick!\n");
}

void frame5() {
    printf("  O        O  \n");
    printf(" /|\\      /|\\ \n");
    printf("  |        |  \n");
    printf("Block!\n");
}

void frame6() {
    printf("   O       O   \n");
    printf("  /|\\    /|\\ \n");
    printf("  / \\    / \\ \n");
    printf("Fight continues!\n");
}

int main() {
    while(1) {
        clearScreen();
        frame1();
        usleep(300000);

        clearScreen();
        frame2();
        usleep(300000);

        clearScreen();
        frame3();
        usleep(300000);

        clearScreen();
        frame4();
        usleep(300000);

        clearScreen();
        frame5();
        usleep(300000);

        clearScreen();
        frame6();
        usleep(300000);
    }
    return 0;
}
