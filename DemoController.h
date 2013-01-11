//  PARViewController
//  Copyright 2010 Mekentosj BV. All rights reserved.

#import "PARViewController.h"

@interface DemoController : PARViewController {
	IBOutlet NSTextField *line0;
	IBOutlet NSTextField *line1;
	IBOutlet NSTextField *line2;
	IBOutlet NSTextField *line3;
	NSUInteger selectedIndex;
	NSArray *allLines;
	NSUndoManager *undoManager;
}

@property NSUInteger selectedIndex;

- (IBAction)selectPrevious:(id)sender;
- (IBAction)selectNext:(id)sender;

- (NSUndoManager *)undoManager;

@end
