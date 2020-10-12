//
//  UITextView+KJPlaceHolder.h
//  CategoryDemo
//
//  Created by 杨科军 on 2018/7/12.
//  Copyright © 2018年 杨科军. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@protocol KJTextViewExchangeMethodProtocol2 <NSObject>
@required
/// 开启方法交换
+ (void)kj_openExchangeMethod;
@end
@interface UITextView (KJPlaceHolder)<KJTextViewExchangeMethodProtocol2>

@property(nonatomic,copy)NSString *kj_PlaceHolder;
/// placeHolder颜色
@property(nonatomic,strong)UIColor *kj_PlaceHolderColor;

@end
NS_ASSUME_NONNULL_END
