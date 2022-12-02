/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:54:52 by vmustone          #+#    #+#             */
/*   Updated: 2022/12/01 16:25:27 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "get_next_line_bonus.h"


int main()
{
    int		i;
    char	*file;
    int		fd;
	
	i = 0;
	fd = open("gnlTester/files/multiple_nlx5", O_RDONLY);
	while ((file = get_next_line(fd)) != 0)
	{
		printf("%s", file);
		i++;
	}
return (0);
}

/* bonus
int main()
{
	char	*file;
	int		fd;
	int		fd1;
	int		fd2;
	
	fd = open("gnlTester/files/41_no_nl", O_RDONLY); 
	fd1 = open("gnlTester/files/41_with_nl", O_RDONLY); 
	fd2 = open("gnlTester/files/empty", O_RDONLY);
	file = get_next_line(fd);
	printf("%s", file);
	free(file);
	file = get_next_line(fd1);
	printf("%s", file);
	free(file);
	file = get_next_line(fd2);
	printf("%s", file);
	free(file);
	file = get_next_line(fd);
	printf("%s", file);
	free(file);
	file = get_next_line(fd1);
	printf("%s", file);
	free(file);
	file = get_next_line(fd2);
	printf("%s", file);
	free(file);
	close(fd);
	close(fd1);
	close(fd2);
	return (0);
}*/

 				

 				

 				
