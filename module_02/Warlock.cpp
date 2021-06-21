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
	_book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string const &spellName){
	_book.forgetSpell(spellName);
}

void Warlock::launchSpell(std::string const &spellName, ATarget const &target){
	ASpell *elem;

	elem = _book.createSpell(spellName);
	if (elem != NULL){
		(*elem).launch(target);
		delete elem;
	}
}
