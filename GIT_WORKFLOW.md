# 🧭 Git Workflow Guide for Learners

This guide helps you take the DS Mini-Project, personalize it with your name, and push it to your own GitHub repository. No prior Git experience needed—just follow the steps!

---

## ✅ Prerequisites

- You have a GitHub account
- Git is installed on your computer
- You’ve logged in to GitHub in your browser

---

## 🧑‍🎓 Step 1: Clone the Workshop Repository

Open your terminal and run:

```bash
git clone https://github.com/satya25/learn-git.git
cd learn-git
```

This downloads the project to your local machine.

---

## ✍️ Step 2: Personalize the Code

Open any `.c` or `.h` file and update the file header with your name:

```c
/*
 * Author      : Your Name
 * Section     : Your Section
 * USN         : Your ID (if applicable)
 */
```

You can also add comments or test cases if you wish.

---

## 🆕 Step 3: Create a New Local Git Repository

If the cloned folder doesn’t already have `.git`, initialize it:

```bash
git init
```

Then stage your changes:

```bash
git add .
git commit -m "Personalized headers and added my info"
```

---

## 🌐 Step 4: Create a New GitHub Repository

1. Go to [GitHub](https://github.com)
2. Click **New Repository**
3. Name it something like `learn-git-yourname`
4. Keep it **Public** or **Private**
5. Do **not** initialize with README (you already have one)

---

## 🔗 Step 5: Link Your Local Repo to GitHub

Copy the new repo’s URL and run:

```bash
git remote add origin https://github.com/your-username/learn-git-yourname.git
```

---

## 🚀 Step 6: Push Your Code (Use `main`, not `master`)

If your local branch is still called `master`, rename it:

```bash
git branch -m master main
```

Then push your code:

```bash
git push -u origin main
```

---

## 🧪 Step 7: Verify

Go to your GitHub repo and confirm:
- Your name appears in file headers
- Your commit message is visible
- Your code is uploaded successfully

---

## 🙌 You're Done!

You now have your own version of the DS Mini-Project. You can:
- Share it with peers
- Submit it for review
- Extend it with new features

---

## 💡 Bonus Tips

- Use `git status` to check your changes
- Use `git log` to view commit history
- Use `make` to build and test your code

---

Happy coding and contributing!
