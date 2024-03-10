#include <stdio.h>

int main(int argc, char *argv[]) {
    // Loop through all the arguments provided
    for (int i = 1; i < argc; i++) {
        // Check if the first character of the argument is '-'
        if (argv[i][0] == '-') {
            // Print the argument
            printf("%s\n", argv[i]);
        }
    }
    return 0;
}
