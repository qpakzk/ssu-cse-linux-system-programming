#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(void) {
	int fd = open("ssu_test.txt", O_RDONLY);
	while(1);

	exit(0);
}
