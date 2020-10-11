#include <fcntl.h>
#include <stdio.h>

int main(void) {
    printf("S_IRWXU: %3d\n", S_IRWXU);
    printf("S_IRUSR: %3d\n", S_IRUSR);
    printf("S_IWUSR: %3d\n", S_IWUSR);
    printf("S_IXUSR: %3d\n", S_IXUSR);
    printf("S_IRWXG: %3d\n", S_IRWXG);
    printf("S_IRGRP: %3d\n", S_IRGRP);
    printf("S_IWGRP: %3d\n", S_IWGRP);
    printf("S_IXGRP: %3d\n", S_IXGRP);
    printf("S_IRWXO: %3d\n", S_IRWXO);
    printf("S_IROTH: %3d\n", S_IROTH);
    printf("S_IWOTH: %3d\n", S_IWOTH);
    printf("S_IXOTH: %3d\n", S_IXOTH);
}
