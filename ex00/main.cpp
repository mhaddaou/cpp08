/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 01:42:20 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/11/01 02:06:44 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main (){
    try{
        std::vector<int> vec;

        vec.push_back(10);
        vec.push_back(20);
        vec.push_back(30);
        vec.push_back(42);
        vec.push_back(70);
        vec.push_back(19);
        easyfind(vec,42);
    }
    catch(std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    try{
        std::list<int> lst;
        lst.push_back(10);
        lst.push_back(20);
        lst.push_back(30);
        lst.push_back(42);
        lst.push_back(70);
        lst.push_back(19);
        easyfind(lst,19);
         
    }
    catch(std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    

    
}