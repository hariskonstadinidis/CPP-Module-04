/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:14:01 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/24 14:07:18 by hkonstan         ###   ########.fr       */
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
        
        void set_idea(int index, std::string idea);
        std::string getIdea(int index);
};
