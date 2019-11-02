#include <iostream>

#include "application.hh"

MacOSApplication::MacOSApplication(const char *name) : name(name)
{
	std::cout << "Creating " << name << " on MacOS!\n";
}

MacOSApplication::~MacOSApplication() {}

int
MacOSApplication::exec(int argc, char **argv) const
{
	return 0;
}
