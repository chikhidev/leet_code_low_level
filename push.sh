git add .

if [[ -n $(git status -s) ]]; then
  file_names=$(git status -s | awk '{print $2}')

  commit_message="LEET_LOW_LEVEL - Files changed: $file_names"

  git commit -m "$commit_message"

  git push
else
  echo "No changes to commit."
fi
