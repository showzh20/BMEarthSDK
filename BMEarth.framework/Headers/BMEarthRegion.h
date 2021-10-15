//
//  BMEarthRegion.h
//  BigeEarth
//
//  Created by 赵洪 on 2021/1/18.
//  Copyright © 2021 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BMEarthRegion : NSObject
/// 区域ID
@property (nonatomic)NSString *regionID;
/// 父级区域ID
@property (nonatomic)NSString *parentID;
/// 区域名称
@property (nonatomic)NSString *name;
@end

NS_ASSUME_NONNULL_END
