#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
// #include <window.h> -> if you use window

int main()
{
    // Digital Clock

    time_t rawtime = 0; // time_t holds "Unix Epoch" 00:00:00 UTC on January 1st, 1970
    // Jan 1 1970 how many time have passed since this?

    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("***** DIGITAL CLOCK *****\n");

    while (isRunning)
    {
        time(&rawtime);
        // ld = long decimal
        pTime = localtime(&rawtime); // return a pointer to a time struct that contains the field

        // 02 = zero padding
        // \r for carriage return. Moving the cursor back to the beginning
        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec); // use arrow is fine.
        fflush(stdout);                                                           // force display immediately no need to wait for \n
        sleep(1);                                                                 // mac|Linux = sleep(seconds); / Window = Need a header & Sleep(milliseconds);
    }

    // I/O buffering of printf in C
    // normally C will stored the data in memory buffer before seeing \n or full-buffer
    // we use \r carriagereturn and no \n. so, it keep stored in the buffer and no display it
    // add "fflush(stdout);" after printf to force program display right away!

    return 0;
}