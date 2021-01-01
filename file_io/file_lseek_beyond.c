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
    printf("pos: %d\n", ret);

    // read
	unsigned long word;
	ssize_t nr;

	nr = read (fd, &word, sizeof (unsigned long));
	if (nr == -1)
		puts("read error");
	else
		printf("%lu\n", word);
	

	// close
	if (close(fd) == -1) {
		perror("close");
	}
	else
		puts("close success");

	return 0;
}
