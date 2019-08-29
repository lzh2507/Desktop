//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AVCaptureAudioDataOutputSampleBufferDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "YSFCameraViewDelegate-Protocol.h"

@class AVCaptureConnection, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, NSString, NSURL, YSFCameraManager, YSFCameraView, YSFMotionManager;
@protocol YSFCameraViewControllerDelegate;

@interface YSFCameraViewController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, YSFCameraViewDelegate>
{
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_deviceInput;
    AVCaptureConnection *_videoConnection;
    AVCaptureConnection *_audioConnection;
    AVCaptureVideoDataOutput *_videoOutput;
    NSURL *_videoDataURL;
    id <YSFCameraViewControllerDelegate> _delegate;
    NSString *_videoDataPath;
    YSFCameraView *_cameraView;
    AVCaptureDevice *_activeCamera;
    AVCaptureDevice *_inactiveCamera;
    YSFCameraManager *_cameraManager;
    YSFMotionManager *_motionManager;
}

@property(retain, nonatomic) YSFMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) YSFCameraManager *cameraManager; // @synthesize cameraManager=_cameraManager;
@property(retain, nonatomic) AVCaptureDevice *inactiveCamera; // @synthesize inactiveCamera=_inactiveCamera;
@property(retain, nonatomic) AVCaptureDevice *activeCamera; // @synthesize activeCamera=_activeCamera;
@property(retain, nonatomic) YSFCameraView *cameraView; // @synthesize cameraView=_cameraView;
@property(copy, nonatomic) NSString *videoDataPath; // @synthesize videoDataPath=_videoDataPath;
@property(nonatomic) __weak id <YSFCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getMilliSecondTimeStamp;
- (void)showToast:(id)arg1;
- (void)sendVideoData;
- (void)backToInitCameraView;
- (void)flipCamera;
- (void)closeCameraView;
- (void)stopRecordVideoWithTime:(double)arg1;
- (void)startRecordVideo;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)stopCaptureSession;
- (void)startCaptureSession;
- (long long)currentVideoOrientation;
- (id)cameraWithPosition:(long long)arg1;
- (void)setupSessionOutputs:(id *)arg1;
- (void)setupSessionInputs:(id *)arg1;
- (void)setupSession:(id *)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

