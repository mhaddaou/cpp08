/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 01:41:23 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/11/01 02:04:14 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
class NotFound : public std::exception{
    public:
         virtual const char* what() const throw(){
         return ("this number is not found");
         };
};

template <typename T>
void easyfind(T container, int Find){
    if (std::find(container.begin(), container.end(), Find) != container.end())
        std::cout << Find << " the number is here" << std::endl;
    else
        throw NotFound(); 
};



#endif