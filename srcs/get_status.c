/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_status.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 11:12:35 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/12/24 11:12:58 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	get_status(t_philo *philo, int *status)
{
	pthread_mutex_lock(philo->lock);
	*status = philo->status;
	pthread_mutex_unlock(philo->lock);
}
