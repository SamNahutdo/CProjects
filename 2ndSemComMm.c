#include <stdio.h>






float acceptDistance() {
    float distance_km;

    printf("\n\n\t\t\t\t\t                                **********************************");
    printf("\n\t\t\t\t\t                                **   Welcome to Sam System!    ***");
    printf("\n\t\t\t\t\t                                **********************************");
    printf("\n\n\t\t\t\t\t                              Enter distance in kilometers: ");
    scanf("%f", &distance_km);
    return distance_km;
}






float computeMiles(float distance_km) {
    return distance_km * 0.621371;
}







float computeMeters(float distance_km) {
    return distance_km * 1000;
}







void displayDistance(float distance_km, float distance_miles, float distance_meters) {
    printf("\n\n\t\t\t\t\t                                Distance in kilometers:   %.2f km\n", distance_km);
    printf("\n\n\t\t\t\t\t                                Distance in miles:        %.2f miles\n", distance_miles);
    printf("\n\n\t\t\t\t\t                                Distance in meters:       %.2f m\n", distance_meters);
}







int main() {
    float distance_km = acceptDistance();
    float distance_miles = computeMiles(distance_km);
    float distance_meters = computeMeters(distance_km);

    displayDistance(distance_km, distance_miles, distance_meters);

    return 0;
}