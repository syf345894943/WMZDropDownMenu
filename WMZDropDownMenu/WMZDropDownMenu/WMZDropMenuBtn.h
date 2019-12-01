//
//  WMZDropMenuBtn.h
//  WMZDropDownMenu
//
//  Created by wmz on 2019/11/20.
//  Copyright © 2019 wmz. All rights reserved.
//

#import "WMZDropMenuTool.h"
#import "WMZDropDwonMenuConfig.h"
#import <objc/runtime.h>
NS_ASSUME_NONNULL_BEGIN

@interface WMZDropMenuBtn : UIButton
//选中type
@property(nonatomic,assign)NSInteger selectType;    //复选情况

@property(nonatomic,assign)MenuBtnPosition position;

@property(nonatomic,assign)BOOL click;
//初始标题
@property(nonatomic,copy)NSString *normalTitle;
//普通状态下的颜色
@property(nonatomic,strong)UIColor *normalColor;
//selected颜色
@property(nonatomic,strong)UIColor *selectColor;
//普通状态下的图片
@property(nonatomic,copy)NSString *normalImage;
//selected图片
@property(nonatomic,copy)NSString *selectImage;
//双重点击的图片
@property(nonatomic,copy)NSString *reSelectImage;
@end

@interface WMZDropMenuBtn (WMZLine)
@property (nonatomic, strong) UIView *line;
/**
 *  显示下划线
 */
- (void)showLine:(NSDictionary*)config;
/**
 *  隐藏下划线
 */
- (void)hidenLine;
@end

NS_ASSUME_NONNULL_END