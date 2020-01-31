/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:17:39 by avenonat          #+#    #+#             */
/*   Updated: 2020/01/31 13:46:16 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	check_order(t_folder **stack_a, t_num *ssl)
{
	int			i;
	t_folder	*t;

	i = 0;
	t = (*stack_a);
	if (ssl->count_b)
		i = 1;
	while (t && t->next)
	{
		if (t->next)
			if (t->data > t->next->data)
				i = 1;
		t = t->next;
	}
	if (i)
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
}

int		compare_command2(t_folder **stack_a, t_folder **stack_b,
		char *line, int i)
{
	if (i == 2 && line[0] == 'r' && line[1] == 'b')
		rb(stack_b, 0);
	else if (i == 2 && line[0] == 'r' && line[1] == 'r')
		rr(stack_a, stack_b, 0);
	else if (i == 3 && line[0] == 'r' && line[1] == 'r' && line[2] == 'a')
		rra(stack_a, 0);
	else if (i == 3 && line[0] == 'r' && line[1] == 'r' && line[2] == 'b')
		rrb(stack_b, 0);
	else if (i == 3 && line[0] == 'r' && line[1] == 'r' && line[2] == 'r')
		rrr(stack_a, stack_b, 0);
	else
		return (1);
	return (0);
}

int		compare_command(t_folder **stack_a, t_folder **stack_b,
		char *line, t_num *ssl)
{
	int i;

	i = ft_strlen(line);
	if (i == 2 && line[0] == 's' && line[1] == 'a')
		sa(stack_a, 0);
	else if (i == 2 && line[0] == 's' && line[1] == 'b')
		sb(stack_b, 0);
	else if (i == 2 && line[0] == 's' && line[1] == 's')
		ss(stack_a, stack_b, 0);
	else if (i == 2 && line[0] == 'p' && line[1] == 'a')
		pa(stack_a, stack_b, ssl, 0);
	else if (i == 2 && line[0] == 'p' && line[1] == 'b')
		pb(stack_a, stack_b, ssl, 0);
	else if (i == 2 && line[0] == 'r' && line[1] == 'a')
		ra(stack_a, 0);
	else if (compare_command2(stack_a, stack_b, line, i))
		return (1);
	return (0);
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
