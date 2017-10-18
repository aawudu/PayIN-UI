#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.2.2/targets/android/run.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Android Studio"
    open -a"Android Studio" "./"
    exit $?
    ;;
uninstall)
    echo "Uninstalling com.apps.dynamictabbar"
    /Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe adb uninstall "com.apps.dynamictabbar"
    exit $?
    ;;
esac

/Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe launch-apk "dynamic-tab-bar.apk" \
    --package=com.apps.dynamictabbar \
    --activity=dynamictabbar \
    --sym-dir="app/src/main/.uno" \
    "$@"
