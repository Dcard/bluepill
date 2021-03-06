//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface XCUIApplicationRegistry : NSObject
{
    NSDictionary *_testDependencies;
    NSDictionary *_userOverrides;
}

@property(copy) NSDictionary *userOverrides; // @synthesize userOverrides=_userOverrides;
@property(copy) NSDictionary *testDependencies; // @synthesize testDependencies=_testDependencies;
- (_Bool)testDependencyExistsForApplicationAtURL:(id)arg1;
- (id)recordForApplicationWithBundleIdentifier:(id)arg1;
- (id)_constructRecordMapFromRawMap:(id)arg1 isTestDependencyMap:(_Bool)arg2;
- (id)initWithTestDependencies:(id)arg1 userOverrides:(id)arg2;
- (void)dealloc;

@end

