//
// Wire
// Copyright (C) 2016 Wire Swiss GmbH
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see http://www.gnu.org/licenses/.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface WireStyleKit : NSObject

// iOS Controls Customization Outlets
@property(strong, nonatomic) IBOutletCollection(NSObject) NSArray* ongoingcallTargets;
@property(strong, nonatomic) IBOutletCollection(NSObject) NSArray* shieldverifiedTargets;
@property(strong, nonatomic) IBOutletCollection(NSObject) NSArray* shieldnotverifiedTargets;

// Colors
+ (UIColor*)fillColor10;

// Drawing Methods
+ (void)drawIcon_0x100_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x102_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x104_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x105_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x120_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x125_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x137_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x143_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x144_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x145_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x150_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x158_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x162_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x177_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x193_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x194_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x195_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x197_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x205_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x212_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x198_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x160_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x101_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x215_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x216_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x172_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x217_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x117_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x179_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x219_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x116_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x126_24ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x128_8ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x126_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x165_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x187_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x163_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x221_32ptWithColor: (UIColor*)color;
+ (void)drawInviteWithColor: (UIColor*)color;
+ (void)drawIcon_0x222_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x123_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x128_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x113_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x121_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x111_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x226_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x131_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x164_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x132_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x1420_28ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x110_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x103_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x211_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x1000_28ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x142_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x152_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x185_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x146_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x227_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x159_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x228_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x154_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x148_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x229_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x230_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x149_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x240_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x244_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x246_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x245_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x242_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x247_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x243_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x139_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x186_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x231_32ptWithColor: (UIColor*)color;
+ (void)drawIcon_0x232_32ptWithColor: (UIColor*)color;
+ (void)drawMissedcallWithAccent: (UIColor*)accent;
+ (void)drawYoutubeWithColor: (UIColor*)color;
+ (void)drawMissedcalllastWithAccent: (UIColor*)accent;
+ (void)drawVimeoWithColor: (UIColor*)color;
+ (void)drawOngoingcall;
+ (void)drawJoinongoingcallWithColor: (UIColor*)color;
+ (void)drawLogoWithColor: (UIColor*)color;
+ (void)drawWireWithColor: (UIColor*)color;
+ (void)drawShieldverified;
+ (void)drawShieldnotverified;
+ (void)drawMentionsWithFrame: (CGRect)frame backgroundColor: (UIColor*)backgroundColor;
+ (void)drawTabWithColor: (UIColor*)color;

// Generated Images
+ (UIImage*)imageOfIcon_0x100_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x102_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x104_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x120_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x125_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x137_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x143_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x144_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x145_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x150_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x158_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x162_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x177_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x193_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x194_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x195_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x197_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x205_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x212_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x198_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x217_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x117_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x126_24ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x128_8ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x163_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x221_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfInviteWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x123_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x128_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x113_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x121_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x111_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x226_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x164_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x1420_28ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x110_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x103_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x211_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x1000_28ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x142_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x152_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x146_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x227_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x159_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x228_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x154_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x148_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x229_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x230_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x149_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x240_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x244_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x246_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x245_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x242_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x247_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x243_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x139_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x231_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfIcon_0x232_32ptWithColor: (UIColor*)color;
+ (UIImage*)imageOfMissedcallWithAccent: (UIColor*)accent;
+ (UIImage*)imageOfYoutubeWithColor: (UIColor*)color;
+ (UIImage*)imageOfMissedcalllastWithAccent: (UIColor*)accent;
+ (UIImage*)imageOfVimeoWithColor: (UIColor*)color;
+ (UIImage*)imageOfOngoingcall;
+ (UIImage*)imageOfJoinongoingcallWithColor: (UIColor*)color;
+ (UIImage*)imageOfLogoWithColor: (UIColor*)color;
+ (UIImage*)imageOfWireWithColor: (UIColor*)color;
+ (UIImage*)imageOfShieldverified;
+ (UIImage*)imageOfShieldnotverified;
+ (UIImage*)imageOfTabWithColor: (UIColor*)color;

@end
