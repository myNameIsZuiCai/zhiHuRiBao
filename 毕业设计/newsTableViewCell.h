//
//  newsTableViewCell.h
//  毕业设计
//
//  Created by 啦啦啦啦 on 16/1/10.
//  Copyright © 2016年 啦啦啦啦. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "StoriesEntity.h"
@interface newsTableViewCell : UITableViewCell{
    IBOutlet UILabel *_newsLable;
    IBOutlet UILabel *_dateLable;
    IBOutlet UIImageView *_imageView;
}
-(void) updateCell:(StoriesEntity *) sEntity date:(NSString*) time;

@end
