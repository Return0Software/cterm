#pragma once

#include "core/application.hh"

class MacOSApplication : public Application
{
public:
	explicit MacOSApplication(const char *name);
	virtual ~MacOSApplication();

	virtual int exec(int argc, char **argv) const override;
};
