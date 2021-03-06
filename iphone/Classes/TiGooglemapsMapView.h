/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2015 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiUIView.h"
#import <GoogleMaps/GoogleMaps.h>
#import "TiGooglemapsMapView.h"

@interface TiGooglemapsMapView : TiUIView<GMSMapViewDelegate>

@property(nonatomic,retain) GMSMapView *mapView;

@end
