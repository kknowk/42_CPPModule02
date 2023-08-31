/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:44:38 by khorike           #+#    #+#             */
/*   Updated: 2023/08/31 12:57:21 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed {
private:
	int value;
	static const int fractionalBits = 8;

public:
	Fixed();
	Fixed(const int int_val);
	Fixed(const float float_val);
	Fixed(const Fixed &other);
	Fixed& operator=(const Fixed &other);
	~Fixed();

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
