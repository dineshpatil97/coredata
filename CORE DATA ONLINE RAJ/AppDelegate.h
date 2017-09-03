//
//  AppDelegate.h
//  CORE DATA ONLINE RAJ
//
//  Created by Student P_08 on 30/07/17.
//  Copyright © 2017 RAJ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

