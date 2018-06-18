Pod::Spec.new do |s|

  s.name                = 'EmptySwiftPod'
  s.version             = '0.0.1'
  s.summary             = 'Most Basic Swift Pod Example'
  s.description         = 'Most Basic Swift Pod Example'
  s.homepage            = 'git@github.com:applicaster/DummySwiftPod.git'
  s.license             = 'MIT'
  s.author              = { 'Ilan Levy' => 'i.levy@applicaster.com' }
  s.source              = { :git => 'https://github.com/applicaster/DummySwiftPod.git', :tag => s.version.to_s }

  s.ios.deployment_target = "9.0"
  s.platform            = :ios, '9.0'
  s.requires_arc        = true
  s.static_framework = true
  s.swift_version       = '4.0'

  s.vendored_framework  = 'EmptySwiftPod.framework'
  s.preserve_paths = 'EmptySwiftPod.framework/*'
  s.source_files = 'EmptySwiftPod/**/*.{swift}'
  
  s.xcconfig =  { 'CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES' => 'YES',
                  'ENABLE_BITCODE' => 'NO',
                  'OTHER_LDFLAGS' => '$(inherited)',
                  'FRAMEWORK_SEARCH_PATHS' => '$(inherited) "${PODS_ROOT}"/**',
                  'LIBRARY_SEARCH_PATHS' => '$(inherited) "${PODS_ROOT}"/**',
                  'SWIFT_VERSION' => '4.0'
                }
end
