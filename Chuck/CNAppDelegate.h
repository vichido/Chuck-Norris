//
//  CNAppDelegate.h
//  Chuck
//
//  Created by Cadengo, John on 5/23/13.
//  Copyright (c) 2013 Fishbowl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CNAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
