#include <stdio.h>
#include <string.h>

#define MAX_VEHICLES 100
struct Vehicle {
    char vehicleNumber[20];
    char vehicleType[10];
    float tollAmount;
};

int main() {
    int n;
    struct Vehicle vehicles[MAX_VEHICLES];
    float carTotal = 0.0, truckTotal = 0.0, bikeTotal = 0.0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", vehicles[i].vehicleNumber, vehicles[i].vehicleType, &vehicles[i].tollAmount);
        if (strcmp(vehicles[i].vehicleType, "Car") == 0) {
            carTotal += vehicles[i].tollAmount;
        } else if (strcmp(vehicles[i].vehicleType, "Truck") == 0) {
            truckTotal += vehicles[i].tollAmount;
        } else if (strcmp(vehicles[i].vehicleType, "Bike") == 0) {
            bikeTotal += vehicles[i].tollAmount;
        }
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f\n", carTotal, truckTotal, bikeTotal);

    return 0;
}
