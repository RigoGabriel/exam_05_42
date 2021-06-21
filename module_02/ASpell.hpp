#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <string>
# include <iostream>

class ATarget;

class ASpell{
private:
	std::string _name;
	std::string _effects;

public:
	ASpell();
	ASpell(const ASpell &other);
	ASpell(const std::string &name, const std::string &title);
	ASpell &operator=(const ASpell &other);
	virtual ~ASpell();
	const std::string &getName(void) const;
	const std::string &getEffects(void) const;
	virtual ASpell *clone(void) const = 0;
	void launch(const ATarget &target) const;
};

#include "ATarget.hpp"

#endif
