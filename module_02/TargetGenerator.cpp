#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void) {}

TargetGenerator::~TargetGenerator(void){
	std::vector<ATarget*>::iterator it = _list.begin();
	std::vector<ATarget*>::iterator ite = _list.end();

	while (it != ite){
		delete *it;
		it++;
	}
	_list.clear();
}

void TargetGenerator::learnTargetType(ATarget *target){
	std::vector<ATarget*>::iterator it = _list.begin();
	std::vector<ATarget*>::iterator ite = _list.end();

	while (it != ite){
		if ((*it)->getType() == target->getType())
			return ;
		it++;
	}
	_list.push_back(target->clone());
}

void TargetGenerator::forgetTargetType(std::string const &targetTypeName){
	std::vector<ATarget*>::iterator it = _list.begin();
	std::vector<ATarget*>::iterator ite = _list.end();

	while (it != ite){
		if ((*it)->getType() == targetTypeName){
			delete *it;
			it = _list.erase(it);
		}
		it++;
	}
}

ATarget *TargetGenerator::createTarget(std::string const &targetTypeName){
	std::vector<ATarget*>::iterator it = _list.begin();
	std::vector<ATarget*>::iterator ite = _list.end();

	while (it != ite){
		if ((*it)->getType() == targetTypeName)
			return (*it)->clone();
		it++;
	}
	return (NULL);
}

