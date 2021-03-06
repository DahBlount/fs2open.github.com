#!/bin/sh

echo "Building configuration $1"

mkdir -p build/alpine
cd build/alpine

export CXXFLAGS="-m64 -mtune=generic -mfpmath=sse -msse -msse2 -pipe -Wno-unknown-pragmas"
export CFLAGS="-m64 -mtune=generic -mfpmath=sse -msse -msse2 -pipe -Wno-unknown-pragmas"

cmake -G Ninja -DCMAKE_INSTALL_PREFIX=/install -DFSO_BUILD_APPIMAGE=ON -DFSO_BUILD_WITH_FFMPEG=OFF -DCMAKE_BUILD_TYPE=$1 -DFSO_RELEASE_LOGGING=ON ../..

ninja
ninja install
