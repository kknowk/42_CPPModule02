/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:30:25 by khorike           #+#    #+#             */
/*   Updated: 2023/08/30 17:24:26 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	value = other.value;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		value = other.value;
	}
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	value = raw;
}

// float Fixed::toFloat(void) const
// {
// 	return static_cast<float>(value) / (1 << fractional_bits);
// }


// オペレータオーバーロードとは、C++などの言語で提供される特性の一つで、
// 既存の演算子（+, -, *, /, = など）に対して新しいまたはカスタマイズされた動作を定義することができます。
// これは、ユーザー定義の型（特にクラスや構造体）に対して、
// 標準的な演算子の動作をカスタマイズする際に非常に有用です。


// operator=
// 代入演算子をオーバーロード
// クラスのオブジェクトが代入演算子= を使った時にどのように動作するかを定義します。

// Fixed &Fixed::operator=(const Fixed& other)
// Fixedクラスのオブジェクトを別のFixedオブジェクトに代入する方法を定義している

// Copy constructor:
// コピー コンストラクタは、既存のオブジェクトから新しいオブジェクトを作成する際に呼び出されます。
// 例: Fixed b(a); ここでbはaを使って初期化されるので、コピー コンストラクタが呼び出されます。
// 他の一般的な使用例は、関数へのオブジェクトの値渡しや関数からのオブジェクトの返却などです.

// Copy assignment operator:
// 代入演算子は、すでに存在する2つのオブジェクトの間で、一方のオブジェクトの内容をもう一方に代入する際に使用されます。
// 例: c = b; ここでcはすでに存在しており、bの内容をcに代入します。この時、代入演算子が呼び出されます。
// コードに代入演算子が明示的にオーバーロードされていない場合、デフォルトの代入演算子（シャローコピー）が使用されます。

// 要するに、コピー コンストラクタは新しいオブジェクトを作成する際に使用され、
// 代入演算子は既存のオブジェクトを更新するために使用されます。


// if (this != &other)

// 自己代入をチェック

// 例えば
// Fixed d;
// d = d;

// この場合、dオブジェクトは自身に代入されます。
// 多くの場合、このような自己代入は問題を引き起こさないのですが、
// 動的にメモリを確保するようなクラスや、特定のリソースを扱うクラスでは、
// 自己代入の際に問題が生じる可能性があります。

// 例えば

// class DynamicArray {
// private:
//     int* data;
//     size_t size;

// public:
//     DynamicArray(size_t s) : size(s) {
//         data = new int[size];
//     }

//     ~DynamicArray() {
//         delete[] data;
//     }

//     DynamicArray& operator=(const DynamicArray& other) {
//         if (this != &other) {
//             delete[] data; // 現在のデータを解放
//             size = other.size;
//             data = new int[size]; // 新しいデータの領域を確保
//             for (size_t i = 0; i < size; ++i) {
//                 data[i] = other.data[i];
//             }
//         }
//         return *this;
//     }
// };


// DynamicArray arr(10);
// arr = arr;

// arr = arr;の部分で、まずdelete[] data;が実行され、dataの指すメモリが解放されます。
// しかし、その後のdata[i] = other.data[i];でデータをコピーしようとすると、
// 解放されたメモリ領域にアクセスすることになり、不定の動作を引き起こします。