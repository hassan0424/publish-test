// swift-tools-version: 5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "publish-test",
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "ShopLiveCorePlayerSDK",
            targets: ["ShopLiveCorePlayer"]),
        
        .library(
            name: "ShopLiveHLSPlayerSDK",
            targets: ["ShopLiveHLSPlayer"]),
        
        .library(name: "ShopLiveWebRTCPlayerSDK",
                 targets: ["ShopLiveWebRTCPlayer"]),
        
        .library(name: "ShopLiveWebRTCHelper",
                 targets: ["ShopLiveWebRTCHelperSDK"]),
        
        .library(name: "WebRTC",
                 targets: ["WebRTC"]),
        .library(
            name: "ShopliveSDKCommon",
            targets: ["ShopliveSDKCommon"]),
    ],
    targets: [
        .binaryTarget(name: "ShopLiveCorePlayer",
                      path: "./Frameworks/ShopLiveCorePlayerSDK.xcframework"),
        .binaryTarget(name: "ShopLiveHLSPlayer",
                      path: "./Frameworks/ShopLiveHLSPlayerSDK.xcframework"),
        .binaryTarget(name: "ShopLiveWebRTCPlayerSDK",
                      path: "./Frameworks/ShopLiveWebRTCHelperSDK.xcframework"),
        .binaryTarget(name: "ShopLiveWebRTCHelperSDK",
                      path: "./Frameworks/ShopLiveSDK.xcframework"),
        .binaryTarget(name: "ShopLiveShortformSDK",
                      path: "./Frameworks/ShopLiveShortformSDK.xcframework"),
        .binaryTarget(name: "ShopliveSDKCommon",
                      path: "./Frameworks/ShopliveSDKCommon.xcframework"),
        .binaryTarget(name: "WebRTC",
                      path: "./Frameworks/WebRTC.xcframework")
        
    ]
)
