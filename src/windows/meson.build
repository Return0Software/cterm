windows_sources = [
	'../main.cc',
	'application.cc',
]

windows_cpp_args = [
	'-DCTERM_WINDOWS',
	'-std=c++17',
]

executable(
	'cterm',
	windows_sources,
	cpp_args: windows_cpp_args,
	include_directories: [
		'..',
	],
	gui_app: true,
	install: true,
)
