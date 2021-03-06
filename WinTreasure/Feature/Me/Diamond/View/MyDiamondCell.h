//
//  MyBonusCell.h
//  WinTreasure
//
//  Created by Apple on 16/7/4.
//  Copyright © 2016年 linitial. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MyDiamondModel.h"

@interface MyDiamondCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *diamondLabel;

@property (weak, nonatomic) IBOutlet UILabel *timeLabel;

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;

@property (nonatomic, strong) MyDiamondModel *model;

+ (instancetype)cellWithTableView:(UITableView *)tableview;

@end
