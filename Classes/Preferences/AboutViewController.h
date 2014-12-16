// AboutViewController.h
// MobileTerminal

#import <UIKit/UIKit.h>


@interface AboutViewController : UIViewController {
@private
  UILabel* versionLabel;
}

@property(nonatomic, retain) IBOutlet UILabel* versionLabel;

- (IBAction)openDonate:(id)sender;
- (IBAction)openTwitter:(id)sender;

@end
