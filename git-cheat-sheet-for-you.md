# 🧾 Git Cheatsheet for You

This handout summarizes the most important Git commands and workflows used in the DS Mini-Project. It’s designed for learners and contributors working with Git and GitHub.

---

## 🧑‍💻 Setup and Initialization

```bash
git config --global user.name "Your Name"
git config --global user.email "your@email.com"

git init                      # Initialize a new Git repo
git clone https://github.com/satya25/learn-git.git  # Clone the workshop repo
```

---

## 📦 Staging and Committing

```bash
git status                   # Show changed files
git add <file>               # Stage a file
git add .                    # Stage all changes
git commit -m "Your message" # Commit with message
```

---

## 🌐 Remote Repository

```bash
git remote add origin <url>  # Link to your GitHub repo
git push -u origin main      # Push first time to main branch
git push                     # Push changes
git pull                     # Fetch and merge from remote
```

---

## 🌿 Branching and Merging

```bash
git branch                   # List branches
git branch <name>            # Create new branch
git checkout <name>          # Switch to branch
git merge <name>             # Merge branch into current
```

---

## 🧹 Clean and Reset

```bash
git rm <file>                # Remove file from repo
git clean -f                 # Remove untracked files
git reset --hard             # Reset all changes
```

---

## 📜 Log and History

```bash
git log                      # View commit history
git show <commit>            # Show details of a commit
git diff                     # See unstaged changes
```

---

## 🔄 GitHub Flow Diagram

```
+---------------------+
|  Fork from GitHub   |
+---------------------+
          |
          v
+---------------------+
|   Clone to Local    |
+---------------------+
          |
          v
+---------------------+
|  Create New Branch  |
+---------------------+
          |
          v
+---------------------+
|   Make Changes      |
+---------------------+
          |
          v
+---------------------+
|  Commit Locally     |
+---------------------+
          |
          v
+---------------------+
|   Push to GitHub    |
+---------------------+
          |
          v
+---------------------+
| Create Pull Request |
+---------------------+
          |
          v
+---------------------+
|  Review & Merge     |
+---------------------+
```

---

## 🧠 Tips

- Use `git status` often  
- Write clear commit messages  
- Keep your `main` branch clean  
- Use branches for experiments  
- Pull before you push

---

Happy coding and collaborating!
