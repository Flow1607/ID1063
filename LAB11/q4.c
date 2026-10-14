#include <stdio.h>

struct City {
    char name[50];
    char country[50];
    char population[50];  // Stored directly as text
    double latitude;
    double longitude;
};

int main(void) {
    struct City c;

    printf("Enter city name: ");
    scanf(" %49[^\n]", c.name);

    printf("Enter country name: ");
    scanf(" %49[^\n]", c.country);

    printf("Enter population: ");
    scanf(" %49[^\n]", c.population);

    printf("Enter latitude: ");
    scanf("%lf", &c.latitude);

    printf("Enter longitude: ");
    scanf("%lf", &c.longitude);

    // Displaying the stored values
    printf("\n--- City Details ---\n");
    printf("City Name   : %s\n", c.name);
    printf("Country     : %s\n", c.country);
    printf("Population  : %s\n", c.population);
    printf("Latitude    : %.4f\n", c.latitude);
    printf("Longitude   : %.4f\n", c.longitude);

    return 0;
}

