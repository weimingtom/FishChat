//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBMessageObserverDelegate.h"

@interface WCOutGetWCOGiftCardList : NSObject <PBMessageObserverDelegate>
{
    unsigned int _eventID;
    id <WCOutGetWCOGiftCardListDelegate> _delegate;
}

+ (id)cgiWithDelegate:(id)arg1;
@property(nonatomic) __weak id <WCOutGetWCOGiftCardListDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int eventID; // @synthesize eventID=_eventID;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)fail;
- (void)start;
- (void)dealloc;

@end
