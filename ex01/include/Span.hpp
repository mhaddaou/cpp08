/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 02:15:16 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/11/01 03:11:32 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <string.h>

class Span{
    private:
        unsigned int _N;
        std::vector<int> _vec;        
    public:
        Span();
        Span(unsigned int N);
        Span (const Span& other);
        Span& operator=(const Span& other);
        ~Span();
        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
        int getNumber(int index) ;
        class NoSpace : public std::exception{
            public:
                virtual const char* what() const throw();
        };
        class outRange : public std::exception{
            public:
                virtual const char* what() const throw();
        };
};

#endif