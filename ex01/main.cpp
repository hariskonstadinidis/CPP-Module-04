/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 15:52:30 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/17 20:27:54 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "subject tests:\n\n";
    const Animal* meta = new Animal();
    std::cout << "\n";
    const Animal* j = new Dog();
    std::cout << "\n";
    const Animal* i = new Cat();
    std::cout << "\n";
    
    std::cout << "meta is: " << meta->getType() << " " << std::endl;
    std::cout << "j2 is  : " << j->getType() << " " << std::endl;
    std::cout << "i2 is  : " << i->getType() << " " << std::endl;
    std::cout << "\n";
    
    meta->makeSound();
    j->makeSound();
    i->makeSound();
    std::cout << "\n\n";
    
    
    const WrongAnimal* meta2 = new WrongAnimal();
    std::cout << "\n";
    const WrongCat j2;
    std::cout << "\n";
    const WrongAnimal* i2 = new WrongCat();
    std::cout << "\n";
    
    std::cout << "meta is: " << meta2->getType() << " " << std::endl;
    std::cout << "j2 is  : " << j2.getType() << " " << std::endl;
    std::cout << "i2 is  : " << i2->getType() << " " << std::endl;
    std::cout << "\n";
    
    meta2->makeSound();
    j2.makeSound();
    i2->makeSound();
    std::cout << "----------end---------\n\n";

    
    std::cout << "My tests:\n\n";
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
    
    std::cout << anim1.getType() << " sound is  :";
    anim1.makeSound();
    std::cout << cat1.getType() << " sound is      :";
    cat1.makeSound();
    std::cout << anim2->getType() << " sound is      :";
    anim2->makeSound();
    std::cout << dog1.getType() << " sound is      :";
    dog1.makeSound();
    std::cout << anim3->getType() << " sound is      :";
    anim3->makeSound();
    std::cout << wronganim1->getType() << " sound is :";
    wronganim1->makeSound();
    std::cout << "\n";

    delete meta;
    delete j;
    delete i;
    delete meta2;
    delete i2;
    delete anim2;
    delete anim3;
    delete wronganim1;
    
    return 0;
}