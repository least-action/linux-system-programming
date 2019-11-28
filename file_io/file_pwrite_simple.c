#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <stdio.h>

#include <errno.h>

#include <stdlib.h>
#include <unistd.h>

int main() {
	int fd;
	const char * file_name = "sample_pwrite.txt";

	// open
	fd = open(file_name, O_RDONLY | O_WRONLY);
	if (fd == -1) {
		perror("open");
		printf("errno: %d\n", errno);
		exit(0);
	}
	else
		puts("open success");

	// pwrite
	const char str[14] = "pwrite test!!";
	off_t end;

	end = lseek(fd, 0, SEEK_END);
	printf("end: %ld\n", end);
	if (end == -1)
		perror("lseek");
	else
		pwrite(fd, str, 13, end/2);

	// close
	if (close(fd) == -1)
		perror("close");
	else
		puts("close success");

	return 0;
}
