# Copyright (c) 2022 Innodisk crop.
# 
# This software is released under the MIT License.
# https://opensource.org/licenses/MIT

rm -rf _build
mkdir _build && cd _build
cmake ..
make 
cp showphc ../