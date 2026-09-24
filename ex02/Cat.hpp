/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 16:31:22 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/24 14:12:54 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#pragma once

class Cat:public Animal{
    private:
        Brain *brain;

    public:
        Cat();
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        ~Cat() override;
        
        void        makeSound() const override;
        void        set_brain(int index, std::string idea);
        std::string getIdea(int index);
};
