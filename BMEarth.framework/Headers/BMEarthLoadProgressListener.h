//
//  BMEarthLoadProgressListener.h
//  BigeEarth
//
//  Created by 赵洪 on 2021/8/17.
//  Copyright © 2021 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^BMEarthLoadProgressListenerReceiveContentCount)(int count);
typedef void(^BMEarthLoadProgressListenerDidLoadContent)(void);
typedef void(^BMEarthLoadProgressListenerEndLoading)(bool isSuccess,long elementID);
@interface BMEarthLoadProgressListener : NSObject
@property (nonatomic)BMEarthLoadProgressListenerReceiveContentCount countBlock;
@property (nonatomic)BMEarthLoadProgressListenerDidLoadContent loadBlock;
@property (nonatomic)BMEarthLoadProgressListenerEndLoading endBlock;
+ (instancetype)shared;
@end

