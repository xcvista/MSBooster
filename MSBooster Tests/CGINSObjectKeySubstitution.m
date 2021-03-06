//
//  CGINSObjectKeySubstitution.m
//  CGIJSONObject
//
//  Created by Maxthon Chan on 8/15/13.
//  Copyright (c) 2013 muski. All rights reserved.
//

#import <SenTestingKit/SenTestingKit.h>
#import <MSBooster/MSBooster.h>

@interface CGINSObjectKeySubstitution : SenTestCase

@property NSString *stringProperty;
@property NSNumber *numberProperty;

@end

@implementation CGINSObjectKeySubstitution

- (void)setUp
{
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
    self.stringProperty = @"Hello";
    self.numberProperty = @42;
}

- (void)tearDown
{
    // Put teardown code here. This method is called after the invocation of each test method in the class. 
    [super tearDown];
}

- (NSString *)serializationKeyForKey:(NSString *)key
{
    return @{@"numberProperty": @"number-property"}[key];
}

- (void)testEncoding
{
    id serialized = [self serializedObject];
    id target = @{@"stringProperty": @"Hello", @"number-property": @42};
    STAssertNotNil(serialized, @"I cannot serialize myself.");
    STAssertEqualObjects(serialized, target, @"Serialization wrong.");
}

- (void)testDecoding
{
    id target = @{@"stringProperty": @"World", @"number-property": @28};
    CGINSObjectKeySubstitution *deserialized = [[[self class] alloc] initWithSerializedObject:target];
    STAssertNotNil(deserialized, @"I cannot deserialize myself.");
    STAssertEqualObjects(deserialized.stringProperty, @"World", @"Deserialization wrong");
    STAssertEqualObjects(deserialized.numberProperty, @28, @"Deserialization Wrong");
}

@end
