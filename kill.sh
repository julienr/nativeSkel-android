#!/bin/sh
adb shell kill `adb shell ps | awk '/net.fhtagn.native/ {print $2}'`
