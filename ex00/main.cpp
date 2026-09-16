/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 15:52:30 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/16 17:34:49 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal anim1;
    std::cout << "\n";
    Cat cat1;
    std::cout << "\n";
    Animal *anim2 = new Cat;
    std::cout << "\n";
    Dog dog1;
    std::cout << "\n";
    Animal *anim3 = new Dog;
    std::cout << "\n";
    anim1.makeSound();
    cat1.makeSound();
    anim2->makeSound();
    dog1.makeSound();
    anim3->makeSound();
    std::cout << "\n";
    delete anim2;
    delete anim3;
    return 1;
}