//
//  MSBooster.h
//  MSBooster
//
//  Created by Maxthon Chan on 7/31/13.
//  Copyright (c) 2013 muski. All rights reserved.
//

#ifndef _MSBOOSTER_H_
#define _MSBOOSTER_H_

#include <MSBooster/MSCommon.h>
#include <MSBooster/MSOCCompatibility.h>
#include <MSBooster/MSStringConstant.h>
#include <MSBooster/MSStringManipulation.h>

#if __OBJC__

#import <Foundation/Foundation.h>

#import <MSBooster/NSScanner+MSLexer.h>
#import <MSBooster/NSData+MSHashing.h>
#import <MSBooster/NSData+MSHMAC.h>
#import <MSBooster/NSData+MSCryptor.h>
#import <MSBooster/NSData+MSTrivialCryptography.h>
#import <MSBooster/NSData+MSCompression.h>
#import <MSBooster/NSArray+LinqExtensions.h>
#import <MSBooster/NSDictionary+LinqExtensions.h>

#endif

#endif