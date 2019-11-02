macos_sources = [
	'../main.cc',
	'application.cc',
]

macos_cpp_args = [
	'-DCTERM_MACOS',
	'-std=c++17',
]

executable(
	'cterm',
	macos_sources,
	cpp_args: macos_cpp_args,
	include_directories: [
		'..',
	],
	gui_app: true,
	install: true,
)
