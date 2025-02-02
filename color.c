#include <stdio.h>

int main() {
    // Print red text
    printf("\033[1;31mThis is red text.\033[0m\n");

    // Print green text
    printf("\033[1;32mThis is green text.\033[0m\n");

    // Print yellow text
    printf("\033[1;33mThis is yellow text.\033[0m\n");

    // Print blue text
    printf("\033[1;34mThis is blue text.\033[0m\n");

    // Print magenta text
    printf("\033[1;35mThis is magenta text.\033[0m\n");

    // Print cyan text
    printf("\033[1;36mThis is cyan text.\033[0m\n");

    // Print white text on a red background
    printf("\033[1;37;41mThis is white text on a red background.\033[0m\n");

    return 0;
}
