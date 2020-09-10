#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int		find_c(char *str);
char	*ft_strdup(char *src);
int		get_next_line(int fd, char **line);
char	*ft_strchr(const char *s, int c);

/*
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
*/

int		main(int	argc, char **argv)
{
	int		fd;
	int		ret;
	int		line;
	char	*buf;
	//char	*str;
	
	line = 0;
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while ((ret = get_next_line(fd, &buf)) >= 0)
		{
			printf("[RETURN %d] Line#%d: %s\n" ,ret, ++line, buf);
		}
		if (ft_strchr(buf, '0'))
			printf("helloloo");
			//printf("[BUF]%s",ft_strchr(buf, '\0'));
		printf("[RETURN %d] Line#%d: %s\n" ,ret, ++line, buf);
	}
	return (0);
}
