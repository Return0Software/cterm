linux_sources = [
	'../main.cc',
	'application.cc',
]

linux_cpp_args = [
	'-DCTERM_LINUX',
	'-std=gnu++17',
]

executable(
	'cterm',
	linux_sources,
	cpp_args: linux_cpp_args,
	include_directories: [
		'..',
	],
	gui_app: true,
	install: true,
)
