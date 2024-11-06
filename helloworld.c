#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displayRandomMadaraThought() {
    // Array of Madara Uchiha's quotes or thoughts
    char *madaraThoughts[] = {
        "When a man learns to love, he must bear the risk of hatred.",
        "The world is a cruel place, but also very beautiful.",
        "Power is not will, it is the phenomenon of physically making things happen.",
        "The concept of hope is nothing more than giving up. A word that holds no true meaning.",
        "For it is not the world that has failed you, it is you who have failed the world.",
        "This is the reality of the world... those who are left behind are forgotten.",
        "The strong rule the weak, and the weak are doomed to live under the rule of the strong.",
        "You don't know pain until you've experienced loss.",
        "The weak have no rights to speak of peace.",
        "The moment people come to know love, they run the risk of feeling hate."
    };

    // Get the total number of Madara's quotes
    int numThoughts = sizeof(madaraThoughts) / sizeof(madaraThoughts[0]);

    // Generate a random index
    srand(time(NULL)); // Seed the random number generator with the current time
    int randomIndex = rand() % numThoughts;

    // Display the randomly selected Madara thought
    printf("\nRandom Thought: \n%s\n", madaraThoughts[randomIndex]);
}

int main() {
    // Display a random Madara thought when the program runs
    displayRandomMadaraThought();

    return 0;
}

