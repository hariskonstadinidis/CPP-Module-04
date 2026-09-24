/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 16:31:20 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/24 17:15:17 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//Orthodox canonical format functions
Cat::Cat():Animal(){
    std::cout << "Cat default constructor called\n";
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat& other):Animal(other), brain(new Brain(*other.brain)){
    std::cout << "Cat copy constructor called\n";
    *this = other;
}

Cat& Cat::operator=(const Cat& other){
    std::cout << "Cat copy assignment operator called\n";
    if (this != &other)
    {
        this->type = other.type;
        *this->brain = *other.brain;
    }
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat Destructor called\n";
    delete this->brain;
}

//Action functions
void Cat::makeSound() const{
    std::cout << "Meow\n";
}

void Cat::set_brain(int index, std::string idea){
    this->brain->set_idea(index, idea);
}

std::string Cat::getIdea(int index){
    return this->brain->getIdea(index);
}