//
//  thenemTableViewCell.h
//  毕业设计
//
//  Created by 啦啦啦啦 on 16/2/16.
//  Copyright © 2016年 啦啦啦啦. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface thenemTableViewCell : UITableViewCell
{
    IBOutlet UILabel *_lable;
    IBOutlet UIImageView *_newsImage;
}

-(void)updateCellWithPic:(NSMutableDictionary*)picture;
-(void)updateCell:(NSMutableDictionary*)title;
@end
