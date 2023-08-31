/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:26:25 by khorike           #+#    #+#             */
/*   Updated: 2023/08/30 17:15:34 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return (0);
}

// int main(void)
// {
//     Fixed a;
//     Fixed b(a);
//     Fixed c;

//     std::cout << "Raw bits of a: " << a.getRawBits() << std::endl;
//     std::cout << "Actual value of a: " << a.toFloat() << std::endl;  // 追加

//     a.setRawBits(256);  // 256は固定小数点数での 1.0 に相当する
//     std::cout << "After setting raw bits of a to 256: " << a.getRawBits() << std::endl;
//     std::cout << "Actual value of a: " << a.toFloat() << std::endl;  // 追加

//     c = b;
//     std::cout << "Raw bits of b: " << b.getRawBits() << std::endl;
//     std::cout << "Actual value of b: " << b.toFloat() << std::endl;  // 追加

//     std::cout << "Raw bits of c: " << c.getRawBits() << std::endl;
//     std::cout << "Actual value of c: " << c.toFloat() << std::endl;  // 追加

//     return 0;
// }
