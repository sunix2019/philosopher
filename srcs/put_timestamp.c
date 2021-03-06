/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_timestamp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 10:32:21 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/12/28 08:54:17 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static void	set_msg(int status, char **msg)
{
	if (status == THINK)
		*msg = "is thinking";
	else if (status == EAT)
		*msg = "is eating";
	else if (status == SLEEP)
		*msg = "is sleeping";
	else if (status == TAKEN_LEFT || status == TAKEN_RIGHT)
		*msg = "has taken a fork";
	else if (status == DIE)
		*msg = "died";
}

void	put_timestamp(int id, int status)
{
	char	*msg;
	long	now;

	msg = NULL;
	set_msg(status, &msg);
	now = get_time();
	printf("%ld %d %s\n", now, id + 1, msg);
}
