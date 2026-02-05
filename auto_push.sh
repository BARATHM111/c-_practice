#!/bin/bash

FILE="$1"
EXE="${FILE%.*}.exe"

echo "Compiling $FILE..."
g++ "$FILE" -o "$EXE"

if [ $? -eq 0 ]; then
    echo "Build successful. Running..."
    ./"$EXE"

    echo "Pushing to GitHub..."
    git add "$FILE" .gitignore auto_push.sh

    git commit -m "Auto push: $(date '+%Y-%m-%d %H:%M:%S')"
    git push origin main

    echo "Push complete."
else
    echo "Build failed. Not pushing."
fi
