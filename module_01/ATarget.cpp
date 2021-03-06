#include "ATarget.hpp"

ATarget::ATarget(void): _type(){}

ATarget::ATarget(const std::string &type): _type(type){}

ATarget::ATarget(const ATarget &other): _type(other._type){}

ATarget &ATarget::operator=(const ATarget &other){
	_type = other._type;
	return (*this);
}

ATarget::~ATarget(void){}

const std::string &ATarget::getType(void) const{
	return (_type);
}

void ATarget::getHitBySpell(const ASpell &spell) const{
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}

