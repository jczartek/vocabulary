vocabulary_sources = [
  'main.c',
  'vocabulary-window.c',
    'vocabulary-application.c',
  ]

vocabulary_deps = [
  dependency('gtk4'),
]

gnome = import('gnome')

vocabulary_sources += gnome.compile_resources('vocabulary-resources',
  'vocabulary.gresource.xml',
  c_name: 'vocabulary'
)

executable('vocabulary', vocabulary_sources,
  dependencies: vocabulary_deps,
  install: true,
)
