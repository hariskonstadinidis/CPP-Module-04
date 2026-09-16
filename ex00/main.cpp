/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 15:52:30 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/16 16:39:30 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

int main()
{
    Animal anim1;
    std::cout << "\n";
    Cat cat1;
    std::cout << "\n";
    Animal *anim2 = new Cat;
    std::cout << "\n";
    anim1.makeSound();
    cat1.makeSound();
    anim2->makeSound();    
    return 1;
}