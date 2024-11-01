/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imiqor <imiqor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:17:24 by imiqor            #+#    #+#             */
/*   Updated: 2024/10/31 15:32:45 by imiqor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t i;

	if (!s1 && s2)
		return (ft_strdup(s2));
	else if (s1 && !s2)
		return (ft_strdup(s1));
	else if (!s1 && !s2)
		return (NULL);

	i = ft_strlen(s1);
	i += ft_strlen(s2);
	char *str;
	str = malloc(i + 1);

	if (!str)
		return (NULL);
	ft_bzero(str, i + 1);
	ft_memmove(str, s1, ft_strlen(s1));
	ft_memmove(str + (ft_strlen(s1)), s2, ft_strlen(s2));
	return (str);
}
int main(int argc, char const *argv[])
{
    char iman[] = "iman";
    char iqor[] = "iqor";
    printf("%s",ft_strjoin("\0kvmno\0", ""));
    return 0;
}
