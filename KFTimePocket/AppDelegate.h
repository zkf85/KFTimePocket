//
//  AppDelegate.h
//  KFTimePocket
//
//  Created by Kefeng Zhu on 16/12/2017.
//  Copyright © 2017 Kefeng Zhu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

