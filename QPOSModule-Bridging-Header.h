//
//  Header.h
//  
//
//  Created by Velpay on 06/03/24.
//

#import <Foundation/Foundation.h>

//! Project version number for QPOSLibrary.
FOUNDATION_EXPORT double QPOSLibraryVersionNumber;

//! Project version string for QPOSLibrary.
FOUNDATION_EXPORT const unsigned char QPOSLibraryVersionString[];

#ifndef Header_h
#define Header_h
#ifndef QPOSModule-Bridging-Header_h
#define QPOSModule-Bridging-Header_h
#import <Sources/QPOSModule/pos-ios-sdk-lib/QPOSService.h>
#import <Sources/QPOSModule/pos-ios-sdk-lib/BTDeviceFinder.h>
#import <Sources/QPOSModule/pos-ios-sdk-lib/QPOSUtil.h>
//#import "ParseXMLTool.h"
#import <Sources/QPOSModule/decryptXml/TagApp.h>
#import <Sources/QPOSModule/decryptDataTool/TLV.h>
#import <Sources/QPOSModule/decryptDataTool/TLVParser.h>
#endif

#endif /* Header_h */
