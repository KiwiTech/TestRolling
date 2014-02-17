//
//  TestSKDetailViewController.h
//  TestForRollingBuild
//
//  Created by Vijay Deep Gupta on 2/17/14.
//  Copyright (c) 2014 Vijay Deep Gupta. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TestSKDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
