Pod::Spec.new do |spec|
  
  spec.name = "EmptySwiftPod"
  spec.version = "0.0.2"
  spec.summary = "Sample framework from blog post, not for real world use."
  spec.homepage = "https://github.com/applicaster/DummySwiftPod"
  spec.authors = { "Ilan Levy" => 'i.levy@applicaster.com' }
  spec.license = 'MIT'
  spec.source = { git: "https://github.com/applicaster/DummySwiftPod.git", tag: "0.0.2" }
  spec.source_files = "Classes/**/*.{h,swift}"
  spec.ios.deployment_target = "9.0"
  spec.platform            = :ios, '9.0'
  spec.requires_arc        = true
  spec.static_framework    = true
  spec.swift_version       = '4.0'
  spec.dependency "ArtiSDK", "~> 1.1.010"
end
