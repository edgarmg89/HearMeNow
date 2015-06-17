//
//  ViewController.h
//  HearMeNow
//
//  Created by Edgar Martinez on 17/06/15.
//  Copyright (c) 2015 Edgar Martinez. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController<AVAudioPlayerDelegate, AVAudioRecorderDelegate>

@property (weak, nonatomic) IBOutlet UIButton *recordButton;
@property (weak, nonatomic) IBOutlet UIButton *playButton;
- (IBAction)recordPressed:(id)sender;
- (IBAction)playPressed:(id)sender;

@end

