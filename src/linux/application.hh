#pragma once

#include <string>

#include "core/application.hh"

class LinuxApplication : public Application
{
public:
	explicit LinuxApplication(const char *name);
	virtual ~LinuxApplication();

	virtual int exec(int argc, char **argv) const override;
};
