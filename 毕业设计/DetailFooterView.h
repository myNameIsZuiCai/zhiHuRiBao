//
//  DetailFooterView.h
//  WBZhiHuDailyPaper
//
//  Created by caowenbo on 15/12/24.
//  Copyright © 2015年 曹文博. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIView+Extension.h"
@interface DetailFooterView : UIView

+ (DetailFooterView *)attachObserveToScrollView:(UIScrollView *)scrollView
                                         target:(id)target
                                         action:(SEL)action;

@end
