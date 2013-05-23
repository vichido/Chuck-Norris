//
//  CNMasterViewController.h
//  Chuck
//
//  Created by Cadengo, John on 5/23/13.
//  Copyright (c) 2013 Fishbowl. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface CNMasterViewController : UIViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) IBOutlet UILabel *mainLabel;
@property (strong, nonatomic) IBOutlet UIButton *jokeButton;
@property (strong, nonatomic) IBOutlet UIActivityIndicatorView *activityView;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (void) fetchJoke;

@end
