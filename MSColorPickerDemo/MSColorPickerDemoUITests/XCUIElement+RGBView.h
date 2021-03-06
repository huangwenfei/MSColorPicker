//
// XCUIElement+RGBView.h
//
// Created by Maksym Shcheglov on 2016-01-31.
// Copyright (c) 2016 Maksym Shcheglov.
// License: http://opensource.org/licenses/MIT
//

#import <XCTest/XCTest.h>


@interface XCUIElement (RGBView)

- (XCUIElement *)rgbColorSample;
- (NSArray<XCUIElement *> *)rgbColorComponents;
- (NSArray<XCUIElement *> *)rgbSliders;
- (NSArray<XCUIElement *> *)rgbLabels;

@end
