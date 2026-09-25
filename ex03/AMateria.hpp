/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 19:01:57 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/24 20:21:04 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ICharacter.hpp"

class AMateria{
	protected:
		std::string const type;
	public:
		AMateria(std::string const &type);
		
		std::string const &getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};