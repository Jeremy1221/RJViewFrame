//
//  UIBarButtonItem+JER_Custom.h
//  Test
//
//  Created by super on 2018/11/19.
//  Copyright © 2018 Jeremy. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIBarButtonItem (JER_Custom)

@property (nonatomic, copy) void(^actionBlock)(id);

@end

NS_ASSUME_NONNULL_END
