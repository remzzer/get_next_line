#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		r_read;
	char	*line;
	(void)argc;
	
	fd = open(argv[1], O_RDONLY);
	while ((r_read = get_next_line(fd, &line)) > 0)
	{
		printf("%d |%s\n", r_read, line);
		free(line);
	}
	if (r_read == -1)
		line = NULL;
	//printf("%d |%s\n", r_read, line);
	//if (line)
		//free(line);
	close(fd);
	return (0);
}
