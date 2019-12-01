#include <unistd.h>
#include <sys/types.h>

#include <stdio.h>

int main() {
	const char * file_name = "sample_truncate.txt";
	int ret;

	ret = truncate(file_name, 45);
	if (ret == -1) {
		perror ("truncate");
		return -1;
	}

	return 0;
}
