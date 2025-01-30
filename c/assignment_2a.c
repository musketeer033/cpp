#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

void bubble_acs(int a[], int n)
{
    int i, j, temp;
    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void bubble_dcs(int a[], int n)
{
    int i, j, temp;
    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int pid, i, n, a[50], j;

    printf("\nEnter the number of numbers to be sorted: ");
    scanf("%d", &n);

    printf("\nEnter list of numbers:\n");
    for (j = 0; j < n; j++)
    {
        scanf("%d", &a[j]);
    }

    pid = fork(); // Create child process

    if (pid == 0)
    { // Child process
        printf("\nI am Child Process, my pid is %d\n", getpid());
        printf("I am Parent Process, my parent's pid is %d\n", getppid());

        bubble_acs(a, n); // Sort array in ascending order
        printf("\nList of Numbers in Ascending Order:\n");
        for (j = 0; j < n; j++)
        {
            printf("%d\n", a[j]);
        }

        /* Simulate Orphan State */
        sleep(5);
        printf("\nAfter becoming orphan, adopted by init (PID 1):\n");
        system("ps -el | grep init");
    }
    else
    { // Parent process
        /* Simulate Zombie State */
        system("ps -el | grep Z"); // Show zombie processes
        i = wait(0);               // Wait for child process to finish
        printf("\nPID of the terminated child process is %d\n", i);
        printf("I am Parent Process, my pid is %d\n", getpid());
        printf("I am Parent's Parent Process, my pid is %d\n", getppid());

        bubble_dcs(a, n); // Sort array in descending order
        printf("\nList of Numbers in Descending Order:\n");
        for (j = 0; j < n; j++)
        {
            printf("%d\n", a[j]);
        }
    }

    return 0;
}