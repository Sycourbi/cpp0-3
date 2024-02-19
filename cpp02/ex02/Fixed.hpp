/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <sycourbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:11:06 by sycourbi          #+#    #+#             */
/*   Updated: 2024/01/31 15:45:55 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>
#include <cmath>

class Fixed {

public:
    Fixed();
    Fixed(const int intvalue);
    Fixed(const float floatvalue);
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

    // 6 opérateurs de comparaison
    bool operator>(const Fixed& rhs) const;
    bool operator<(const Fixed& rhs) const;
    bool operator>=(const Fixed& rhs) const;
    bool operator<=(const Fixed& rhs) const;
    bool operator==(const Fixed& rhs) const;
    bool operator!=(const Fixed& rhs) const;
    
    // 4 opérateurs arithmétiques
    Fixed operator+(const Fixed& rhs) const;
    Fixed operator-(const Fixed& rhs) const;
    Fixed operator*(const Fixed& rhs) const;
    Fixed operator/(const Fixed& rhs) const;

    // Opérateurs d'incrémentation et de décrémentation
    Fixed& operator++();    // Pré-incrémentation
    Fixed operator++(int);  // Post-incrémentation
    Fixed& operator--();    // Pré-décrémentation
    Fixed operator--(int);  // Post-décrémentation

    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
    
private:
    int value;
    static const int fractionalBits = 8;
};
/*
    Surcharge de l'opérateur '<<' pour afficher 
    des objets Fixed avec std::cout ou autres 
    flux std::ostream.
*/
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

# endif