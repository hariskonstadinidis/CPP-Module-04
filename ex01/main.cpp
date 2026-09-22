/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 15:52:30 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/22 20:58:21 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal *Anim[25];

    for (int i = 0; i < 25; i++)
        Anim[i] = new Cat();
    // std::cout << &cat1 << "\n" << &cat2 << "\n" << &cat3 << "\n";
    return 0;
}
