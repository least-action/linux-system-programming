#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <stdio.h>

#include <unistd.h>
#include <stdlib.h>

#include <errno.h>

int main() {
	int fd;
	const char * file_name = "sample_lseek.txt";

	// open
	fd = open(file_name, O_RDONLY);

	if (fd == -1) {
		perror("open");
		printf("errno: %d\n", errno);
		exit(0);
	}
	else
		puts("open success");


	// lseek
	int ret;

	ret = lseek (fd, (off_t) 1688, SEEK_END);
	if (ret == (off_t) -1)
		puts("lseek error");


	// close
	if (close(fd) == -1) {
		perror("close");
	}
	else
		puts("close success");

	return 0;
}
