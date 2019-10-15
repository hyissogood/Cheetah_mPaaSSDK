// Generated by HybirdPB CodeGenerator(1.1.6). DO NOT EDIT!
// Generation date is 2017-03-21 15:51:26

#import <APProtocolBuffers/ProtocolBuffers.h>


#import "UnionResourceBizType.pb.h"

@class UnionResourceInfo;
@class UnionResourceItem;

@interface UnionResourceInfo : APDPBGeneratedMessage

@property (readonly) BOOL hasBizType;
@property (readonly) BOOL hasSuccess;
@property (readonly) BOOL hasMessage;
@property (readonly) BOOL hasVersion;
@property (readonly) BOOL hasRollback;
@property (readonly) BOOL hasQuickRollback;

@property (nonatomic) UnionResourceBizType bizType ;
@property (nonatomic) BOOL success ;
@property (nonatomic,strong) NSString* message ;
@property (nonatomic,strong) NSString* version ;
@property (nonatomic) BOOL rollback ;
@property (nonatomic,strong) NSArray<UnionResourceItem*>* item ;
@property (nonatomic) SInt32 quickRollback ;
@end

	