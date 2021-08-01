#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>
#include <stdio.h>

#include <errno.h>


int main()
{
	// open
	int fd;
	const char * file_name = "./sample_read.txt";

	fd = open (file_name, O_RDONLY);
	if (fd == -1)
		perror("open");
	else
		puts("open success");


	// read
	ssize_t ret;
	unsigned int len = 100;
	char result[100];
	char * buf = result;

	while (len != 0 && (ret = read (fd, buf, len)) != 0) {
		if (ret == -1) {
			if (errno == EINTR)
				continue;
			perror("read");
			break;
		}

		len -= ret;
		buf += ret;
	}

	printf("%s\n", result);


	// close
	if (close(fd) == -1)
		perror("close");

	return 0;
}
