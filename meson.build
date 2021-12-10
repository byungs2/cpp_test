project('first_cpp', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3',
		     'cpp_std=c++14'])

warning_flags = [
  '-Wno-unused-parameter',
  '-D_GLIBCXX_USE_CXX11_ABI=0'
]

cc = meson.get_compiler('cpp')

foreach arg : warning_flags
  if cc.has_argument (arg)
    add_project_arguments([arg], language: 'cpp')
  endif
endforeach
  

exe = executable('first_cpp', 'first_cpp.cc',
  install : true)

test('basic', exe)
