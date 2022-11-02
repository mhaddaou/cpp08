/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:16:18 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/11/02 19:43:04 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <iterator>


template <class Type >
class MutantStack: public std::stack<Type>
{
	public:
		MutantStack(): std::stack<Type>() {}
		MutantStack( const MutantStack & other ) : std::stack<Type>( other ) {}
		MutantStack & operator = ( const MutantStack & other )
		{
			if (this == &other )
				return (*this);
			this.c = other.c;
			return (*this);
		}
		typedef typename std::stack<Type>::iterator iterator;
		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
};


#endif