/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 17:32:02 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/25 12:24:23 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//Orthodox canonical format functions
Dog::Dog():Animal(){
    std::cout << "Dog default constructor called\n";
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog& other):Animal(other), brain(new Brain(*other.brain)){
    std::cout << "Dog copy constructor called\n";
    *this = other;
}

Dog& Dog::operator=(const Dog& other){
    std::cout << "Dog assignment operator called\n";
    if (this != &other)
    {
        this->type = other.type;
        *this->brain = *other.brain;
    }
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog Destructor called\n";
    delete this->brain;
}

//Action functions
void Dog::makeSound() const{
    std::cout << "Woof\n";
}

void Dog::set_brain(int index, std::string idea){
    this->brain->set_idea(index, idea);
}

std::string Dog::getIdea(int index){
    return this->brain->getIdea(index);
}