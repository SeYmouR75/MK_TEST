#include <stdio.h>

#define APARTMENTS_ON_FLOOR 4

int main(){
    int amount_of_floors = 0, amount_of_entrances = 0, apartment_number = 0;

    printf("Enter amount of floors, entrances and apartment number");

    if(scanf("%d %d %d", &amount_of_floors, &amount_of_entrances, &apartment_number) != 3){
        printf("Incorrect data");
    }else{
        int amount_of_apartments = (amount_of_floors * APARTMENTS_ON_FLOOR) * amount_of_entrances;

        if(apartment_number <= amount_of_apartments && apartment_number > 0){
            int entrance = (apartment_number / (APARTMENTS_ON_FLOOR * amount_of_floors)) + (apartment_number % APARTMENTS_ON_FLOOR != 0);
            int floor = (apartment_number / APARTMENTS_ON_FLOOR) - (amount_of_floors * (entrance - 1)) + (apartment_number % (APARTMENTS_ON_FLOOR * amount_of_floors) != 0);

            printf("floor: %d entrance: %d\n", floor, entrance);
            
        }else
            printf("That apartment doesn't exist\n");
    }
}