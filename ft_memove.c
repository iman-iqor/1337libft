/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imiqor <imiqor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:14:29 by imiqor            #+#    #+#             */
/*   Updated: 2024/10/30 22:36:32 by imiqor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"


void * ft_memmove(void *dst, const void *src, size_t len)
{
     unsigned char* destination;
     unsigned char* source;
     destination = (unsigned char*) dst;
     source = (unsigned char*) src;

    if(destination < source)
    {
        ft_memcpy(destination,source,len);
    }
    else
    {
        while(len > 0)   // hadi emlnaha bhal hayda makatwsalchi l zero hit deja eadna dik len kadecremonta flwl alors tqdar tkoun l condition baqa valide u fach tdkholn ghadi decremanta
        {
            len--;
            destination[len] = source[len];
        }
    }
    
    return dst;

}

// int main()
// {
//     char iman[] = "imaniqor";
//     printf("%s",ft_memcpy(iman+4, iman, 4));
// }





// series of bytes(byte string)
//The value of i is decreased by 1 before it is used in the expression.
//In C, --i (pre-decrement) and i-- (post-decrement)