/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 17:32:46 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/24 14:12:29 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#pragma once

class Dog:public Animal{
    private:
        Brain *brain;

    public:
        Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog() override;
        
        void        makeSound() const override;
        void        set_brain(int index, std::string idea);
        std::string getIdea(int index);
};
