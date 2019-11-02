#include <iostream>
#include <memory>

#include "core/application.hh"

#ifdef CTERM_LINUX
#	include "linux/application.hh"
#elif CTERM_MACOS
#	include "macos/application.hh"
#elif CTERM_WINDOWS
#	include "windows/application.hh"
#endif

int
main(int argc, char **argv)
{
#ifdef CTERM_LINUX
	auto app = std::make_unique<LinuxApplication>("io.r0s.cterm");
#elif CTERM_MACOS
	auto app = std::make_unique<MacOSApplication>("io.r0s.cterm");
#elif CTERM_WINDOWS
	auto app = std::make_unique<WindowsApplication>("io.r0s.cterm");
#endif

	return app->exec(argc, argv);
}
