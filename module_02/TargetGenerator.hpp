#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include "ATarget.hpp"
# include <vector>

class TargetGenerator{
private:
	TargetGenerator(const TargetGenerator &other);
	TargetGenerator &operator=(const TargetGenerator &other);
	std::vector<ATarget*> _list;
public:
	TargetGenerator(void);
	virtual ~TargetGenerator(void);

	void learnTargetType(ATarget *target);
	void forgetTargetType(std::string const &targetTypeName);
	ATarget* createTarget(std::string const &targetTypeName);
};

#endif

