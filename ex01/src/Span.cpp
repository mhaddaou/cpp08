/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 02:48:39 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/11/02 18:30:25 by mhaddaou         ###   ########.fr       */
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

const char*    Span::NoSpace::what() const throw(){
    return ("ERROR \n\t No space available");
}

const char* Span::outRange::what() const throw(){
    return ("ERROR \n\t this index is out of bounds");
}

int             Span::longestSpan()
{
        if (_vec.size() <= 1)
                throw Span::NoNumbers();
        return (*std::max_element(this->_vec.begin(), this->_vec.end())
                - *std::min_element(this->_vec.begin(), this->_vec.end()));
}
int Span::shortestSpan(){
    if (_vec.size() <= 1)
        throw Span::NoNumbers();
    std::vector<int> sort = _vec;
    std::sort(sort.begin(), sort.end());
    int ret = sort[1] -sort[0];
    for (size_t i = 1;  i < sort.size()- 1 ; i++){
        if (ret > sort[i + 1] - sort[i])
            ret = sort[i + 1] - sort[i];
    }
    return (ret);
}

const char * Span::NoNumbers::what() const throw(){
    return ("ERROR \n\t Span is empty");
}


// int Span::shortestSpan(){
//     return (*std::min(_vec.begin(), _vec.end()));
// }