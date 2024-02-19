/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <sycourbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:17:15 by sycourbi          #+#    #+#             */
/*   Updated: 2024/01/25 17:34:49 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>
#include <string>

class Harl {
    
public:
    Harl();
    ~Harl();

    void complain( std::string level );
    
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

};

# endif