#!/bin/bash

for f in *.c; do
    [ -f "$f" ] || continue
    yeni="${f%.c}.md"
    cp "$f" "$yeni"
    echo "$f -> $yeni"
done
