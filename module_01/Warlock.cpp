#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title): _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day" << std::endl;
}

Warlock::~Warlock(){
	std::cout << _name << ": My job here is done!" << std::endl;
}

const std::string Warlock::getName(void) const{
	return (_name);
}

const std::string Warlock::getTitle(void) const{
	return (_title);
}

void Warlock::setTitle(const std::string &title){
	_title = title;
}

void Warlock::introduce(void) const{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl; 
}

void Warlock::learnSpell(ASpell *spell){
	if (spell)
	{
		std::vector<ASpell*>::iterator it = _list.begin();
		std::vector<ASpell*>::iterator ite = _list.end();

		while (it != ite){
			if ((*it)->getName() == spell->getName())
				return ;
			it++;
		}
		_list.push_back(spell);
	}
}

void Warlock::forgetSpell(std::string const &spellName){
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

void Warlock::launchSpell(std::string const &spellName, ATarget const &target){
	std::vector<ASpell*>::iterator it = _list.begin();
	std::vector<ASpell*>::iterator ite = _list.end();


	while (it != ite){
		if ((*it)->getName() == spellName){
			(*it)->launch(target);
			return ;
		}
		it++;
	}
}
