//
//  AppDelegate.h
//  BookShop
//
//  Created by FanLee on 05.11.14.
//  Copyright (c) 2014 Fan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "User.h"



@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic,strong) User* aplicationUser;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end

