//
//  QMUIGridView.h
//  qmui
//
//  Created by MoLice on 15/1/30.
//  Copyright (c) 2015年 QMUI Team. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  用于做九宫格布局，根据指定的列数和行高，把每个 item 拉伸到相同的大小。
 *
 *  支持在 item 和 item 之间显示分隔线，分隔线支持虚线。
 *
 *  注意分隔线是占位的，把 item 隔开，而不是盖在某个 item 上。
 */
@interface QMUIGridView : UIView

/// 指定要显示的列数，默认为 0
@property(nonatomic, assign) NSInteger columnCount;

/// 指定每一行的高度，默认为 0
@property(nonatomic, assign) CGFloat rowHeight;

/// 指定 item 之间的分隔线宽度，默认为 0
@property(nonatomic, assign) CGFloat separatorWidth;

/// 指定 item 之间的分隔线颜色，默认为 UIColorSeparator
@property(nonatomic, strong) UIColor *separatorColor;

/// item 之间的分隔线是否要用虚线显示，默认为 NO
@property(nonatomic, assign) BOOL separatorDashed;

- (instancetype)initWithColumn:(NSInteger)column rowHeight:(CGFloat)rowHeight;
@end
