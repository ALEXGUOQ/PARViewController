//  AppDelegate.h
//  MTViewController
//  Copyright 2010 Mekentosj BV. All rights reserved.

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end