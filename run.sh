#!/bin/bash

{
    cmake --build ./build
    ./build/gaaa
} || {
    ./build.sh
    cmake --build ./build
    ./build/gaaa
}
