#include "get_next_line.h"

int main(int argc, char const *argv[])
{
	char *t;
	int fd = open("text.txt",O_RDWR);
	t = get_next_line(fd);
	
	printf("a :%s\n",t);


	return 0;
}