#include <iostream>

#include "application.hh"

WindowsApplication::WindowsApplication(const char *name) : name(name)
{
	std::cout << "Creating " << name << " on Windows!\n";
}

WindowsApplication::~WindowsApplication() {}

int
WindowsApplication::exec(int argc, char **argv) const
{
	return 0;
}
