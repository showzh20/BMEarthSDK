//
//  BMEarthLocationListener.h
//  BigeEarth
//
//  Created by 赵洪 on 2020/8/17.
//  Copyright © 2020 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BMEarthElementCoordModel.h"
NS_ASSUME_NONNULL_BEGIN
typedef void(^BMEarthLocationListenerCenterCoord)(BMEarthElementCoordModel * coord,float cameraHeight);
@interface BMEarthLocationListener : NSObject
@property (nonatomic)BMEarthLocationListenerCenterCoord coordBlock;
+ (instancetype)shared;
@end

NS_ASSUME_NONNULL_END
