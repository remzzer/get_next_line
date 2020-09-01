#include "get_next_line.h"
#include <stdio.h>

//int		find_c(char *str);
//int		is_store_empty(char *store);
char	*ft_strdup(const char *src);
//int		get_next_line(int fd, char **line);


int		main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char *line[64];
	char *temp;

	*line = "yolo_josuke";
	temp = ft_strdup(*line + 3);
	//printf("%d |find_c\n",find_c("bonjour"));
	//printf("%d |is_store_empty\n",is_store_empty("yolo"));
	printf("%s |dup\n", temp);

	return(0);
}


