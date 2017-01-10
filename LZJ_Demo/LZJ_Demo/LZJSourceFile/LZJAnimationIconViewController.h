//
//  LZJAnimationIconViewController.h
//  LZJ_Demo
//
//  Created by Jian on 2016/12/29.
//  Copyright © 2016年 tarena. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LZJAnimationIconViewController : UIViewController

/**tableView**/
@property (nonatomic) UITableView* tableView;

-(instancetype)initWithTopViewName:(NSString *)imageName tableHeaderHeight:(NSInteger)headerHeight iconImageName:(NSString *)iconName iconSize:(CGFloat)iconSize iconHeight:(CGFloat)iconHeight;

@end
