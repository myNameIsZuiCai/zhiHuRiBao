//
//  leftSortViewController.h
//  毕业设计
//
//  Created by 啦啦啦啦 on 16/1/13.
//  Copyright © 2016年 啦啦啦啦. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LeftSlideViewController.h"
#import "AppDelegate.h"
@interface leftSortViewController : UIViewController
{
    NSMutableDictionary *_themeDic;
    NSMutableArray *_other;
  
    
    NSInteger q;
    UITableView *_tableView;
    UIButton *dayOrNightImage;
    UIButton *dayOrNightTitle;
    UIButton *setImage;
    UIButton *setTitle;
    NSMutableArray *_themeArr;
    AppDelegate *_appDele;
    

    UIButton *login;
    UIButton *collectionText;
    UIButton *downText;
}
@property(nonatomic,strong) NSString *nid;
@property(nonatomic,strong) NSString *name;
@property(nonatomic,strong) NSString *thumbnail;
@property(nonatomic,strong) NSString *descript;
@property(strong,nonatomic)LeftSlideViewController* leftSlideVC;
@property (strong, nonatomic) UINavigationController *mainNavigationController;
@property (nonatomic,strong) UITableView *tableview;
@end
