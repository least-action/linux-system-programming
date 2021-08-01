#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <stdio.h>
#include <unistd.h>

int main()
{
	// open
	int fd;
	const char * file_name = "./sample_read.txt";

	fd = open (file_name, O_RDONLY);

	if (fd == -1)
		puts("open error");
	else
		puts("open success");


	// read
	unsigned long word;
	ssize_t nr;

	nr = read (fd, &word, sizeof (unsigned long));
	if (nr == -1)
		puts("read error");
	else
		printf("%lu\n", word);
		

	// close
	if (close(fd) == -1)
		perror ("close");

	return 0;
}
