/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loculy <loculy@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:22:50 by loculy            #+#    #+#             */
/*   Updated: 2022/09/06 17:25:19 by loculy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_conv_atoi(char *str, int i, char *base, int size)
{
	int	a;
	int	b;
	int	res;

	a = 0;
	b = 0;
	res = 0;
	while (str[b + i])
	{
		a = 0;
		while (base[a] && base[a] != str[b + i])
			a++;
		res = res * size + a;
		b++;
	}
	return (res);
}

int	ft_checkstart_atoibase(char *str, int i, char *base, int size)
{
	int		neg;
	char	c;
	int		res;

	neg = 0;
	c = str[i];
	while (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		c = str[i++];
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			if (neg == 0)
				neg = 1;
			else
				neg = 0;
		}
		i++;
	}
	res = ft_conv_atoi(str, i, base, size);
	if (neg == 1)
		res = -res;
	return (res);
}

int	ft_base_check(char *base)
{
	int	i;
	int	hash[129];
	int	w;

	i = 0;
	while (base[i])
	{
		w = base[i];
		if (hash[w] != 1 && base[i] != '+' && base[i] != '-' && base[i] > 0)
			hash[w] = 1;
		else
			return (0);
		i++;
	}
	i = 0;
	while (base[i])
		i++;
	if (i <= 1)
		return (0);
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	size;
	int	i;

	i = 0;
	size = ft_base_good(base);
	if (size != 0)
		return (ft_checkstart_atoibase(str, i, base, size));
	else
		return (0);
}
