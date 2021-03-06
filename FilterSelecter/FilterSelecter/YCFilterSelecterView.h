//
//  YCFilterSelecterView.h
//  FilterSelecter
//
//  Created by Durand on 25/10/16.
//  Copyright © 2016年 com.Durand. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol YCFiltersCommonCellDelegate;

@interface YCFilterSelecterView : UICollectionView
@property (nonatomic,copy) NSArray *dataSourceArray;
@property (nonatomic,weak) id<YCFiltersCommonCellDelegate> selectHandler;
@end
