//
//  aboutCommentTableViewCell.h
//  毕业设计
//
//  Created by 啦啦啦啦 on 16/1/29.
//  Copyright © 2016年 啦啦啦啦. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface aboutCommentTableViewCell : UITableViewCell
{
    IBOutlet UILabel *_userName;
    IBOutlet UILabel *_contentLable;
    IBOutlet UILabel *_likesLable;
    IBOutlet UILabel *_timeLable;
    IBOutlet UIImageView *_touxiang;
    IBOutlet UIButton *_dianzan;
    BOOL _flag;
    NSInteger _totalLikes;
}

-(void)UpdateNewCell:(NSMutableDictionary *)sEntity IndexPath:(NSIndexPath *)nIndexPath;
@end
