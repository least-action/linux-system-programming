#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <stdio.h>
#include <unistd.h>

#include <stdlib.h>

#include <errno.h>


int main() {
	int fd;
	const char * file_name = "./sample_lseek.txt";

	fd = open (file_name, O_RDONLY);

	// open
	if (fd == -1) {
		perror("open");
		printf("errno: %d\n", errno);
		exit(0);
	}
	else
		puts("open success");


	// lseek
	int pos;

	pos = lseek(fd, 0, SEEK_CUR);
	if (pos == (off_t) -1)
		puts("lseek error(get current pos)");
	else
		printf("current cursor: %d\n", pos);

	off_t ret;
	ret = lseek(fd, 0, SEEK_END);
	if (ret == (off_t) -1)
		puts("lseek error(move to end)");

	pos = lseek(fd, 0, SEEK_CUR);
	if (pos == (off_t) -1)
		puts("lseek error(get current pos)");
	else
		printf("current cursor: %d\n", pos);

	// close
	if (close(fd) == -1)
		perror("close");
	else
		puts("close success");

	return 0;
}
