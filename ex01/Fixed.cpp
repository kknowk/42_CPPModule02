/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:54:19 by khorike           #+#    #+#             */
/*   Updated: 2023/08/31 13:17:31 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int int_val)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = int_val << fractionalBits;
}

Fixed::Fixed(const float float_val)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(float_val * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = other.value;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
	return ((float)this->value / (1 << fractionalBits));
}

int Fixed::toInt(void) const
{
	return (this->value >> fractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

// <<オペレータのオーバーロード
// <<オペレータのオーバーロードを使うことで、
// Fixedクラスのオブジェクトをstd::coutや他のstd::ostreamオブジェクトに
// 直接出力する際の表示方法を定義できる


// 固定小数点の必要性:

// 確かに現代のコンピュータは浮動小数点数を扱うことができます。
// しかし、浮動小数点数の計算は、整数の計算よりも高コストである場合があります。
// 特定のハードウェア、特に古いものや組み込みシステムでは、浮動小数点のサポートがないか、または非効率的です。
// 固定小数点数は、確定的な性能を持ち、リアルタイムシステムやゲームなどの分野での使用に適しています。