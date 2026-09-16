/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 19:04:40 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/16 19:07:26 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//Orthodox Canonical Format Functions
WrongAnimal::WrongAnimal(): type("Unicorn"){
    std::cout << "WrongAnimal Defaut Constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
    std::cout << "WrongAnimal Copy Constructor called\n";
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
    std::cout << "WrongAnimal Copy operator called\n";
    if (this != &other)
        this->type = other.type;
    return *this;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Destructor called\n\n";
}

//Action Functions

void WrongAnimal::makeSound(){
    std::cout << "unintelligible sounds\n";
}

//Getters
std::string WrongAnimal::getType(){
    return this->type;
}