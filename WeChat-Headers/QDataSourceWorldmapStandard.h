//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QDataSourceBase.h"

@class NSArray;

@interface QDataSourceWorldmapStandard : QDataSourceBase
{
    NSArray *_languageCodeArray;
}

+ (id)dataSourceStandard:(id)arg1 sceneId:(id)arg2 version:(id)arg3;
+ (id)dataSourceStandard:(id)arg1 sceneId:(id)arg2;
@property(retain, nonatomic) NSArray *languageCodeArray; // @synthesize languageCodeArray=_languageCodeArray;
- (void).cxx_destruct;
- (id)tilePath:(CDStruct_74b02b43)arg1;
- (double)tileSize;
- (id)TileXYToQuadKey:(CDStruct_74b02b43)arg1;
- (int)tileType;
- (_Bool)shouldCollectRequestTime;
- (void)setMapLanguage:(unsigned long long)arg1;
- (id)lauguageCode;
- (id)initWithStyleId:(id)arg1 sceneId:(id)arg2 version:(id)arg3;

@end

