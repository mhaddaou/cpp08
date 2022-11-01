/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 02:48:39 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/11/01 03:12:28 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span(){}

Span::Span(unsigned int N):_N(N){}

Span::Span(const Span& other){
        *this = other;
}

Span& Span::operator=(const Span& other){
    if (this == &other) 
        return *this;
    _N = other._N;
    _vec = other._vec;
    return (*this);
}

Span::~Span(){}

void Span::addNumber(int number){
    try
    {
        if (_vec.size() == _N)
            throw Span::NoSpace(); 
        _vec.push_back(number);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int Span::getNumber(int index){
    try{
        if (index < 0 && index > _vec.size())
            throw Span::outRange();
    }
    catch(std::exception& e){
        std::cerr << e.what() << std::endl;
    }
}

const char* Span::NoSpace::what() const throw(){
    return ("ERROR \n\t this index is out of bounds");
}

const char* Span::NoSpace::what() const throw(){
    return ("ERROR \n\t No space available");
}