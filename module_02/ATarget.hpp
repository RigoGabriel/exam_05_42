#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <string>
# include <iostream>

class ASpell;

class ATarget{
private:
	std::string _type;
public:
	ATarget(void);
	ATarget(const std::string &type);
	ATarget(const ATarget &other);
	ATarget &operator=(const ATarget &other);
	virtual ~ATarget(void);
	const std::string &getType(void) const;
	virtual ATarget *clone(void) const = 0;
	void getHitBySpell(const ASpell &spell) const;
};


# include "ASpell.hpp"

#endif
