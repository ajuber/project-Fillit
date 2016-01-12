/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajubert <ajubert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/13 13:39:02 by ajubert           #+#    #+#             */
/*   Updated: 2015/12/10 17:27:23 by mdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	float r;

	r = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (r * r <= nb)
	{
		if (r * r == nb)
			return ((int)r);
		r++;
	}
	return ((int)r);
}
