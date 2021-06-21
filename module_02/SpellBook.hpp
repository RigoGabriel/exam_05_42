#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include "ASpell.hpp"
# include <vector>

class SpellBook{
private:
	SpellBook(const SpellBook &other);
	SpellBook &operator=(const SpellBook &other);
	std::vector<ASpell*> _list;
public:
	SpellBook(void);
	virtual ~SpellBook(void);
	void learnSpell(ASpell *spell);
	void forgetSpell(const std::string &spellName);
	ASpell *createSpell(const std::string &spellName);
};

#endif

