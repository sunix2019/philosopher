/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutex_destroy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 10:21:41 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/12/28 19:38:00 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	mutex_destroy(t_mtx **mutex, int num)
{
	int		i;

	i = 0;
	while (i < num)
	{
		pthread_mutex_destroy(&(*mutex)[i]);
		i++;
	}
	free(*mutex);
}
