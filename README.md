# Swift iOS ANE  XCode9 and iOS 11 Beta

Example Xcode project showing how to create Air Native Extensions for iOS using Swift 4.0.


----------

**This branch is experimental. It is used to build ANEs for iOS 11 Beta using XCode 9 beta.
Please see tech notes below. There is some configuration needed !!**

The example uses PDFKit with is new in iOS 11

----------

[![paypal](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=5UR2T52J633RC)

It is comprised of 3 parts.

1. A static library which exposes methods to AIR and a thin ObjectiveC API layer to the Swift code.
2. A dynamic Swift Framework which contains the translation of FlashRuntimeExtensions to Swift.
3. A dynamic Swift Framework which contains the main logic of the ANE.

> To allow FRE functions to be called from within Swift a protocol acting 
> as a bridge back to Objective C was used.

SwiftIOSANE_LIB/SwiftIOSANE_LIB.m is the entry point of the ANE. It acts as a thin layered API to your Swift controller.  
Add the number of methods here 

````objectivec
static FRENamedFunction extensionFunctions[] =
{
     MAP_FUNCTION(TRSOA, load)
    ,MAP_FUNCTION(TRSOA, goBack)
};
`````


SwiftIOSANE_FW/SwiftController.swift  
Add Swift method(s) to the functionsToSet Dictionary in getFunctions()

````swift
@objc public func getFunctions(prefix: String) -> Array<String> {
    functionsToSet["\(prefix)load"] = load
    functionsToSet["\(prefix)goBack"] = goBack    
}
`````

Add Swift method(s)

````swift
func load(ctx: FREContext, argc: FREArgc, argv: FREArgv) -> FREObject? {
    //your code here
    return nil
}

func goBack(ctx: FREContext, argc: FREArgc, argv: FREArgv) -> FREObject? {
    //your code here
    return nil
}
`````

----------

### How to use
######  The methods exposed by FlashRuntimeExtensions.swift are similar to the FreSharp API for Air Native Extensions. 

Example - Convert a FREObject into a String, and String into FREObject

````swift
let airString: String = FreObjectSwift(freObject: inFRE0).value as? String
trace("String passed from AIR:", airString)
let swiftString: String = "I am a string from Swift"
do {
    return try FreObjectSwift(string: swiftString).rawValue
} catch {}
`````


Example - Call a method on an FREObject

````swift
if let addition: FreObjectSwift = try person.callMethod(name: "add", args: 100, 31) {
    if let sum: Int = addition.value as? Int {
        trace("addition result:", sum)
    }
}
`````

Example - Reading items in array
````swift
let airArray: FreArraySwift = FreArraySwift.init(freObject: inFRE0)
do {
    if let itemZero: FreObjectSwift = try airArray.getObjectAt(index: 0) {
        if let itemZeroVal: Int = itemZero.value as? Int {
            trace("AIR Array elem at 0 type:", "value:", itemZeroVal)
            let newVal = try FreObjectSwift.init(int: 56)
            try airArray.setObjectAt(index: 0, object: newVal)
            return airArray.rawValue
         }
    }
} catch {}
`````

Example - Convert BitmapData to a UIImage and add to native view
````swift
let asBitmapData = FreBitmapDataSwift.init(freObject: inFRE0)
defer {
    asBitmapData.releaseData()
}
do {
    if let cgimg = try asBitmapData.getAsImage() {
        let img:UIImage = UIImage.init(cgImage: cgImage, scale: UIScreen.main.scale, orientation: .up)
        if let rootViewController = UIApplication.shared.keyWindow?.rootViewController {
           let imgView: UIImageView = UIImageView.init(image: img)
           imgView.frame = CGRect.init(x: 0, y: 0, width: img.size.width, height: img.size.height)
           rootViewController.view.addSubview(imgView)
        }
    }
} catch {}
`````

Example - Error handling
````swift
do {
    _ = try person.getProperty(name: "doNotExist") //calling a property that doesn't exist
} catch let e as FREError {
    if let aneError = e.getError(#file, #line, #column) {
        return aneError //return the error as an actionscript error
    }
} catch {}
`````
----------
### Running on Simulator

iOS 11 enforces x86_64 for simulator builds. AIR only produces i386 simulator builds. Therefore, you cannot run projects with iOS11 ANEs in the XCode Simulator 

### Running on Device !!

You need to do the following first.
1) Download latest XCode 9.0 Beta from developer.apple.com
2) Install latest iOS11 Beta on your device.
3) Make a copy of your AIR SDK. We are going to be modding it.
4) You need to create a symlink from your AIRSDK to the iOS SDK   
````bash ln -s /Applications/Xcode-beta.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/ld /Users/User/sdks/AIR/AIRSDK_26_IOS11/lib/aot/bin/ld64/ld64````
5) Copy this tbd from here:   
/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS.sdk/usr/lib/libgcc_s.1.tbd   
to here:   
/Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS.sdk/usr/lib/libgcc_s.1.tbd

6) Get the provided example project running. Don't be impatient and go gung-ho on your own project before studying the example.

The example project needs to be built and signed in the correct manner.   
AIR's ADT does not yet handle signing of the shared Swift Libraries correctly.   

An AIR based packaging tool is provided at https://github.com/tuarua/AIR-iOS-Packager     
Here is a video [demonstrating how to use it](https://www.youtube.com/watch?v=H-G8WugNFQM&feature=youtu.be)       

[![youtube video](https://raw.githubusercontent.com/tuarua/WebViewANE/master/screenshots/ios-packaging.jpg)](https://www.youtube.com/watch?v=H-G8WugNFQM&feature=youtu.be)

### Prerequisites

You will need

- Xcode 9.0 Beta
- IntelliJ IDEA
- AIR 26
