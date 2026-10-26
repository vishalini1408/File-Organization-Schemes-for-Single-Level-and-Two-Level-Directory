#include <stdio.h>

int main(void) {
    int users = 4;
    int files_per_user = 250;
    int total_files = users * files_per_user;
    int two_level_comparisons = users + files_per_user;

    printf("Experiment 15: File Organization Schemes\n\n");

    printf("Single-Level Directory\n");
    printf("Esports teams: %d\n", users);
    printf("Total files: %d\n", total_files);
    printf("Worst case: %d comparisons\n\n", total_files);

    printf("Two-Level Directory\n");
    printf("Esports teams: %d\n", users);
    printf("Files per team: %d\n", files_per_user);
    printf("Worst case: %d comparisons\n", two_level_comparisons);

    return 0;
}
