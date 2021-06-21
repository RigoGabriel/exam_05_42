#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>
# include <iostream>
# include <vector>
# include "ASpell.hpp"
# include "ATarget.hpp"

class Warlock {
private:
	std::string _name;
	std::string _title;

	std::vector<ASpell*> _list;

	Warlock(void);
	Warlock(const Warlock &other);
	Warlock &operator=(const Warlock &other);
public:
	Warlock(const std::string &name, const std::string &title);
	virtual ~Warlock(void);
	const std::string getName(void) const;
	const std::string getTitle(void) const;
	void setTitle(const std::string &title);
	void introduce(void) const;
	void learnSpell(ASpell *spell);
	void forgetSpell(std::string const &spellName);
	void launchSpell(std::string const &spellName, ATarget const &target);
};

#endif
