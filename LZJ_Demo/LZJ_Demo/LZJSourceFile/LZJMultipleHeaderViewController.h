//
//  LZJMultipleHeaderViewController.h
//  LZJ_Demo
//
//  Created by Jian on 2016/12/27.
//  Copyright © 2016年 tarena. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LZJMultipleHeaderViewController : UIViewController

/**tableView**/
@property (nonatomic) UITableView* tableView;

-(instancetype)initWithTopViewName:(NSString *)imageName andtableHeaderHeight:(NSInteger)headerHeight;

@end
