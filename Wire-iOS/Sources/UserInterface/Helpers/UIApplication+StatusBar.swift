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


import UIKit

public extension UIApplication {
    
    @objc public func wr_updateStatusBarForCurrentControllerAnimated(animated: Bool) {
        let statusBarHidden: Bool
        let statusBarStyle: UIStatusBarStyle
        
        if let topContoller = self.wr_topmostController() {
            statusBarHidden = topContoller.prefersStatusBarHidden()
            statusBarStyle = topContoller.preferredStatusBarStyle()
        }
        else {
            statusBarHidden = true
            statusBarStyle = .LightContent
        }
        
        if (self.statusBarHidden != statusBarHidden) {
            self.setStatusBarHidden(statusBarHidden, withAnimation: animated ? .Fade : .None)
        }
        
        if self.statusBarStyle != statusBarStyle {
            self.setStatusBarStyle(statusBarStyle, animated: animated)
        }
    }
    
    private func wr_topmostController() -> UIViewController? {
        let orderedWindows = self.windows.sort { win1, win2 in
            win1.windowLevel > win2.windowLevel
        }
        
        let visibleWindow = orderedWindows.filter {
            guard var controller = $0.rootViewController else {
                return false
            }
            
            if let notificationWindowRootController = controller as? NotificationWindowRootViewController {
                controller = notificationWindowRootController.voiceChannelController
            }
            
            return controller.view.hidden == false && controller.view.alpha != 0
        }
        
        guard let window = visibleWindow.last,
            var topController = window.rootViewController else {
                return .None
        }
        
        while let presentedController = topController.presentedViewController
                where presentedController.modalPresentationStyle == .FullScreen {
            topController = presentedController
        }
        
        return topController
    }
}

