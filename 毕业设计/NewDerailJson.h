//
//  NewDerailJson.h
//  ZhiHu
//
//  Created by 啦啦啦啦0 on 16/1/15.
//  Copyright © 2016年 啦啦啦啦0. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "NewDerailModel.h"
@interface NewDerailJson : JSONModel
@property(nonatomic,strong) NSMutableArray *comments;

+(NSMutableArray *)ParseNewsExtra:(NSMutableArray *)NewExtra;
@end
