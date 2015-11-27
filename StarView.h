//
//  StarView.h
//  BVMovie
//
//  Created by wangjin on 15/11/23.
//  Copyright (c) 2015年 wangjin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface StarView : UIView

@property(nonatomic, retain)NSNumber *ratingFinal;

-(instancetype)initWithFrame:(CGRect)frame ratingFinal:(NSNumber *)ratingFinal;

@end
