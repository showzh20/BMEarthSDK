//
//  BMEarthLayerModel.h
//  BigeEarth
//
//  Created by 赵洪 on 2020/8/4.
//  Copyright © 2020 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BMEarthLayerModel : NSObject
/// 图层唯一标识符
@property (nonatomic) long mapLayerID;
/// 图层名称
@property (nonatomic) NSString *mapLayerName;
@end

NS_ASSUME_NONNULL_END
