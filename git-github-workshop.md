## 🧠 Git & GitHub Workshop Slide Deck (40 Slides)

---

### **Slide 1: Title Slide**
- **Title:** Git & GitHub: Versioning Like an Engineer  
- **Subtitle:** A hands-on workshop for learners and contributors  
- **Presented by:** Satya Prakash Nigam

---

### **Slide 2: Why This Matters**
- Industry expects version control from Day 1  
- Git is the backbone of collaboration, traceability, and deployment  
- You’ll use Git in every real-world project

---

### **Slide 3: What Is Git?**
- Git is a distributed version control system  
- Tracks changes to files over time  
- Lets multiple people work on the same codebase safely

---

### **Slide 4: What Is GitHub?**
- GitHub is a cloud platform for hosting Git repositories  
- Adds collaboration, issue tracking, pull requests, and more

---

### **Slide 5: Git vs GitHub**
| Git | GitHub |
|-----|--------|
| Local tool | Online platform |
| Tracks versions | Hosts repos |
| Works offline | Requires internet |
| CLI-based | Web interface |

---

### **Slide 6: Core Concepts**
- Repository (repo)  
- Commit  
- Branch  
- Merge  
- Push & Pull  
- Clone  
- Remote

---

### **Slide 7: Git Workflow Overview**
1. Create project folder  
2. Initialize Git  
3. Create remote repo  
4. Connect local to remote  
5. Push changes  
6. Collaborate

---

### **Slide 8: Installing Git**
- Windows: Git Bash  
- macOS: Homebrew  
- Linux: apt/yum  
- Verify: `git --version`

---

### **Slide 9: Setting Up Git**
```bash
git config --global user.name "Your Name"
git config --global user.email "your@email.com"
```

---

### **Slide 10: Create a Local Project**
```bash
mkdir myproject
cd myproject
touch main.c
```

---

### **Slide 11: Initialize Git**
```bash
git init
```
- Creates `.git` folder  
- Starts tracking changes

---

### **Slide 12: Stage & Commit**
```bash
git add .
git commit -m "Initial commit"
```
- `add` stages changes  
- `commit` saves a version

---

### **Slide 13: View Status & Log**
```bash
git status
git log
```
- See what’s changed  
- View commit history

---

### **Slide 14: Create Remote Repo on GitHub**
- Go to [github.com](https://github.com)  
- Click "New Repository"  
- Name it, keep it public/private  
- Copy HTTPS URL

---

### **Slide 15: Connect Local to Remote**
```bash
git remote add origin https://github.com/yourname/learn-git-yourname.git
```

---

### **Slide 16: Push to GitHub**
```bash
git push -u origin main
```
- First push sets upstream  
- Future pushes: `git push`

---

### **Slide 17: Check on GitHub**
- Visit your repo  
- See files, commits, README  
- Share URL with peers

---

### **Slide 18: Make Changes Locally**
- Edit `main.c`  
- Add new feature  
- Save file

---

### **Slide 19: Commit Changes**
```bash
git add .
git commit -m "Added search feature"
git push
```

---

### **Slide 20: Version History**
- Use `git log`  
- Each commit has:
  - Hash  
  - Author  
  - Message  
  - Timestamp

---

### **Slide 21: Clone a Repo**
```bash
git clone https://github.com/peername/project.git
```
- Creates a local copy  
- You can explore or contribute

---

### **Slide 22: Pull Latest Changes**
```bash
git pull
```
- Syncs your local repo with remote  
- Useful before pushing

---

### **Slide 23: Push Your Changes**
```bash
git push
```
- Sends your commits to GitHub  
- Others can now see your updates

---

### **Slide 24: Branching Basics**
```bash
git checkout -b feature-xyz
```
- Create a new branch  
- Work without affecting `main`

---

### **Slide 25: Merging Branches**
```bash
git checkout main
git merge feature-xyz
```
- Combines changes  
- Resolves conflicts if needed

---

### **Slide 26: Conflict Demo**
- Two people edit same line  
- Git flags conflict  
- You resolve manually

---

### **Slide 27: .gitignore**
- Prevents tracking of unwanted files  
- Example:
```
*.exe
*.log
build/
```

---

### **Slide 28: README.md**
- Explains project purpose  
- First thing collaborators read  
- Use Markdown formatting

---

### **Slide 29: GitHub Etiquette**
- Clear commit messages  
- Use branches for features  
- Pull before push  
- Respect code reviews

---

### **Slide 30: GitHub Collaboration**
- Fork → Clone → Modify → Pull Request  
- Comment on code  
- Use Issues to track bugs

---

### **Slide 31: Real-World Workflow**
| Step | Command |
|------|---------|
| Init | `git init` |
| Stage | `git add .` |
| Commit | `git commit -m "..."` |
| Remote | `git remote add origin ...` |
| Push | `git push` |
| Pull | `git pull` |
| Clone | `git clone ...` |

---

### **Slide 32: Sample Project Structure**
```
/learn-git
  ├── src/
  ├── include/
  ├── tests/
  ├── README.md
  ├── .gitignore
```

---

### **Slide 33: Sample Commit Messages**
- `Initial commit`  
- `Added stack CRUD operations`  
- `Fixed postfix conversion bug`  
- `Refactored Hanoi recursion`

---

### **Slide 34: GitHub Repo Sharing**
- Copy repo URL  
- Share via chat, email, LMS  
- Others can clone or fork

---

### **Slide 35: GitHub Classroom (Optional)**
- Centralized assignment management  
- Auto repo creation  
- Track submissions

---

### **Slide 36: Common Mistakes**
- Forgetting to commit  
- Pushing without pulling  
- Committing build files  
- Conflicts due to simultaneous edits

---

### **Slide 37: Cheat Sheet**
- Provide printed handout or PDF  
- Include all key commands  
- Include GitHub flow diagram

---

### **Slide 38: Wrap-Up**
- Git is essential for engineers and contributors  
- You’ve completed a full round-trip  
- Practice with your DS mini-project

---

### **Slide 39: What’s Next**
- Use Git for all modular C projects  
- Collaborate with peers  
- Explore GitHub issues and pull requests

---

### **Slide 40: Thank You**
- Questions?  
- Share your repo links  
- Connect on GitHub: `github.com/satya25`

---
