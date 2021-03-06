#import <UIKit/UIKit.h>
#import "HttpClient.h"

@interface SiteViewController : UIViewController <UIWebViewDelegate, UIActionSheetDelegate> {
	UIWebView *webView;
    UILabel *titleView;
	UIBarButtonItem *backButton;
	UIBarButtonItem *forwardButton;
	
	NSString *pageURL;
	NSString *lastPageURL;
	BOOL loadFinishedSuccesefully;
}

@property (nonatomic, retain) NSString *pageURL;
@property (nonatomic, retain) NSString *lastPageURL;

@end
