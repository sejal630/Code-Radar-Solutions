#include <stdio.h>
#include <string.h>

#define MAX 100

struct MovieTicket {
    char movieName[100];
    char ticketType[20];
    float price;
};

int main() {
    int N;
    scanf("%d", &N);

    struct MovieTicket tickets[MAX];

    float standardRevenue = 0, premiumRevenue = 0, vipRevenue = 0;

    for (int i = 0; i < N; i++) {
        scanf("%s %s %f", tickets[i].movieName, tickets[i].ticketType, &tickets[i].price);

        if (strcmp(tickets[i].ticketType, "Standard") == 0) {
            standardRevenue += tickets[i].price;
        } else if (strcmp(tickets[i].ticketType, "Premium") == 0) {
            premiumRevenue += tickets[i].price;
        } else if (strcmp(tickets[i].ticketType, "VIP") == 0) {
            vipRevenue += tickets[i].price;
        }
    }

    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f\n", standardRevenue, premiumRevenue, vipRevenue);

    return 0;
}