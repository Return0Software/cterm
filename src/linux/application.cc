#include <iostream>

#include "application.hh"
#include "core/application.hh"

LinuxApplication::LinuxApplication(const char *name) : Application(name)
{
	std::cout << "Creating " << name << " on Linux!\n";
}

LinuxApplication::~LinuxApplication() {}

int
LinuxApplication::exec(int, char **) const
{
	return 0;
}
