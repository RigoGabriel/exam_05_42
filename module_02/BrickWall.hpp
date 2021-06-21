#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include "ASpell.hpp"

class BrickWall: public ATarget{
public:
	BrickWall(void);
	virtual ~BrickWall(void);
	virtual ATarget *clone(void) const;
};

#endif
