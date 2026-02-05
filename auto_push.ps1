#!/bin/bash

FILE="$1"
EXE="${FILE%.*}.exe"

echo "Compiling $FILE..."
g++ "$FILE" -o "$EXE"

if [ $? -eq 0 ]; then
    echo "Build success. Running program..."
    ./"$EXE"

    echo "Staging changes..."
    git add .

    # Check if anything changed before committing
    if git diff --cached --quiet; then
        echo "No code changes to push."
        exit 0
    fi

    echo "Pushing to GitHub..."
    git commit -m "Auto push: $(date '+%Y-%m-%d %H:%M:%S')"
    git push origin main

    echo "Push complete."
else
    echo "Build failed. Not pushing."
fi
