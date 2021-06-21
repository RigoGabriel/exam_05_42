#include "SpellBook.hpp"

SpellBook::SpellBook(void) {}

SpellBook::~SpellBook(void){
	std::vector<ASpell*>::iterator it = _list.begin();
	std::vector<ASpell*>::iterator ite = _list.end();

	while (it != ite){
		delete *it;
		it++;
	}
	_list.clear();
}

void SpellBook::learnSpell(ASpell *spell){
	std::vector<ASpell*>::iterator it = _list.begin();
	std::vector<ASpell*>::iterator ite = _list.end();

	while (it != ite){
		if ((*it)->getName() == spell->getName())
			return ;
		it++;
	}
	_list.push_back(spell);
}

void SpellBook::forgetSpell(const std::string &spellName){
	std::vector<ASpell*>::iterator it = _list.begin();
	std::vector<ASpell*>::iterator ite = _list.end();

	while (it != ite){
		if ((*it)->getName() == spellName){
			delete *it;
			it = _list.erase(it);
		}
		it++;
	}
}

ASpell *SpellBook::createSpell(const std::string &spellName){
	std::vector<ASpell*>::iterator it = _list.begin();
	std::vector<ASpell*>::iterator ite = _list.end();

	while (it != ite)
	{
		if ((*it)->getName() == spellName)
			return (*it)->clone();
		it++;
	}
	return (NULL);
}
