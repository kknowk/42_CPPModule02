/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:42:30 by khorike           #+#    #+#             */
/*   Updated: 2023/08/31 14:11:29 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}

// 1/256 は 0.00390625

// 5.05fは 5.05 * 256 == 12923(1292.8 を四捨五入)
// 12923 * 2 * 256 == 662016
// 662016 / 256 /256 == 10.1015625
// 10.1016(6桁になるよに四捨五入)



// int main(void) {
//     Fixed a;
//     Fixed const b(Fixed(5.05f) * Fixed(2));

//     std::cout << "a: " << a << std::endl;
//     std::cout << "++a: " << ++a << std::endl;
//     std::cout << "a: " << a << std::endl;
//     std::cout << "a++: " << a++ << std::endl;
//     std::cout << "a: " << a << std::endl;
//     std::cout << "b: " << b << std::endl;
//     std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;

//     // Additional tests
//     Fixed c(10.5f);
//     Fixed d(2.5f);
    
//     std::cout << "c: " << c << std::endl;
//     std::cout << "d: " << d << std::endl;
//     std::cout << "c + d: " << (c + d) << std::endl;
//     std::cout << "c - d: " << (c - d) << std::endl;
//     std::cout << "c * d: " << (c * d) << std::endl;
//     std::cout << "c / d: " << (c / d) << std::endl;
//     std::cout << "min(c, d): " << Fixed::min(c, d) << std::endl;
//     std::cout << "max(c, d): " << Fixed::max(c, d) << std::endl;

//     return 0;
// }
