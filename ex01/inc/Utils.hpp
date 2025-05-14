/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 13:59:40 by fcretin           #+#    #+#             */
/*   Updated: 2025/04/07 11:34:06 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef UTILS_HPP
# define UTILS_HPP

#include "PhoneBook.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"

#define YELLOW "\033[33m"

class Utils {
	private:
	// {
		Utils( void );
		~Utils( void );
	// }
	public:
	// {
		static	int			VReturn;
		static	bool		SafeGetLine(std::string& input, const std::string& prompt, const std::string& error);
	// }
};





# endif
