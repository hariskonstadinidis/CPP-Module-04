/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:13:49 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/24 17:14:51 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

//Orthodox Canonical Format Functions
Brain::Brain(){
    std::cout << "Brain Defaut Constructor called\n";
}

Brain::Brain(const Brain& other){
    std::cout << "Brain Copy Constructor called\n";
    *this = other;
}

Brain& Brain::operator=(const Brain& other){
    std::cout << "Brain Copy assignment operator called\n";
    if (this != &other)
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    return *this;
}

Brain::~Brain(){
    std::cout << "Brain Destructor called\n";
}

//Getter
std::string Brain::getIdea(int index){
    return this->ideas[index];
}

//Setter
void Brain::set_idea(int index, std::string idea){
    this->ideas[index] = idea;
}