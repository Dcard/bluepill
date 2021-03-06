//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSObject<OS_xpc_object>;

@interface XCTSerializedTransportWrapper : NSObject <NSSecureCoding>
{
    NSObject<OS_xpc_object> *_serializedTransport;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) NSObject<OS_xpc_object> *serializedTransport; // @synthesize serializedTransport=_serializedTransport;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithSerializedTransport:(id)arg1;

@end

