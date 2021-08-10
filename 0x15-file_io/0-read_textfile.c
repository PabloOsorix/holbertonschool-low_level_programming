git #include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
/**
 *This function reads a text file and prints it to the POXIS standard output.
 *@filename: This is the file that i'm going to cp.
 *@letters: This is the size of the filename.
 *Return:
 */
ssize_t read_textfile(const char *filename, size_t letters)

{
	int buff[4000];
	int fd, fd1, fd2;

	if(filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY, S_IRUSR);

	if(fd == -1)
	{
		return (0);
	}

	fd1 = read(fd, buff, letters);

	if (fd1 == -1)
	{
		return (0);
	}
	fd2= write (fd, buff, letters);

	if (fd2 == -1)
	{
		return (0);
	}
	close (fd);

	return(fd1);
}
