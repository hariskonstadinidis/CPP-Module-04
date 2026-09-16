/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 15:53:00 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/16 17:41:40 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Orthodox Canonical Format Functions
Animal::Animal(): type("Unicorn"){
    std::cout << "Animal Defaut Constructor called\n";
}

Animal::Animal(const Animal& other){
    std::cout << "Animal Copy Constructor called\n";
    *this = other;
}

Animal& Animal::operator=(const Animal& other){
    std::cout << "Animal Copy operator called\n";
    if (this != &other)
        this->type = other.type;
    return *this;
}

Animal::~Animal(){
    std::cout << "Animal Destructor called\n\n";
}

//Action Functions

void Animal::makeSound(){
    std::cout << "unintelligible sounds\n";
}

//Getters
std::string Animal::getType(){
    return this->type;
}