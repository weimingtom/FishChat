//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WloginErrInfo : NSObject
{
    NSString *sErrorUserAccount;
    unsigned short wErrorCode;
    NSString *sErrorTitle;
    NSString *sErrorMsg;
    unsigned short wErrorAddType;
    NSString *sErrorAdd;
}

@property(copy) NSString *sErrorUserAccount; // @synthesize sErrorUserAccount;
@property(copy) NSString *sErrorAdd; // @synthesize sErrorAdd;
@property unsigned short wErrorAddType; // @synthesize wErrorAddType;
@property(copy) NSString *sErrorMsg; // @synthesize sErrorMsg;
@property(copy) NSString *sErrorTitle; // @synthesize sErrorTitle;
@property unsigned short wErrorCode; // @synthesize wErrorCode;
- (void)dealloc;

@end

