/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon <jihyjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:50:23 by jihyjeon          #+#    #+#             */
/*   Updated: 2023/10/11 13:50:26 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c >= 101 && c <= 132)
		return (c);
	if (c >= 141 && c <= 172)
		return (c);
	return (0);
}
