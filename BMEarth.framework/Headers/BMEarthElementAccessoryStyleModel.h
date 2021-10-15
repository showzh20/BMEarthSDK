//
//  BMEarthElementAccessoryStyleModel.h
//  BigeEarth
//
//  Created by 赵洪 on 2020/9/27.
//  Copyright © 2020 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BMEarthElementAccessoryStyleModel : NSObject<NSSecureCoding>
/// 附件
@property (nonatomic)NSMutableArray<NSData *> *otherDatas;
/// 附件名
@property (nonatomic)NSMutableArray<NSString *> *otherDataNams;

@property (nonatomic)NSString *otherDataNameString;
@end

NS_ASSUME_NONNULL_END
