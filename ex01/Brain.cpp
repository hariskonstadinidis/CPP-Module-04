/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:13:49 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/22 16:04:41 by hariskon         ###   ########.fr       */
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
    std::cout << "Brain Copy operator called\n";
    if (this != &other)
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    return *this;
}

Brain::~Brain(){
    std::cout << "Brain Destructor called\n";
}

void Brain::set_idea(int index){
    this->ideas[index] = "good one";
}
