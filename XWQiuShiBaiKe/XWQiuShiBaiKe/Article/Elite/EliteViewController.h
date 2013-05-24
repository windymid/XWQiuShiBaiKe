//
//  EliteViewController.h
//  XWQSBK
//
//  Created by Ren XinWei on 13-5-3.
//  Copyright (c) 2013年 renxinwei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Toolkit.h"

@interface EliteViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, EGORefreshTableHeaderDelegate, LoadMoreFooterViewDelegate, ASIHTTPRequestDelegate, XWSliderSwitchDelegate, QiuShiCellDelegate>
{
    ASIHTTPRequest *_eliteRequest;
    EGORefreshTableHeaderView *_refreshHeaderView;
    LoadMoreFooterView *_loadMoreFooterView;
    RequestType _requestType;
    QiuShiType _qiushiType;
    XWSliderSwitch *_sliderSwitch;
    
    NSMutableArray *_eliteDayArray;
    NSMutableArray *_eliteWeekArray;
    NSMutableArray *_eliteMonthArray;
    NSInteger _currentDayPage;
    NSInteger _currentWeekPage;
    NSInteger _currentMonthPage;
    CGPoint _eliteDayPoint;
    CGPoint _eliteWeekPoint;
    CGPoint _eliteMonthPoint;
    BOOL _reloading;
    BOOL _dayLoaded;
    BOOL _weekLoaded;
    BOOL _monthLoaded;
}

@property (nonatomic) BOOL isLoaded;
@property (retain, nonatomic) IBOutlet UITableView *eliteTableView;
@property (retain, nonatomic) IBOutlet UIButton *sideButton;
@property (retain, nonatomic) IBOutlet UIButton *postButton;

- (IBAction)sideButtonClicked:(id)sender;
- (IBAction)postButtonClicked:(id)sender;
@end