#pragma once

#include <string>


class Animal
{

public:
	Animal();
	Animal(const Animal& other);
	virtual ~Animal();
	Animal& operator= (const Animal& other);

	void makeSound() const;

protected:
	std::string type;

};
