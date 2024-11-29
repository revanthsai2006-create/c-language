#include <stdio.h>
int rows=5;
int colu=5;
void display(int seats[rows][colu]) {
    printf("  ");
    for (int i = 0; i < colu; i++) {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 0; i < rows; i++) {
        printf("%d ", i);
        for (int j = 0; j < colu; j++) {
            if (seats[i][j] == 0) {
                printf("0 "); // 
            } else {
                printf("B "); 
            }
        }
        printf("\n");
    }
}
void bookSingleSeat(int seats[rows][colu]) {
    int row, col;
    printf("Enter row number: ");
    scanf("%d", &row);
    printf("Enter column number: ");
    scanf("%d", &col);
    if (seats[row][col] == 0) {
        seats[row][col] = 1; 
        printf("your seats are booked\n");
    } else {
        printf("Seat already booked\n");
    }
}
void bookMultipleSeats(int seats[rows][colu]) {
    int numSeats;
    printf("Enter number of seats to book: ");
    scanf("%d", &numSeats);
    if (numSeats > 0) {
        int choice;
        printf("Do you want to book seats in a row or randomly? ");
        scanf("%d", &choice);
        if (choice == 1) {
            int row;
            printf("Enter row number: ");
            scanf("%d", &row);
            int column;
            printf("enter the column from which seats neet to be booked: ");
            scanf("%d", &column);
            for (int i = column; i < numSeats; i++) {
                if (seats[row][i] == 0) {
                    seats[row][i] = 1; 
                } else {
                    printf("Seat already booked\n");
                    break;
                }
            }
            printf("Seats are booked\n");
        } else if (choice == 2) {
            for (int i = 0; i < numSeats; i++) {
                int row, col;
                printf("Enter row number: ");
                scanf("%d", &row);
                printf("Enter column number: ");
                scanf("%d", &col);
                if (seats[row][col] == 0) {
                    seats[row][col] = 1;
                }                
                else {
                    printf("Seat already booked!\n");
                    break;
                }
            }
            printf("Seats booked successfully!\n");
        }
    }
}
int main() {
    int seats[rows][colu] = {};
    int choice;
    while (1) {
        printf("1. Display seats\n");
        printf("2. Book single seat\n");
        printf("3. Book multiple seats\n");
        printf("4. log out of the website\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                display(seats);
                break;
            case 2:
                bookSingleSeat(seats);
                break;
            case 3:
                bookMultipleSeats(seats);
                break;
            case 4:
                return 0;
        }
    }
}
