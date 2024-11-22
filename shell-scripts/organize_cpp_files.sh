# This is a Bash script to help me organize cpp-small-projects

# Change into the target directory
cd ..
# Iterate over target directory contents
for item in *; do
  # If it is a file (-f)
  if [[ -f "$item" ]]; then
    # If the file name is README.md
    if [[ "$item" == "README.md" ]]; then
      # Skip it
      continue
    fi
    # Set the new directory name equal to the project name, minus the '.cpp'
    dir_name="${item:0:-4}"
    # Create a directory that matches the file name
    mkdir "$dir_name"
    echo "Directory $dir_name has been created."
    # Move the file into the new directory
    mv "$item" "$dir_name"
    echo "File $item has been moved into its directory."
  fi
done

echo "Finished creating directories and moving files, here is the updated \
directory contents:"
ls