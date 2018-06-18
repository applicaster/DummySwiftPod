# Pod::Spec.new do |s|

#   s.name                = 'EmptySwiftPod'
#   s.version             = '0.0.1'
#   s.summary             = 'Most Basic Swift Pod Example'
#   s.description         = 'Most Basic Swift Pod Example'
#   s.homepage            = 'https://github.com/applicaster/DummySwiftPod.git'
#   s.license             = 'MIT'
#   s.author              = { 'Ilan Levy' => 'i.levy@applicaster.com' }
#   s.source              = { :git => 'https://github.com/applicaster/DummySwiftPod.git', :tag => s.version.to_s }

#   s.ios.deployment_target = "9.0"
#   s.platform            = :ios, '9.0'
#   s.requires_arc        = true
#   s.static_framework    = true
#   s.swift_version       = '4.0'

#   s.vendored_framework  = 'EmptySwiftPod.framework'
#   s.preserve_paths = 'EmptySwiftPod.framework/*'
#   s.source_files = 'Classes/**/*.{swift}'

#   s.xcconfig =  { 'CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES' => 'YES',
#                   'ENABLE_BITCODE' => 'NO',
#                   'OTHER_LDFLAGS' => '$(inherited)',
#                   'FRAMEWORK_SEARCH_PATHS' => '$(inherited) "${PODS_ROOT}"/**',
#                   'LIBRARY_SEARCH_PATHS' => '$(inherited) "${PODS_ROOT}"/**',
#                   'SWIFT_VERSION' => '4.0'
#                 }
# end

Pod::Spec.new do |spec|
  
  spec.name = "EmptySwiftPod"
  spec.version = "0.0.1"
  spec.summary = "Sample framework from blog post, not for real world use."
  spec.homepage = "https://github.com/applicaster/DummySwiftPod"
  spec.authors = { "Ilan Levy" => 'i.levy@applicaster.com' }
  spec.license = 'MIT'
  spec.source = { git: "https://github.com/applicaster/DummySwiftPod.git", tag: "0.0.1" }
  spec.source_files = "Classes/**/*.{h,swift}"
  spec.ios.deployment_target = "9.0"
  spec.platform            = :ios, '9.0'
  spec.requires_arc        = true
  spec.static_framework    = true
  spec.swift_version       = '4.0'

end
