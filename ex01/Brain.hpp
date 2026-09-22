/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:14:01 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/22 15:34:54 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Brain{
    private:
        std::string ideas[100];
    
    public:
        Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        ~Brain();
        
        void set_idea(int index);
};
