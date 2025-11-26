// ovenTime returns the amount in minutes that the lasagna should stay in the
// oven.
int ovenTime() {
    const int OVEN_TIME = 40;
    return OVEN_TIME;
}

/* remainingOvenTime returns the remaining
   minutes based on the actual minutes already in the oven.
*/
int remainingOvenTime(int actualMinutesInOven) {
    return ovenTime() - actualMinutesInOven;
}

/* preparationTime returns an estimate of the preparation time based on the
   number of layers and the necessary time per layer.
*/
int preparationTime(int numberOfLayers) {
    const int TIME_PER_LAYER = 2; // minutes
    return numberOfLayers * TIME_PER_LAYER;
}

// elapsedTime calculates the total time spent to create and bake the lasagna so
// far.
int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
    return preparationTime(numberOfLayers) + actualMinutesInOven;
}
