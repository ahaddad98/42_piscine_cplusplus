/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 23:48:26 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/20 23:53:13 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H
# include "ICharacter.hpp"
# include "AMateria.hpp"


class Character : public ICharacter
{
private:
    std::string name;
    AMateria *amater[4];
public:
    Character(/* args */);
    Character(Character const & charac);
    Character &operator=(Character const & charac);
    Character(std::string name);
    ~Character();
    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};

std::ostream &operator << ( std::ostream& out, const Character & in );

#endif