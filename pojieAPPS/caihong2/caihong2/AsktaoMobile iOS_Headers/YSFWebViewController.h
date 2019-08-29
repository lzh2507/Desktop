//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIWebViewDelegate-Protocol.h"
#import "YSF_NJKWebViewProgressDelegate-Protocol.h"

@class NSString, UIImage, UIView, UIWebView, YSF_NJKWebViewProgress, YSF_NJKWebViewProgressView;

@interface YSFWebViewController : UIViewController <UIWebViewDelegate, YSF_NJKWebViewProgressDelegate>
{
    YSF_NJKWebViewProgress *_progressProxy;
    UIWebView *_webView;
    YSF_NJKWebViewProgressView *_progressView;
    NSString *_urlString;
    UIImage *_errorImage;
    UIView *_netErrorView;
    long long _currentErrorCount;
}

@property(nonatomic) long long currentErrorCount; // @synthesize currentErrorCount=_currentErrorCount;
@property(retain, nonatomic) UIView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(retain, nonatomic) UIImage *errorImage; // @synthesize errorImage=_errorImage;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(nonatomic) __weak YSF_NJKWebViewProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) YSF_NJKWebViewProgress *progressProxy; // @synthesize progressProxy=_progressProxy;
- (void).cxx_destruct;
- (void)tapNetworkView;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewProgress:(id)arg1 updateProgress:(float)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadWebView;
- (void)viewDidLoad;
- (id)initWithUrl:(id)arg1 errorImage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

