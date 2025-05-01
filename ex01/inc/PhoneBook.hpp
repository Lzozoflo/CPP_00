/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 13:59:40 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/01 10:03:12 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PhoneBook_HPP
# define PhoneBook_HPP

#include "Contact.hpp"


class PhoneBook {

	private:
	// {
		Contact	_tab[8];
		static	int		_IndexToWrite;
	// }
	public:
	// {
		PhoneBook( void );
		~PhoneBook( void );

		int		WhatContact( void );
		void	PutDataOfOneContact( int index );
		void	PutOneContact( int index );
		void	PutAllContact( void );
		bool	SetLastContact( void );
		int		FindCmd( void );
	// }
};


# endif
