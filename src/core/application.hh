#pragma once

class Application
{
protected:
	const char *name;

protected:
	explicit Application(const char *name) : name(name) {};

public:
	virtual ~Application() {};

	virtual int exec(int argc, char **argv) const = 0;
};
