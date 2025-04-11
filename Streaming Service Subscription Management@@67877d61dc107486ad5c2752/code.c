#include <stdio.h>
#include <string.h>

#define MAX 100

struct Subscription {
    char userName[100];
    char subscriptionType[20];
    float cost;
};

int main() {
    int N;
    scanf("%d", &N);

    struct Subscription subs[MAX];

    int basicCount = 0, standardCount = 0, premiumCount = 0;
    float basicRevenue = 0, standardRevenue = 0, premiumRevenue = 0;

    for (int i = 0; i < N; i++) {
        scanf("%s %s %f", subs[i].userName, subs[i].subscriptionType, &subs[i].cost);

        if (strcmp(subs[i].subscriptionType, "Basic") == 0) {
            basicCount++;
            basicRevenue += subs[i].cost;
        } else if (strcmp(subs[i].subscriptionType, "Standard") == 0) {
            standardCount++;
            standardRevenue += subs[i].cost;
        } else if (strcmp(subs[i].subscriptionType, "Premium") == 0) {
            premiumCount++;
            premiumRevenue += subs[i].cost;
        }
    }

    printf("Basic: %d Users, Revenue: %.2f; ", basicCount, basicRevenue);
    printf("Standard: %d Users, Revenue: %.2f; ", standardCount, standardRevenue);
    printf("Premium: %d Users, Revenue: %.2f\n", premiumCount, premiumRevenue);

    return 0;
}