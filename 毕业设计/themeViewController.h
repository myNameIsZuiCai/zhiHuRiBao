//
//  themeViewController.h
//  毕业设计
//
//  Created by 啦啦啦啦 on 16/2/16.
//  Copyright © 2016年 啦啦啦啦. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "themeEntity.h"
@interface themeViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>{
    UITableView *_tableView;
    NSMutableDictionary *_dic;
    NSMutableArray *_titleArr;
    NSString *_backGround;
    
    NSMutableArray *_idArr;
    UILabel *_lable;
}
@property(nonatomic,strong) themeEntity *themeasd;

-(void)getTheme:(NSString*)para;
-(void)getTitle:(NSString*)para;
-(void)resetNavigationBar;
@end
