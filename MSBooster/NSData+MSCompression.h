//
//  NSData+MSCompression.h
//  MSBooster
//
//  Created by Maxthon Chan on 8/16/13.
//  Copyright (c) 2013 muski. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MSBooster/MSCommon.h>

/**
 Level of compression.
 */
typedef NS_ENUM(NSInteger, MSCompressionLevel)
{
    /// No compression.
    MSCompressionLevelNoCompression = 0,
    
    /// Fastest compression.
    MSCompressionLevelBestSpeed = 1,
    
    /// Smallest compression.
    MSCompressionLevelBestSize = 9,
    
    /// Default compression ratio.
    MSCompressionLevelDefault = -1
};

/**
 Compression for NSData
 */
@interface NSData (MSCompression)

/// DEFLATE compressing using default compression level.
- (NSData *)zlibCompress;

/**
 DEFLATE compressing using given level.
 
 @param     level   Compression level.
 */
- (NSData *)zlibCompressWithLevel:(MSCompressionLevel)level;

/// DEFLATE decompressing.
- (NSData *)zlibDecompress;

/// Gzip compressing using default compression level.
- (NSData *)gzipCompress;

/**
 Gzip compressing using given level.
 
 @param     level   Compression level.
 */
- (NSData *)gzipCompressWithLevel:(MSCompressionLevel)level;

/// Gzip decompressing.
- (NSData *)gzipDecompress;

#if !TARGET_OS_IPHONE

// Sadly, we does not have libbz2 on iPhones.

/// Bzip2 compressing using default compression level.
- (NSData *)bzipCompress;

/**
 Bzip2 compressing using given level.
 
 @param     level   Compression level.
 */
- (NSData *)bzipCompressWithLevel:(MSCompressionLevel)level;

/// Bzip2 decompressing.
- (NSData *)bzipDecompress;
#endif

@end
