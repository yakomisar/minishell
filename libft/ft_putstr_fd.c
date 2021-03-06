/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudge <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 22:18:36 by mrudge            #+#    #+#             */
/*   Updated: 2021/11/16 22:18:36 by mrudge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Created by Mickey Rudge on 5/3/21.
//

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
