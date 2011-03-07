#!/bin/sh
#arg 1 : path to APK
adb install -r $@
adb shell am start -a android.intent.action.MAIN -c android.intent.category.LAUNCHER -n net.fhtagn.native/android.app.NativeActivity
