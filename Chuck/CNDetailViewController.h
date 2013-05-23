//
//  CNDetailViewController.h
//  Chuck
//
//  Created by Cadengo, John on 5/23/13.
//  Copyright (c) 2013 Fishbowl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CNDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
