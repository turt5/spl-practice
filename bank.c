#include <stdio.h>

#define MAX_CLIENTS 100

int main() {
    float balances[MAX_CLIENTS];
    int n, i, valid_count = 0;

    // Input the number of clients
    printf("Enter the number of clients: ");
    scanf("%d", &n);

    // Input the balances of each client
    printf("Enter the balances of each client:\n");
    for (i = 0; i < n; i++) {
        printf("Client %d balance: ", i + 1);
        scanf("%f", &balances[i]);
        if (balances[i] >= 500.00) {
            valid_count++;
        }
    }

    // Displaying valid balances
    printf("\nValid balances:\n");
    for (i = 0; i < n; i++) {
        if (balances[i] >= 500.00) {
            printf("Client %d balance: %.2f\n", i + 1, balances[i]);
        }
    }

    return 0;
}
