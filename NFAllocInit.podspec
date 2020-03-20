Pod::Spec.new do |s|
  s.name         			= "NFAllocInit"
  s.version      			= "1.1.5"
  s.summary      			= "Helper classes and categories for iOS App development"
  s.description  			= <<-DESC
                   			  The starting point for an iOS app - helper classes and the like. 
                   			  Add this to your project to have access to detailed logs, CGRect
                   			  shortcuts, a quick audio player, date parsers and other handy tidbits.
                   			  DESC

  s.homepage     			= "https://github.com/NextFaze/NFAllocInit"
  s.license      			= 'Apache 2.0'
  s.authors                 = { 'Ric Santos' => 'rics@ntos.me',
                                'Andy J' => 'awilliams@nextfaze.com',
                                'Shane Woolcock' => 'swoolcock@nextfaze.com',
                                'Dan Silk' => 'dsilk@nextfaze.com' }

  s.ios.deployment_target = '6.0'
  s.osx.deployment_target = '10.12'
  s.tvos.deployment_target = '10.0'
  s.watchos.deployment_target = '3.0'
  
  s.source       			= { :git => "https://github.com/NextFaze/NFAllocInit.git", :tag => s.version.to_s }
  s.source_files 			= "NFAllocInit", "NFAllocInit/**/*.{h,m}"
  s.frameworks   			= "AVFoundation", "AudioToolbox"
  s.requires_arc 			= true
  s.prefix_header_contents 	= '#import "NFAllocInit.h"'
end
