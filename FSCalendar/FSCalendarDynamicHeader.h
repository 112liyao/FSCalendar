//
//  FSCalendarDynamicHeader.h
//  Pods
//
//  Created by DingWenchao on 6/29/15.
//
//  动感头文件，仅供框架内部使用。
//  Private header, don't use it.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import "FSCalendar.h"
#import "FSCalendarCell.h"
#import "FSCalendarHeaderView.h"
#import "FSCalendarStickyHeader.h"
#import "FSCalendarCollectionView.h"
#import "FSCalendarCollectionViewLayout.h"
#import "FSCalendarScopeHandle.h"
#import "FSCalendarCalculator.h"
#import "FSCalendarAnimator.h"
#import "FSCalendarDelegationProxies.h"

@interface FSCalendar (Dynamic)

@property (readonly, nonatomic) FSCalendarCollectionView *collectionView;
@property (readonly, nonatomic) FSCalendarScopeHandle *scopeHandle;
@property (readonly, nonatomic) FSCalendarCollectionViewLayout *collectionViewLayout;
@property (readonly, nonatomic) FSCalendarAnimator *animator;
@property (readonly, nonatomic) FSCalendarCalculator *calculator;
@property (readonly, nonatomic) BOOL floatingMode;
@property (readonly, nonatomic) NSArray *visibleStickyHeaders;
@property (readonly, nonatomic) CGFloat preferredHeaderHeight;
@property (readonly, nonatomic) CGFloat preferredWeekdayHeight;
@property (readonly, nonatomic) CGFloat preferredRowHeight;
@property (readonly, nonatomic) CGFloat preferredPadding;
@property (readonly, nonatomic) UIView *bottomBorder;

@property (readonly, nonatomic) NSCalendar *gregorian;
@property (readonly, nonatomic) NSDateComponents *components;
@property (readonly, nonatomic) NSDateFormatter *formatter;

@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIView *daysContainer;

@property (assign, nonatomic) BOOL needsAdjustingMonthPosition;
@property (assign, nonatomic) BOOL needsAdjustingViewFrame;

- (void)invalidateHeaders;

- (BOOL)isPageInRange:(NSDate *)page;
- (BOOL)isDateInRange:(NSDate *)date;

- (CGSize)sizeThatFits:(CGSize)size scope:(FSCalendarScope)scope;

@end

@interface FSCalendarAppearance (Dynamic)

@property (readwrite, nonatomic) FSCalendar *calendar;

@property (readonly, nonatomic) NSDictionary *backgroundColors;
@property (readonly, nonatomic) NSDictionary *titleColors;
@property (readonly, nonatomic) NSDictionary *subtitleColors;
@property (readonly, nonatomic) NSDictionary *borderColors;

@end

@interface FSCalendarDataSourceProxy()<FSCalendarDataSource>
@end
@interface FSCalendarDelegateProxy()<FSCalendarDelegate,FSCalendarDelegateAppearance>
@end


