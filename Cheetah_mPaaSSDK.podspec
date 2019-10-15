Pod::Spec.new do |s|

  s.name         = "Cheetah_mPaaSSDK"
  s.version      = "0.0.1"
  s.summary      = "iOS mPaaS SDK"

  s.description  = <<-DESC
			iOS mPaaS SDK package1.0.0 new specs
                   DESC

  s.homepage     = "https://github.com/hyissogood/"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author             = "lsw"
  s.platform     = :ios, "9.0"
  s.source       = { :git => "https://github.com/hyissogood/Cheetah_mPaaSSDK.git", :tag => "#{s.version}"  }
  s.resources = "Cheetah_mPaaSSDK/Resources/*.bundle"
  s.vendored_frameworks = "Cheetah_mPaaSSDK/Frameworks/*.framework"
  s.frameworks = "UIKit", "JavaScriptCore", "CoreImage", "SystemConfiguration", "CoreTelephony", "CoreLocation", "MessageUI", "WebKit", "CoreMotion", "CoreGraphics", "ImageIO", "Accelerate", "AVFoundation", "CoreMedia", "AudioToolbox", "UserNotifications", "AssetsLibrary"
  s.libraries = "sqlite3", "xml2", "stdc++", "c++", "z", "iconv", "bz2"
end
