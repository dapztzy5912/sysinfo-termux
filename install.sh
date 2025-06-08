#!/bin/bash

echo "Menginstall dependensi..."
pkg install clang -y

echo "Mengompilasi info.c..."
clang info.c -o sysinfo

echo "Menjalankan tools..."
chmod +x sysinfo
./sysinfo
