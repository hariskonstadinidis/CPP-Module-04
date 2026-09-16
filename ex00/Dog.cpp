/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 17:32:02 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/16 17:38:29 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//Orthodox canonical format functions
Dog::Dog():Animal(){
    std::cout << "Dog default constructor called\n";
    this->type = "Dog";
}

Dog::Dog(const Dog& other):Animal(other){
    std::cout << "Dog copy constructor called\n";
    *this = other;
}

Dog& Dog::operator=(const Dog& other){
    std::cout << "Dog assignment operator called\n";
    if (this != &other)
        this->type = other.type;
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog default constructor called\n";
}

//Action functions
void Dog::makeSound(){
    std::cout << "Woof\n";
}