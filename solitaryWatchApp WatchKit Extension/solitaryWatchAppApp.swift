//
//  solitaryWatchAppApp.swift
//  solitaryWatchApp WatchKit Extension
//
//  Created by Bartek Kempa on 9/21/20.
//

import SwiftUI

@main
struct solitaryWatchAppApp: App {
    @SceneBuilder var body: some Scene {
        WindowGroup {
            NavigationView {
                ContentView()
            }
        }

        WKNotificationScene(controller: NotificationController.self, category: "myCategory")
    }
}
