//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSMutableDictionary, NSString;

@interface YSFHTMLWriter : NSObject
{
    NSAttributedString *_attributedString;
    NSString *_HTMLString;
    double _textScale;
    _Bool _useAppleConvertedSpace;
    NSMutableDictionary *_styleLookup;
    NSString *_paragraphTagName;
}

@property(retain, nonatomic) NSString *paragraphTagName; // @synthesize paragraphTagName=_paragraphTagName;
@property(nonatomic) _Bool useAppleConvertedSpace; // @synthesize useAppleConvertedSpace=_useAppleConvertedSpace;
@property(nonatomic) double textScale; // @synthesize textScale=_textScale;
@property(readonly, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (void).cxx_destruct;
- (id)HTMLFragment;
- (id)HTMLString;
- (void)_buildOutputAsHTMLFragment:(_Bool)arg1;
- (void)_buildOutput;
- (id)_tagRepresentationForListStyle:(id)arg1 closingTag:(_Bool)arg2 listPadding:(double)arg3 inlineStyles:(_Bool)arg4;
- (id)_styleClassForElement:(id)arg1 style:(id)arg2;
- (id)_styleArrayForElement:(id)arg1;
- (id)initWithAttributedString:(id)arg1;

@end

