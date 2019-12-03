#include <sys/time.h>
#include <sys/select.h>
#include <unistd.h>

int main () {
	struct timeval tv;

	tv.tv_sec = 0;
	tv.tv_usec = 500;

	select (0, NULL, NULL, NULL, &tv);

	return 0;
}
