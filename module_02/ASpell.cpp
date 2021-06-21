#include "ASpell.hpp"

ASpell::ASpell(void): _name(), _effects(){}

ASpell::ASpell(const ASpell &other): _name(other._name), _effects(other._effects){}

ASpell::ASpell(const std::string &name, const std::string &effects): _name(name), _effects(effects) {}

ASpell &ASpell::operator=(const ASpell &other){
	_name = other._name;
	_effects = other._effects;
	return (*this);
}

ASpell::~ASpell(void){}

const std::string &ASpell::getName(void) const {
	return (_name);
}

const std::string &ASpell::getEffects(void) const{
	return (_effects);
}

void ASpell::launch(const ATarget &target) const{
	target.getHitBySpell(*this);
}
