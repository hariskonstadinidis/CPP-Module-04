/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 15:52:30 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/24 17:16:04 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    Dog dog1;
    std::cout << "\n";
    std::cout << "dog1 first ides is : " << dog1.getIdea(0) << "\n";
    dog1.set_brain(0, "A good one");
    std::cout << "dog1 first ides is : " << dog1.getIdea(0) << "\n\n";
    Dog dog2(dog1);
    std::cout << "\n";
    Dog dog3 = dog2;
    std::cout << "\n\n";    

    std::cout << "dog1 first ides is : " << dog1.getIdea(0) << "\n";
    std::cout << "dog2 first ides is : " << dog2.getIdea(0) << "\n";
    std::cout << "dog3 first ides is : " << dog3.getIdea(0) << "\n\n";
    std::cout << "dog1 adress is: " << &dog1 << "\n";
    std::cout << "dog2 adress is: " << &dog2 << "\n";
    std::cout << "dog3 adress is: " << &dog3 << "\n\n";


    Cat cat1;
    std::cout << "\n";
    std::cout << "cat1 first ides is : " << cat1.getIdea(0) << "\n";
    cat1.set_brain(0, "A bad one");
    std::cout << "cat1 first ides is : " << cat1.getIdea(0) << "\n\n";
    Cat cat2(cat1);
    std::cout << "\n";
    Cat cat3 = cat2;
    std::cout << "\n\n";    

    std::cout << "cat1 first ides is : " << cat1.getIdea(0) << "\n";
    std::cout << "cat2 first ides is : " << cat2.getIdea(0) << "\n";
    std::cout << "cat3 first ides is : " << cat3.getIdea(0) << "\n\n";
    std::cout << "cat1 adress is: " << &cat1 << "\n";
    std::cout << "cat2 adress is: " << &cat2 << "\n";
    std::cout << "cat3 adress is: " << &cat3 << "\n\n";

    
    Animal *anim[10];

    std::cout << "Cat Creation for Animal *anim:\n\n";
    for (int i = 0; i < 5; i++)
        anim[i] = new Cat();
    std::cout << "\n";
    std::cout << "Dog Creation for Animal *anim:\n\n";
    for (int i = 5; i < 10; i++)
        anim[i] = new Dog();
    std::cout << "\n";
    std::cout << "Animal deletions for Animal *anim:\n\n";
    for (int i = 0; i < 10; i++)
        delete anim[i];
    std::cout << "\n";
    
    return 0;
}
