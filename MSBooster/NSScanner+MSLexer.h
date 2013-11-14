//
//  NSScanner+MSLexer.h
//  MSBooster
//
//  Created by Maxthon Chan on 10/23/13.
//  Copyright (c) 2013 muski. All rights reserved.
//

#import <Foundation/Foundation.h>

#define MSScannerBegin() NSUInteger _location = [self scanLocation];
#define MSScannerAssert(func) do { if (!(func)) { [self setScanLocation:_location]; return NO; } } while (0)

