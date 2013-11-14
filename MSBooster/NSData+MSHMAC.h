//
//  NSData+MSHMAC.h
//  MSBooster
//
//  Created by Maxthon Chan on 9/19/13.
//  Copyright (c) 2013 muski. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 HMAC for NSData
 */
@interface NSData (MSHMAC)

/**
 Calculates the MD5 HMAC.
 @param     key     HMAC key.
 */
- (NSData *)MD5HMAC:(NSData *)key;

/**
 Calculates the SHA-1 HMAC.
 @param     key     HMAC key.
 */
- (NSData *)SHA1HMAC:(NSData *)key;

/**
 Calculates the SHA-224 HMAC.
 @param     key     HMAC key.
 */
- (NSData *)SHA224HMAC:(NSData *)key;

/**
 Calculates the SHA-256 HMAC.
 @param     key     HMAC key.
 */
- (NSData *)SHA256HMAC:(NSData *)key;

/**
 Calculates the SHA-384 HMAC.
 @param     key     HMAC key.
 */
- (NSData *)SHA384HMAC:(NSData *)key;

/**
 Calculates the SHA-512 HMAC.
 @param     key     HMAC key.
 */
- (NSData *)SHA512HMAC:(NSData *)key;

@end
