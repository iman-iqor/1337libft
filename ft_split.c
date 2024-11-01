/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imiqor <imiqor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:54:40 by imiqor            #+#    #+#             */
/*   Updated: 2024/10/31 23:58:38 by imiqor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int ft_isit(char* s,char c)
{
    int i;
    i = 0;
    int frequence ;
    frequence = 0;
    while(s[i])
    {
        if(s[i] == c)
            frequence += 1;
        i++;
    }
        return frequence;
}
char ** ft_generatestrings(char* s)
{
    int i;
    i = 0;
    int j ;
    j = 0;
    if(ft_isit(s))
    {
        
    }
}


// char **ft_split(char const *s, char c)
// {
    
// }

int main()
{
    char imaniqor[] = "iman;iqor";
    char c[] = ";";
    printf("%d",ft_isit(imaniqor,c[0]));
}