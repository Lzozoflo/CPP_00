/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 13:59:40 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/07 11:34:06 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef Contact_HPP
# define Contact_HPP

#include <iostream>


class Contact {
	private:
	// {
		std::string _FirstName;
		std::string _LastName;
		std::string _NickName;
		std::string _PhoneNumber;
		std::string _DarkestSecret;
	// }
	public:
	// {
		Contact( void );
		~Contact( void );

		bool		SetNewContact( void );

		bool		SetFristName( void );
		bool		SetLastName( void );
		bool		SetNickName( void );
		bool		SetPhoneNumber( void );
		bool		SetDarkestSecret( void );


		static void	FormatAndPut(std::string str);
		void		PutContact( int index );
		void		PutDataContact( int index );
	// }
};





# endif
