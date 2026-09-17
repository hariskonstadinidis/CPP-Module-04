/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 19:06:12 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/17 20:42:40 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

//Orthodox canonical format functions
WrongCat::WrongCat():WrongAnimal(){
    std::cout << "WrongCat default constructor called\n";
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other):WrongAnimal(other){
    std::cout << "WrongCat copy constructor called\n";
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other){
    std::cout << "WrongCat assignment operator called\n";
    if (this != &other)
        this->type = other.type;
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat Destructor called\n";
}

//Action functions
void WrongCat::makeSound() const{
    std::cout << "Meow\n";
}