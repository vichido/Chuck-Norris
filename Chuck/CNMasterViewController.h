//
//  CNMasterViewController.h
//  Chuck
//
//  Created by Cadengo, John on 5/23/13.
//  Copyright (c) 2013 Fishbowl. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CNDetailViewController;

#import <CoreData/CoreData.h>

@interface CNMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) CNDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
