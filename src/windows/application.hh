#pragma once

#include "core/application.hh"

class WindowsApplication : public Application
{
public:
	explicit WindowsApplication(const char *name);
	virtual ~WindowsApplication();

	virtual int exec(int argc, char **argv) const override;
};
