/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 15:52:30 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/16 19:11:27 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

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
    WrongAnimal *wronganim1 = new WrongCat;
    std::cout << "\n";
    
    anim1.makeSound();
    cat1.makeSound();
    anim2->makeSound();
    dog1.makeSound();
    anim3->makeSound();
    wronganim1->makeSound();
    std::cout << "\n";

    
    delete anim2;
    delete anim3;
    return 1;
}