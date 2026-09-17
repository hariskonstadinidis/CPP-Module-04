/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 16:31:20 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/17 19:46:18 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//Orthodox canonical format functions
Cat::Cat():Animal(){
    std::cout << "Cat default constructor called\n";
    this->type = "Cat";
}

Cat::Cat(const Cat& other):Animal(other){
    std::cout << "Cat copy constructor called\n";
    *this = other;
}

Cat& Cat::operator=(const Cat& other){
    std::cout << "Cat assignment operator called\n";
    if (this != &other)
        this->type = other.type;
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat Destructor called\n";
}

//Action functions
void Cat::makeSound() const{
    std::cout << "Meow\n";
}