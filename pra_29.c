#include <stdio.h>
#include <string.h>


struct Coach
{
    char name[50];
    int age;
    int experience;
};

struct Team
{
    char teamName[50];
    char sportType[50];
    struct Coach coach;
};

int main()
{
    struct Team teams[50];
    int n = 0;
    int choice;
    char searchName[50];

    do
    {
        printf("\n===== CHARUSAT SPORTS TEAM MANAGEMENT =====\n");
        printf("1. Add New Team\n");
        printf("2. Search Team by Name\n");
        printf("3. Display All Teams\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice)
        {
        case 1:
            printf("\n--- Add New Team ---\n");
            printf("Enter Team Name: ");
            fflush(stdin);
            gets(teams[n].teamName);


            printf("Enter Sport Type: ");
            fflush(stdin);
            gets(teams[n].sportType);


            printf("Enter Coach Name: ");
            fflush(stdin);
            gets(teams[n].coach.name);


            printf("Enter Coach Age: ");
            scanf("%d", &teams[n].coach.age);

            printf("Enter Coach Experience (in years): ");
            scanf("%d", &teams[n].coach.experience);

            n++;
            printf("\n Team added successfully!\n");
            break;

        case 2:
            printf("\n--- Search Team ---\n");
            printf("Enter Team Name to search: ");
            fflush(stdin);
            gets(teams[n].teamName);


            int found = 0;
            for (int i = 0; i < n; i++)
            {
                if (strcmp(teams[i].teamName, searchName) == 0)
                {
                    printf("\nTeam Found!\n");
                    printf("Team Name: %s\n", teams[i].teamName);
                    printf("Sport Type: %s\n", teams[i].sportType);
                    printf("Coach Name: %s\n", teams[i].coach.name);
                    printf("Coach Age: %d\n", teams[i].coach.age);
                    printf("Experience: %d years\n", teams[i].coach.experience);
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("\n Team not found!\n");
            break;

        case 3:
            printf("\n--- All Teams ---\n");
            if (n == 0)
            {
                printf("No teams available.\n");
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    printf("\nTeam #%d\n", i + 1);
                    printf("Team Name: %s\n", teams[i].teamName);
                    printf("Sport Type: %s\n", teams[i].sportType);
                    printf("Coach Name: %s\n", teams[i].coach.name);
                    printf("Coach Age: %d\n", teams[i].coach.age);
                    printf("Experience: %d years\n", teams[i].coach.experience);
                }
            }
            break;

        case 4:
            printf("\nExiting the program. Goodbye!\n");
            break;

        default:
            printf("\n Invalid choice! Try again.\n");
        }

    }
    while (choice != 4);

    return 0;
}
