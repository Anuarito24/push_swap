/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:17:39 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/17 19:26:32 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

t_folder	*read_number(char **argv, t_num *ssl)
{
	int i;
	char **new;
	t_folder *stack_a;


	ssl->count_a = 0;
	stack_a = NULL;
	i = 1;
	while (argv[i])
	{
		new = ft_strsplit(argv[i], ' ');
		if (check_str(new))
			return (NULL);
		ssl->count_a += push_swap(new, &stack_a);
		if (ssl->count_a < 0)
			return (NULL);
		i++;
	}
	return (stack_a);
}

int		compare_command(t_folder **stack_a, t_folder **stack_b, char *line, t_num *ssl)
{
	*stack_b = NULL;
	ssl->count_a = 0;
	int i = ft_strlen(line);
	if (i == 2 && line[0] == 's' && line[1] == 'a')
		sa(stack_a);
	else if (ft_strcmp(line, "sb"))
		sb(stack_b);
	else if (!ft_strcmp(line, "ss\n"))
		ss(stack_a, stack_b);
	else if (!ft_strcmp(line, "pa"))
		pa(stack_a, stack_b, ssl);
	else if (!ft_strcmp(line, "pb"))
		pb(stack_a, stack_b, ssl);
	else if (!ft_strcmp(line, "ra"))
		ra(stack_a);
	else if (!ft_strcmp(line, "rb"))
		rb(stack_b);
	else if (!ft_strcmp(line, "rr"))
		rr(stack_a, stack_b);
	else if (!ft_strcmp(line, "rra"))
		rra(stack_a);
	else if (!ft_strcmp(line, "rrb"))
		rrb(stack_b);
	else if (!ft_strcmp(line, "rrr"))
		rrr(stack_a, stack_b);
	else
		return (1);
	return(0);
}
int		ft_new_line(char **s, char **line, int fd, int text)
{
	char	*temp;
	int		len;

	len = 0;
	while (s[fd][len] != '\n' && s[fd][len] != '\0')
		len++;
	if (s[fd][len] == '\n')
	{
		*line = ft_strsub(s[fd], 0, len);
		temp = ft_strdup(s[fd] + len + 1);
		free(s[fd]);
		s[fd] = temp;
		if (s[fd][0] == '\0')
			ft_strdel(&s[fd]);
	}
	else if (s[fd][len] == '\0')
	{
		if (text == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(s[fd]);
		ft_strdel(&s[fd]);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*s[255];
	char		buffer[BUFF_SIZE + 1];
	char		*temp;
	int			text;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((text = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[text] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strnew(1);
		temp = ft_strjoin(s[fd], buffer);
		free(s[fd]);
		s[fd] = temp;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	if (text < 0)
		return (-1);
	else if (text == 0 && (s[fd] == NULL || s[fd][0] == '\0'))
		return (0);
	return (ft_new_line(s, line, fd, text));
}

int		main(int argc, char **argv)
{
	int		i;
	char	*line;
	t_folder *stack_a;
	t_folder *stack_b;
	t_num ssl;
	
	i = 0;
	stack_b = NULL;
	if (argc != 1)
		stack_a = read_number(argv, &ssl);
	if	(!(stack_b = malloc(sizeof(t_folder))))
		return (0);
	while (get_next_line(0, &line) == 1)
	{
		if (compare_command(&stack_a, &stack_b, line, &ssl))
		{
			write(1, "Error\n", 6);
			return (-1);
		}
		if (line)
			free(line);
	}
	while (stack_a && stack_a->next)
	{
		if (stack_a->data > stack_a->next->data)
		{
			write(1, "KO\n", 3);
			return (0);
		}
		stack_a = stack_a->next;
	}
	write(1, "OK\n", 3);
	return (0);
}
