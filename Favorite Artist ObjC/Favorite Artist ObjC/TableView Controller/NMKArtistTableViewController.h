//
//  NMKArtistTableViewController.h
//  Favorite Artist ObjC
//
//  Created by Niranjan Kumar on 1/24/20.
//  Copyright © 2020 Nar Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>

@class NMKArtistController;

@interface NMKArtistTableViewController : UITableViewController

@property (nonatomic, readonly) NMKArtistController *artistController;

@end
