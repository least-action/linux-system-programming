#include <fcntl.h>
#include <stdio.h>

int main(void) {
    printf("O_SYNC:         %7d\n", O_SYNC);
    printf("O_CLOEXEC:      %7d\n", O_CLOEXEC);
    //printf("O_DIRECT:       %7d\n", O_DIRECT);
    //printf("O_LARGEFILE:    %7d\n", O_LARGEFILE);
    //printf("O_NOATIME+:     %7d\n", O_NOATIME+);  // only in linux kernel 2.6.8+
    printf("O_NOFOLLOW:     %7d\n", O_NOFOLLOW);
    printf("O_DIRECTORY:    %7d\n", O_DIRECTORY);
    printf("O_ASYNC:        %7d\n", O_ASYNC);
    printf("O_NONBLOCK:     %7d\n", O_NONBLOCK);
    printf("O_APPEND:       %7d\n", O_APPEND);
    printf("O_TRUNC:        %7d\n", O_TRUNC);
    printf("O_NOCTTY:       %7d\n", O_NOCTTY);
    printf("O_EXCL:         %7d\n", O_EXCL);
    printf("O_CREAT:        %7d\n", O_CREAT);
}
