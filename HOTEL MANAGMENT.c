#include<stdio.h>

                //#include<stdio.h>: This header file is used for input/output operations in C. It includes functions like printf() for output, scanf() for input, and others. In this code, it's used for displaying messages to the user and taking user input.

#include<stdlib.h>

      //#include<stdlib.h>: This header file includes functions for various tasks such as dynamic memory management, random number generation, and others. In this code, it's used for the system() function which is used to execute system commands.

#include<string.h>

           //#include<string.h>: This header file includes functions for string manipulation. In this code, it's used for string comparison using the strcmp() function.

#include<math.h>

            //#include<math.h>: This header file includes mathematical functions. In this code, it's used for the pow() function which is used to calculate the tax.

#include<unistd.h>

           // #include<unistd.h>: This header file is used for various system-level operations. In this code, it's used for the sleep() function which is used to pause the execution of the program for a specified number of seconds.
// Function Prototypes

int Password();  /* Password(): Checks and validates user credentials. */

float bev_sending(); /*bev_sending(): Handles beverage ordering and calculates total cost.*/

float food_sending();  /*food_sending(): Handles food ordering and calculates total cost.*/
void displaybill(int room_number, float food_price, float bev_price, float cleaning_price);  /*displaybill(): Displays the bill for a room.*/
float staff_pay(float * waiter_pay, float * security_pay, float * maid_pay, float * cook_pay); //Function for Staff Pay
float utility_bills(float * total_price_water, float * total_price_electricity, float * total_price_gas);  //Function for Utility Bills
float Profit(float Total_staff_pay, float Total_utility_bills); //Function for Profit
float tax(float total_revenue); //Function for Tax

// Main Function
int main(void) {
// Variables Declared

    // Integer Variable's
    
  int choice, service_choice, handling_choice, management_choice, room_number, valid_input, book_days, count = 0;
  
    //Float Variable's
  
  float Total_staff_pay, Total_utility_bills, Total_profit;
  float waiter_pay = 0, security_pay = 0, maid_pay = 0, cook_pay = 0;
  float total_price_water = 0, total_price_electricity = 0, total_price_gas = 0;
  float food_price = 0, bev_price = 0, cleaning_price = 0, Totalprice = 0, room_price_perday = 20;
  char rooms[40];
  
      // Open the text file for reading and writing
      
    FILE *file = fopen("rooms.txt", "r+");

    // Check if the file was opened successfully
    if (file == NULL) {
        fprintf(stderr, "Error opening file\n");
        return 1; // Return an error code
    }

    // Read the status of rooms from the file into an array
    fread(rooms, sizeof(char), 40, file);

      // Close the file
    fclose(file);

  if (Password() == 0) {
    return 0;
  }
  sleep(2);
  system("clear"); // Clears the screen
  printf("\n\t\t\t\t\t▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓\n\t\t\t\t\t▓╫─▄▀────────────▄▀───────────▄▀─╫▓ \n\t\t\t\t\t▓╫─▀▄───────────▐█────────────▀▄─╫▓ \n\t\t\t\t\t▓╫─▄▌▄───────────▀▄───────────▄▌▄╫▓ \n\t\t\t\t\t▓▄▀░▓░▀▄──────────▌─────────▄▀░▓░▀▓ \n\t\t\t\t\t▓░░░░░░░▌──────▄▄▀▀▄▄──────▐▓░░░░░▓ \n\t\t\t\t\t▓▓░░░░░▓▀────▄▀░░▓▓░░▀▄────▀▄░░░░░▓ \n\t\t\t\t\t▓╫▓█▓█▓─────▐▓░░░░░░░░▓▌─────▓█▓█▓▓ \n\t\t\t\t\t▓╫▐░░░▌─────██▀▀▀▀▀▀▀▀██─────▐░░░╫▓ \n\t\t\t\t\t▓╫▐░█░▌───▄▄████████████▄▄───▐░█░╫▓ \n\t\t\t\t\t▓╫▐░░░▌───▐▓▓▓▌▐▒▓▓▒▌▐▓▓▓▌───▐░░░╫▓ \n\t\t\t\t\t▓╫▐░█░▌───▐▓▓▓▌▐▓▒▒▓▌▐▓▓▓▌───▐░█░╫▓ \n\t\t\t\t\t▓╫▐░░░▌▄▄▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█▄▐░░░╫▓ \n\t\t\t\t\t▓╫▐░█░███▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███░█░╫▓ \n\t\t\t\t\t▓╫▐░░░▌░█▒▒▒▒▒▒▒▒▒▓▒▒▒▒▒▒▒▓▒▒▐░█░╫▓ \n\t\t\t\t\t◙═════════════════════════════════◙\n");
sleep(2);

  system("clear"); // Clears the screen
  do { 
  
  //Outer Do-While
  
    do { 
    
    //Inner Do-While
    
      start: 
      food_price = 0;
      bev_price = 0;
      cleaning_price = 0;
      Totalprice = 0;
      
        	 printf("\n\n\n");
    printf("\n\t\t\t  ∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘\n");
  printf("\n\t\t\t        ○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○");
    printf("\n\t\t\t        ○                  WELCOME                  ○");
    printf("\n\t\t\t        ○                    TO                     ○");
    printf("\n\t\t\t        ○               HILTON HOTEL                ○");
    printf("\n\t\t\t        ○                MANAGEMENT                 ○");
    printf("\n\t\t\t        ○                  SYSTEM                   ○");
    printf("\n\t\t\t        ○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○◯○");
    printf("\n\t\t\t  ∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘∷∘\n");
      printf("\n\t\t\tPlease choose what kind of function you want to perform\n\t\t\t⓵ Customer Handling(Booking room)\n\t\t\t⓶ Customer service(sending beverages, sending food, cleaning service, Final Bill)\n\t\t\t⓷ HotelManagement(staffpay,utilitybill, taxes, Profit)\n\t\t\t⓸ End program\n\t\t(1-4): ");
      printf("\n\t\t\t");
      if (scanf("%d", & choice) != 1) {
        printf("\n\nInvalid input please enter values between 1 and 4\n");
      } else if (choice < 1 || choice > 4) {
        printf("\n\nInvalid input please enter values between 1 and 4\n");
        printf("▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔");
      }
    } while (getchar() != '\n');
    
    // Inner Do-While
    
  } 
  
      //Outer Do-While
  
  
  while (choice < 1 || choice > 4);   //Check for the Condition 
  if (choice == 1) {
  
    // Open the text file for reading and writing
    
    FILE *file = fopen("rooms.txt", "r+");

    // Check if the file was opened successfully
    
    if (file == NULL) {
        fprintf(stderr, "Error opening file\n");
        return 1; // Return an error code
    }

    // Read the status of rooms from the file into an array
    fread(rooms, sizeof(char), 40, file);

    // Display the current status of rooms
    printf("Current status of rooms:\n");
    int i=0;
while (i<40)
 {
        printf("Room %2d: %c \n", i + 1, rooms[i]);
        i++;
   }
    // Ask the user to enter a room number until a valid room is chosen
    int roomNumber;
    do {
        printf("\nEnter the room number you want to book/unbook (1-40): ");
        
        // Check if the input is a valid integer
        if (scanf("%d", &roomNumber) != 1 || roomNumber < 1 || roomNumber > 40) {
            printf("Error: Please enter a valid room number between 1 and 40.\n");
            // Clear the input buffer
            while (getchar() != '\n');
            continue;
        }

        // Use switch statements to check the status of the room
        switch (rooms[roomNumber - 1]) {
            case 'F':
                // Room is free, book it (set status to 'B') and break the loop
                rooms[roomNumber - 1] = 'B';
                break;
            case 'B':
                // Room is booked, ask the user if they want to unbook it
                char choice;
                printf("Room %d is currently booked. Do you want to unbook it? (Y/N): ", roomNumber);
                scanf(" %c", &choice);

                if (choice == 'Y' || choice == 'y') {
                    // Unbook the room (set status to 'F') and break the loop
                    rooms[roomNumber - 1] = 'F';
                } else {
                    // User chose not to unbook, continue the loop
                    continue;
                }
                break;
            default:
                // Invalid status, continue the loop
                continue;
        }

        // Break the loop if the room was successfully booked/unbooked
        break;

    } while (1);

    // Update the file with the new status of rooms
    fseek(file, 0, SEEK_SET);
    fwrite(rooms, sizeof(char), 40, file);

    // Close the file
    fclose(file);

    if (rooms[roomNumber - 1] == 'B') {
        printf("Room %d booked successfully!\n", roomNumber);
        do {
      printf("Please enter the days for which room is booked ");
      valid_input = scanf("%d", & book_days);

      // Clear the input buffer if invalid input
      if (valid_input != 1) {
        while (getchar() != '\n');
      }
    } while (valid_input != 1 || book_days < 1);
   printf("Total for %d days will be $%.2f",book_days,book_days*room_price_perday);
   printf("\n");
    } else {
        printf("Room %d unbooked successfully!\n", roomNumber);
    }
    sleep(2);
    system("clear"); 
    // Clears the screen
    
    //Go to the lable start
    
    goto start;
  } else if (choice == 2) {
  do{
    do {
      printf("\nPlease enter the room number of the customer(1-40): ");
      valid_input = scanf("%d", & room_number);

      // Clear the input buffer if invalid input
      
      if (valid_input != 1) {
        while (getchar() != '\n');
      }
    } while (valid_input != 1 || room_number < 1 || room_number > 40);
    if (rooms[room_number - 1] == 'F'){
    printf(" this room is free please choose a booked room");
    for(int i = 0;i<sizeof(rooms);i++){
    printf("\n%d. %c",i+1,rooms[i]);}
    }
    }while (rooms[room_number -1 ] == 'F');
    service_start:
      do {
        printf("Customer service menu\n1.Beverage sending\n2.Food sending\n3.Cleaning services\n4.Final bill\n(1-4): ");
        valid_input = scanf("%d", & service_choice);

        // Clear the input buffer if invalid input
        
        if (valid_input != 1) {
          while (getchar() != '\n');
        }
      } while (valid_input != 1 || service_choice < 1 || service_choice > 4);
    if (service_choice == 1) {
      bev_price += bev_sending();
      goto service_start;
    } else if (service_choice == 2) {
      food_price += food_sending();
      goto service_start;
    } else if (service_choice == 3) {
      cleaning_price = 20;
      if (count >= 1) {
        printf("\ncleaning services have already been added\n\n");
      }
      if (count == 0) {
        printf("\ncleaning services added for addition $20\n\n");
      }
      ++count;
      goto service_start;
    } else if (service_choice == 4) {
      displaybill(room_number, food_price, bev_price, cleaning_price);
      sleep(2);
      system("clear"); // Clears the screen
      
     //Jump to the lable Start 
      
      goto start;
    }
  } else if (choice == 3) {
    Total_staff_pay = staff_pay(& waiter_pay, & security_pay, & maid_pay, & cook_pay);
    Total_utility_bills = utility_bills(& total_price_water, & total_price_electricity, & total_price_gas);
    Total_profit = Profit(Total_staff_pay, Total_utility_bills);
    sleep(2);
    system("clear"); // Clears the screen
    goto start;
  } else if (choice == 4) {
    return 0;
  }
}
int Password() {
  // Define the correct username and password
  
  char correctUsername[] = "hiltonhotel";
  char correctPassword[] = "fast9876";

  // Variables to store user inputhcc
  char enteredUsername[50]; 
  
  // Assuming a maximum length of 50 characters
  
  char enteredPassword[50];

  // Maximum number of login attempts
  int maxAttempts = 3;
  int attempts = 0;
  int latat=3;

  while (attempts < maxAttempts) {
    // Prompt the user for input
    
   system("clear");
    
    printf("\n\n\n\t\t\tEnter username: \n\t\t\t\t");
    scanf("%s", enteredUsername);
    
   printf("▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔");

    printf("\n\t\t\tEnter password: \n\t\t\t\t");
    scanf("%s", enteredPassword);
    
   printf("▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔\n");

    // Compare entered credentials with correct credentials
    
    if (strcmp(enteredUsername, correctUsername) == 0 && strcmp(enteredPassword, correctPassword) == 0) {
      printf("Login successful!\n\n\n\t\t\tLOADING....\n");
       system("clear");
      return 1;
    } 
    else
    {
      printf("Invalid username or password. Please try again. Attempts left: %d\n", maxAttempts - attempts - 1);
      sleep(1);
      attempts++;
    }
  }

  if (attempts == maxAttempts) {
    printf("Too many incorrect attempts. Exiting...\n");
    return 0;
  }
}
float bev_sending() {
  int drink_number, drinks_amount, valid_input;
  float Total = 0, Coke = 5, Pepsi = 7, Sprite = 7, SevenUp = 3;
  char choice;
  do {
    do {
      printf("\n\n\t\t\t\tBeverage Menu\n\t\t\t\tAvailable Drinks:\n\n\t\t\t\t1. Coke(Price: $5) \n\n\t\t\t\t2. Pepsi (Price: $7) \n\n\t\t\t\t3. Sprite(Price: $7) \n\n\t\t\t\t4. 7UP (Price: $3)\n\t\t\tEnter the drink number customer wants to purchase (1-4): ");

      valid_input = scanf("%d", & drink_number);

      // Clear the input buffer if invalid input
      if (valid_input != 1) {
        while (getchar() != '\n');
      }
    } while (valid_input != 1 || drink_number < 1 || drink_number > 4);
    do {
      printf("\nEnter the quantity you want to buy: ");
      valid_input = scanf("%d", & drinks_amount);

      // Clear the input buffer if invalid input
      if (valid_input != 1) {
        while (getchar() != '\n');
      }
    } while (valid_input != 1 || drinks_amount < 0); //Check Conditon
    if (drink_number == 1) {
      Total += drinks_amount * Coke;
    } else if (drink_number == 2) {
      Total += drinks_amount * Pepsi;
    } else if (drink_number == 3) {
      Total += drinks_amount * Sprite;
    } else if (drink_number == 4) {
      Total += drinks_amount * SevenUp;
    }
    printf("To order another drink Press Y or y\nTo go to previous page press N or n: ");
    scanf(" %c", & choice);
    do {
      if (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') //Check Conditon
      {
        printf("Please enter valid choice Y or Y and n or N");
        scanf(" %c", & choice);
      }
    } while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n');
  } while (choice == 'Y' || choice == 'y');
  return Total;
}

float food_sending() {
  int food_number, food_amount, valid_input;
  float Total = 0, DeepDish = 12.75, AlfredoPasta = 8.99, ChickenTikka = 9.99, BeefPulao = 15.25;
  char choice = 0;
  do {
    do {
      Total = 0;
      valid_input = 0;
      food_number = 0;
      food_amount = 0;
      printf("\n\n\n\t\t\tFood Menu\n\n\t\t\tAvailable Dishes:\n\n\t\t\t1. DeepDish Pizza 14inches(Price: $12.75) \n\n\t\t\t2. Chicken Alfredo Pasta (Price: $8.99) \n\n\t\t\t3. Chicken Tikka(Price: $9.99) \n\n\t\t\t4. Beef Pulao (Price: $15.25)\n\n\t\t\tEnter the food number customer wants to purchase (1-4): ");
      valid_input = scanf("%d", & food_number);

      // Clear the input buffer if invalid input
      if (valid_input != 1) {
        while (getchar() != '\n');
      }
    } while (valid_input != 1 || food_number < 1 || food_number > 4);
    if (food_number > 4 && food_number < 1) {
      printf("Invalid input please choose between (1-4)");
    }
    while (food_number > 4 && food_number < 1);
    do {
      printf("\nEnter the quantity you want to buy: ");
      valid_input = scanf("%d", & food_amount);

      // Clear the input buffer if invalid input
      if (valid_input != 1) {
        while (getchar() != '\n');
      }
    } while (valid_input != 1 || food_amount < 0);
    if (food_number == 1) {
      Total += food_amount * DeepDish;
    } else if (food_number == 2) {
      Total += food_amount * AlfredoPasta;
    } else if (food_number == 3) {
      Total += food_amount * ChickenTikka;
    } else if (food_number == 4) {
      Total += food_number * BeefPulao;
    }
    printf("To order another food item Press Y or y\nTo go to previous page press N or n: ");
    scanf(" %c", & choice);
    do {
      if (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
        printf("Please enter valid choice Y or Y and n or N");
        scanf(" %c", & choice);
      }
    } while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n');
  } while (choice == 'Y' || choice == 'y');
  return Total;
}
void displaybill(int room_number, float food_price, float bev_price, float cleaning_price) {
  float total, tax;
  printf("\nRoom = %d\n", room_number);
  if (food_price > 0) {
    printf("Food price = $%.2f\n", food_price);
  }
  if (bev_price > 0) {
    printf("Beverage price = $%.2f\n", bev_price);
  }
  if (cleaning_price > 0) {
    printf("Cleaning price = $%.2f\n", cleaning_price);
  }
  total = food_price + bev_price + cleaning_price;
  tax = total * 0.15;
  printf("15 percent G.S.T = $%.2f\n", tax);
  total += tax;
  printf("Total = $%.2f\n", total);
  food_price = 0;
  bev_price = 0;
  cleaning_price = 0;
  total = 0;
}
float staff_pay(float * waiter_pay, float * security_pay, float * maid_pay, float * cook_pay) {
  float valid_input, waiter_hourly_pay = 10, security_hourly_pay = 12, maid_hourly_pay = 8, cook_hourly_pay = 11, hours_worked, total_staff_pay;
  do {
    printf("\nEnter how many hours waiter has worked at $%.2f an hour: ", waiter_hourly_pay);
    valid_input = scanf("%f", & hours_worked);

    // Clear the input buffer if invalid input
    if (valid_input != 1) {
      while (getchar() != '\n');
    }
  } while (valid_input != 1 || hours_worked < 0);
  * waiter_pay = waiter_hourly_pay * hours_worked;
  do {
    printf("\nEnter how many hours security has worked at $%.2f an hour: ", security_hourly_pay);
    valid_input = scanf("%f", & hours_worked);

    // Clear the input buffer if invalid input
    if (valid_input != 1) {
      while (getchar() != '\n');
    }
  } while (valid_input != 1 || hours_worked < 0);
  * security_pay = security_hourly_pay * hours_worked;
  do {
    printf("\nEnter how many hours maid has worked at $%.2f an hour: ", maid_hourly_pay);
    valid_input = scanf("%f", & hours_worked);

    // Clear the input buffer if invalid input
    if (valid_input != 1) {
      while (getchar() != '\n');
    }
  } while (valid_input != 1 || hours_worked < 0);
  * maid_pay = maid_hourly_pay * hours_worked;
  do {
    printf("\nEnter how many hours cook has worked at $%.2f an hour: ", cook_hourly_pay);
    valid_input = scanf("%f", & hours_worked);

    // Clear the input buffer if invalid input
    if (valid_input != 1) {
      while (getchar() != '\n');
    }
  } while (valid_input != 1 || hours_worked < 0);
  * cook_pay = cook_hourly_pay * hours_worked;
  printf("\nWaiter pay = %.2f\nSecurity pay = %.2f\nMaid pay = %.2f\nCook pay = %.2f\n", * waiter_pay, * security_pay, * maid_pay, * cook_pay);
  total_staff_pay = * waiter_pay + * security_pay + * maid_pay + * cook_pay;
  return total_staff_pay;
}
float utility_bills(float * total_price_water, float * total_price_electricity, float * total_price_gas) {
  float price_water_perliter = 0.50, price_electricity_perwatt = 0.25, price_gas_perliter = 1.50, used_amount, total_utilities_cost = 0;
  int valid_input;
  do {
    printf("\nPlease enter the amount of water used in Liters at $%.2f per liter: ", price_water_perliter);
    valid_input = scanf("%f", & used_amount);

    // Clear the input buffer if invalid input
    if (valid_input != 1) {
      while (getchar() != '\n');
    }
  } while (valid_input != 1 || used_amount < 0);
  * total_price_water = price_water_perliter * used_amount;
  do {
    printf("\nPlease enter the amount of electricity used in Watts at $%.2f per watt: ", price_electricity_perwatt);
    valid_input = scanf("%f", & used_amount);

    // Clear the input buffer if invalid input
    if (valid_input != 1) {
      while (getchar() != '\n');
    }
  } while (valid_input != 1 || used_amount < 0);
  * total_price_electricity = price_electricity_perwatt * used_amount;
  do {
    printf("\nPlease enter the amount of gas used in liters at $%.2f: ", price_gas_perliter);
    valid_input = scanf("%f", & used_amount);

    // Clear the input buffer if invalid input
    if (valid_input != 1) {
      while (getchar() != '\n');
    }
  } while (valid_input != 1 || used_amount < 0);
  * total_price_gas = price_gas_perliter * used_amount;
  total_utilities_cost = * total_price_water + * total_price_electricity + * total_price_gas;
  printf("\nWater cost = %.2f\nElectricity cost = %.2f\nGas cost = %.2f\nTotal utilities cost = %.2f\n", * total_price_water, * total_price_electricity, * total_price_gas, total_utilities_cost);
  return total_utilities_cost;
}
float Profit(float Total_staff_pay, float Total_utility_bills) {
  float room_revenue, food_revenue, drinks_revenue, maid_service_revenue, total_revenue, total_profit;
  int valid_input;
  do {
    printf("\nPlease enter the amount of revenue generated by rooms this month: ");
    valid_input = scanf("%f", & room_revenue);

    // Clear the input buffer if invalid input
    if (valid_input != 1) {
      while (getchar() != '\n');
    }
  } while (valid_input != 1 || room_revenue < 0);
  do {
    printf("\nPlease enter the amount of revenue generated by food this month: ");
    valid_input = scanf("%f", & food_revenue);

    // Clear the input buffer if invalid input
    if (valid_input != 1) {
      while (getchar() != '\n');
    }
  } while (valid_input != 1 || food_revenue < 0);
  do {
    printf("\nPlease enter the amount of revenue generated by drinks this month: ");
    valid_input = scanf("%f", & drinks_revenue);

    // Clear the input buffer if invalid input
    if (valid_input != 1) {
      while (getchar() != '\n');
    }
  } while (valid_input != 1 || drinks_revenue < 0);
  do {
    printf("\nPlease enter the amount of revenue generated by maid services this month: ");
    valid_input = scanf("%f", & maid_service_revenue);

    // Clear the input buffer if invalid input
    if (valid_input != 1) {
      while (getchar() != '\n');
    }
  } while (valid_input != 1 || maid_service_revenue < 0);
  total_revenue = room_revenue + food_revenue + drinks_revenue + maid_service_revenue;
  total_profit = total_revenue - (Total_staff_pay + Total_utility_bills);
  if (total_profit >= 0) {    /* If the total profit is positive, it subtracts a tax from the total profit and prints the tax and the final profit.*/
    total_profit -= tax(total_revenue);
    printf("\n15percent tax of = $%.2f\nAfter taxes total profit = $%.2f\n", tax(total_revenue), total_profit);
  } else {
    printf("\ntotal loss = $%.2f\n", total_profit);
  }
}
float tax(float total_revenue) {
  return pow((total_revenue * 0.15), 0.85); //Total Revenue Calculator
}
