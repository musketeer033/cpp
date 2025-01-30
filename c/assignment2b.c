#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void bubble_sort(int a[], int n)
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

    printf("\nSorted Array in Ascending Order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s <number1> <number2> ... <numberN>\n", argv[0]);
        return 1;
    }

    int i, n = argc - 1;
    int a[n];

    // Convert command line arguments to integers
    for (i = 0; i < n; i++)
    {
        a[i] = atoi(argv[i + 1]);
    }

    pid_t pid = fork(); // Create child process

    if (pid == 0)
    { // Child process
        printf("\nI am Child Process, my pid is %d\n", getpid());
        printf("I am Parent Process, my parent's pid is %d\n", getppid());

        // Prepare arguments for execve
        char *args[] = {"./sort_program", argv[1], argv[2], NULL};  // Example: ./sort_program 5 3 8 1 2
        execve("./sort_program", args, NULL); // Replace child process with new program

        // If execve fails
        perror("execve failed");
        exit(1);
    }
    else if (pid > 0)
    { // Parent process
        wait(NULL); // Wait for the child process to finish
        printf("\nI am Parent Process, my pid is %d\n", getpid());
        printf("I am Parent's Parent Process, my parent's pid is %d\n", getppid());

        // Sort array again in the parent process for demonstration
        bubble_sort(a, n); // Sorting in ascending order again
    }
    else
    {
        perror("Fork failed");
        return 1;
    }

    return 0;
}
