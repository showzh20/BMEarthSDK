//
//  BMEarthInfoListener.h
//  BigeEarth
//
//  Created by 赵洪 on 2020/8/5.
//  Copyright © 2020 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BMEarthElementModel.h"
NS_ASSUME_NONNULL_BEGIN
typedef void(^BMEarthInfoListenerReceivedInfo)(BMEarthElementModel * model);

@interface BMEarthInfoListener : NSObject
@property (nonatomic)NSMutableDictionary *blocksDict;

+ (instancetype)shared;

- (void)registerListenerWithKey:(NSString *)key listener:(BMEarthInfoListenerReceivedInfo)listener;
@end

NS_ASSUME_NONNULL_END
