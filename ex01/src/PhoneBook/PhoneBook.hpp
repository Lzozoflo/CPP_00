/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 13:59:40 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/24 09:44:17 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PhoneBook_H
# define PhoneBook_H

#include <iostream>
#include "Contact/Contact.hpp"

/*
first_name (prénom),
last_name (nom de famille),
nickname (surnom),
phone_number (numéro de téléphone),
darkest_secret (son plus lourd secret).
*/

class PhoneBook {
private:

	Contact	_tab[8];

	static	int		_IndexToWrite;

public:

	PhoneBook( void );
	~PhoneBook( void );

	int		WhatContact( void );
	void	PutDataOfOneContact( int index );
	void	PutOneContact( int index );
	void	PutAllContact( void );
	bool	SetLastContact( void );
	int		FindCmd( void );


};


# endif
