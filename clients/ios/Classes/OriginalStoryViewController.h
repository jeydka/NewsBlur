//
//  OriginalStoryViewController.h
//  NewsBlur
//
//  Created by Samuel Clay on 11/13/10.
//  Copyright 2010 NewsBlur. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseViewController.h"
//#import "SloppySwiper.h"
#import "NJKWebViewProgressView.h"
#import "NJKWebViewProgress.h"

@class NewsBlurAppDelegate;

@interface OriginalStoryViewController : BaseViewController
<UIActionSheetDelegate, UITextFieldDelegate, UIWebViewDelegate,
UIGestureRecognizerDelegate, NJKWebViewProgressDelegate> {
    
    NewsBlurAppDelegate *appDelegate;
    NSString *activeUrl;
    NSMutableArray *visitedUrls;
    UIWebView *webView;
    UIBarButtonItem *backBarButton;
    UILabel *titleView;
    UIBarButtonItem *closeButton;
    NJKWebViewProgress *progressProxy;
    NJKWebViewProgressView *progressView;
}

@property (nonatomic) IBOutlet NewsBlurAppDelegate *appDelegate;
@property (nonatomic) IBOutlet UIWebView *webView;
//@property (strong, nonatomic) SloppySwiper *swiper;
@property (nonatomic) NJKWebViewProgressView *progressView;

- (void)resetProgressBar;
- (void)loadInitialStory;
- (IBAction) doOpenActionSheet:(id)sender;
- (IBAction)loadAddress:(id)sender;
- (IBAction)webViewGoBack:(id)sender;
- (IBAction)webViewGoForward:(id)sender;
- (IBAction)webViewRefresh:(id)sender;
- (void)updateTitle:(UIWebView*)aWebView;
- (void)closeOriginalView;

@end
