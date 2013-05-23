//
//  CNMasterViewController.m
//  Chuck
//
//  Created by Cadengo, John on 5/23/13.
//  Copyright (c) 2013 Fishbowl. All rights reserved.
//

#import "CNMasterViewController.h"


@implementation CNMasterViewController

@synthesize activityView = _activityView;

#pragma mark -

- (void)fetchJoke
{
    [self.activityView startAnimating];
    
    [[RKObjectManager sharedManager] getObjectsAtPath:@"" parameters:@{@"limitTo": @"[nerdy]"} success:^(RKObjectRequestOperation *operation, RKMappingResult *mappingResult) {
        
        [self.mainLabel setText:[[[mappingResult firstObject] valueForKey:@"jokeText"] description]];
        
        [self.activityView stopAnimating];
    } failure:^(RKObjectRequestOperation *operation, NSError *error) {
        [self.activityView stopAnimating];
    }];
}

#pragma mark -

- (void)awakeFromNib
{
    if ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad) {
        //self.clearsSelectionOnViewWillAppear = NO;
        self.contentSizeForViewInPopover = CGSizeMake(320.0, 600.0);
    }
    [super awakeFromNib];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    [self.activityView setHidesWhenStopped:true];
    
    [self fetchJoke];
    
    [self.jokeButton addTarget:self
                        action:@selector(fetchJoke)
              forControlEvents:UIControlEventTouchUpInside];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



@end
