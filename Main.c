//Hotel Room Management System By:
//Sam Nahutdo "Programmer"
//Rie Fortuna  
//kirt cruz

//Features?

//1. Availability
//Display Availability

//2. Book a room
//Choose a room either Expensive or Cheap
//Choose a available room
//Invalid Selection
//Room booked
//Room Unavailable

//3. Show Customer Details
//Enter room number to see details
//Invalid Selection
//Display Customer Details
//Room is not booked yet

//4. Cancellation
//Enter room Number to cancel
//Invalid Selection
//Room cancelled Succesfully
//Room is not found

//5. Restaurant Service
//Choose option 1-3 or 0 to return
//Your order is proceed to your room
//Returning to main
//Invalid Selection

//6. Thank you for visiting KiSaRie Hotel!, Come again.

//If more than 6. Invalid Selection








#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct room {
char fname[30];
char lname[30];
char nat[15];
int day, cnt;
char from[60];
char to[30];
int prc;
} room[20] = {0};

void clearInputBuffer() {
	while (getchar() != '\n');
}

int main() {
	int a, z, d, za = 9, zb = 11;
	while (1) {
		printf("\n\n\n\n");
		printf("\t\t\t\t       >>     <<   >>      >> << >>           << >>         >> << >>      >> << >>\n");
        printf("\t\t\t\t       <<    >>    <<    <<                  >>   <<        <<       <<   <<\n");
        printf("\t\t\t\t       >>   <<     >>    >>                 <<     >>       >>       >>   >>\n");
		printf("\t\t\t\t       << >>       <<     << >> <<         >> << >> <<      <<       <<   <<\n");
		printf("\t\t\t\t       >>   <<     >>             >>      <<         >>     >> << >>      >> << >>\n");
		printf("\t\t\t\t       <<    >>    <<             <<     >>           <<    <<       <<   <<\n");
		printf("\t\t\t\t       >>     <<   >>             >>    <<             >>   >>       >>   >>\n");
        printf("\t\t\t\t       <<      >>  <<     << >> <<     >>               <<  <<       <<   << >> <<\n");
        printf("\t\t\t\t                                                                                  \n");
        printf("\t\t\t\t                                Hotel Room Management\n");
        printf("");
		printf("\n\n\t\t\t\t        --------------------------------------------------------\n");
		printf("\t\t\t\t       | Choose a category                                      |\n");
		printf("\t\t\t\t       |                                                        |\n");
		printf("\t\t\t\t       | 1. Get availability                                    |\n");
		printf("\t\t\t\t       | 2. Book a room                                         |\n");
		printf("\t\t\t\t       | 3. Show Customer Details                               |\n");
		printf("\t\t\t\t       | 4. Cancellation                                        |\n");
		printf("\t\t\t\t       | 5. Restaurant Services                                 |\n");
		printf("\t\t\t\t       | 6. Exit                                                |\n");
		printf("\t\t\t\t        --------------------------------------------------------\n");
		printf("\n\t\t\t\t\t          Enter the category you want to select: ");
		scanf("%d", &a);
		getchar();

		switch (a) {
		case 1:
			
			printf("\n\n\t\t\t\tRoom Availability:\n");
			printf("\t\t\t\t\t       Room No\t          Room Type              Charges\n");
			printf("\n\t\t\t\t\t       1  \t          Expensive              3,000      \n", za);
			printf("\t\t\t\t\t       2  \t          Expensive              3,000      \n", za);
			printf("\t\t\t\t\t       3  \t          Expensive              3,000      \n", za);
			printf("\t\t\t\t\t       4  \t          Expensive              3,000      \n", za);
			printf("\t\t\t\t\t       5  \t          Expensive              3,000      \n", za);
			printf("\t\t\t\t\t       6  \t          Expensive              3,000      \n", za);
			printf("\t\t\t\t\t       7  \t          Expensive              3,000      \n", za);
			printf("\t\t\t\t\t       8  \t          Expensive              3,000      \n", za);
			printf("\t\t\t\t\t       9  \t          Expensive              3,000      \n", za);
			printf("\t\t\t\t\t       10 \t          Cheap                  3,000      \n", zb);
			printf("\t\t\t\t\t       11 \t          Cheap                  1,500      \n", zb);
			printf("\t\t\t\t\t       12 \t          Cheap                  1,500      \n", zb);
			printf("\t\t\t\t\t       13 \t          Cheap                  1,500      \n", zb);
			printf("\t\t\t\t\t       14 \t          Cheap                  1,500      \n", zb);
			printf("\t\t\t\t\t       15 \t          Cheap                  1,500      \n", zb);
			printf("\t\t\t\t\t       16 \t          Cheap                  1,500      \n", zb);
			printf("\t\t\t\t\t       17 \t          Cheap                  1,500      \n", zb);
			printf("\t\t\t\t\t       18 \t          Cheap                  1,500      \n", zb);
			printf("\t\t\t\t\t       19 \t          Cheap                  1,500      \n", zb);
			printf("\t\t\t\t\t       20 \t          Cheap                  1,500      \n", zb);
			break;

		case 2:
			
			printf("\n\t\t\t\t               Choose a room type\n");
			printf("\t\t\t\t\t       1. Expensive\n");
			printf("\t\t\t\t\t       2. Cheap\n");
            printf("\n\t\t\t\t               Enter the room type:    \n");
			scanf("%d", &d);
			getchar();

			if (d == 1 && za > 0) {
				printf("\n\t\t\t\t\t       Enter Room No 1-10:    ");
				scanf("%d", &z);
				getchar();
				if (z < 1 || z > 10 || room[z - 1].cnt == 1) {
					printf("\t\t\t\t\t       Sorry... Room is Already Booked!\n");
					break;
				}
				za--;
				room[z - 1].cnt = 1;
				room[z - 1].prc = 3000;

			} else if (d == 2 && zb > 0) {
				printf("\n\t\t\t\t\t       Enter Room No 11-20:    ");
				scanf("%d", &z);
				getchar();
				if (z < 11 || z > 20 || room[z - 1].cnt == 1) {
					printf("\t\t\t\t\t       Sorry... The room is already Booked!\n");
					break;
				}
				zb--;
				room[z - 1].cnt = 1;
				room[z - 1].prc = 1500;

			} else {
				printf("\t\t\t\t\t       Sorry.... No rooms available.\n");
				break;
			}

			printf("\t\t\t\t\t       Enter First Name:   ");
			fgets(room[z - 1].fname, sizeof(room[z - 1].fname), stdin);
			strtok(room[z - 1].fname, "\n");
            printf("\t\t\t\t\t       Enter Last Name:   ");
			fgets(room[z - 1].lname, sizeof(room[z - 1].lname), stdin);
			strtok(room[z - 1].lname, "\n");
			printf("\t\t\t\t\t       Enter Nationality:   ");
			fgets(room[z - 1].nat, sizeof(room[z - 1].nat), stdin);
			strtok(room[z - 1].nat, "\n");
			printf("\t\t\t\t\t       How many days will you stay? ");
			scanf("%d", &room[z - 1].day);
			getchar();
            printf("\n\t\t\t\t\t       You should type like this; DD/MM/YYYY\n");
			printf("\t\t\t\t\t       Date From:   ");
			fgets(room[z - 1].from, sizeof(room[z - 1].from), stdin);
			strtok(room[z - 1].from, "\n");
			printf("\t\t\t\t\t       Date To:   ");
			fgets(room[z - 1].to, sizeof(room[z - 1].to), stdin);
			strtok(room[z - 1].to, "\n");

			room[z - 1].prc *= room[z - 1].day;
			printf("\t\t\t\t\t       Room Booked Successfully!\n");
			break;

		case 3:
			printf("\n\t\t\t\t\t       Enter Room No 1-20 to view details:    ");
			scanf("%d", &z);
			getchar();

			if (z < 1 || z > 20 || room[z - 1].cnt == 0) {
				printf("\t\t\t\t\t       Sorry... The room is not Booked.\n");
			} else {
			    printf("\n\n\t\t\t\t\t       ---------------------------");
				printf("\n\t\t\t\t\t       Name:            %s", room[z - 1].fname);
                printf("\n\t\t\t\t\t       Name:            %s", room[z - 1].lname);
				printf("\n\t\t\t\t\t       Nationality:     %s", room[z - 1].nat);
				printf("\n\t\t\t\t\t       Stay Duration:   %d days", room[z - 1].day);
				printf("\n\t\t\t\t\t       From:            %s", room[z - 1].from);
				printf("\n\t\t\t\t\t       To:              %s", room[z - 1].to);
				printf("\n\t\t\t\t\t       Total Price:     Php %d\n", room[z - 1].prc);
				printf("\t\t\t\t\t       ---------------------------");
			}
			break;

		case 4:
			printf("\n\t\t\t\t\t       Enter the room number to cancel:   ");
			scanf("%d", &z);
			getchar();

			if (z < 1 || z > 20 || room[z - 1].cnt == 0) {
				printf("\t\t\t\t\t       Sorry... Unvailable room.\n");
			} else {
				if (z <= 9) za++;
				else zb++;

				room[z - 1].cnt = 0;
				printf("\t\t\t\t\t       Room No %d has been successfully canceled.\n", z);
			}
			break;

		case 5:
			printf("\n\t\t\t\t\t       >>Restaurant Services<<\n");
			printf("\t\t\t\t\t       1. Breakfast - Php20\n");
			printf("\t\t\t\t\t       2. Lunch     - Php40\n");
			printf("\t\t\t\t\t       3. Dinner    - Php50\n");
			printf("\t\t\t\t\t       Select an option 1 -3 or 0 to return:    ");
			scanf("%d", &d);
			getchar();

			if (d > 0 && d < 4) {
				printf("\t\t\t\t\t       Thank you! Your order is being proceed to your room!.\n");
			} else if (d == 0) {
				printf("\t\t\t\t\t       Returning to main menu...\n");
			} else {
				printf("\t\t\t\t\t       Invalid selection.\n");
			}
			break;

		case 6:
			printf("\t\t\t\t\t       Thank you for visiting KiSaRie Hotel!, Come again.\n");
			exit(0);

		default:
			printf("\t\t\t\t\t       Sorry... Invalid selection, try again.\n");
		}
	
	}

	return 0;
}