//
//  BMEarthTrackRecordListener.h
//  BigeEarth
//
//  Created by 赵洪 on 2021/1/29.
//  Copyright © 2021 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
NS_ASSUME_NONNULL_BEGIN
typedef void(^BMEarthTrackRecordListenerRecordLocation)(CLLocation * location);
@interface BMEarthTrackRecordListener : NSObject
@property (nonatomic)BMEarthTrackRecordListenerRecordLocation trackRecordBlock;
+ (instancetype)shared;
@end

NS_ASSUME_NONNULL_END
