
# 🎓 Data Structures Mini-Project (C Language)

<p align="center">
  <img src="https://img.shields.io/badge/GitHub%20Pages-Live-green?style=for-the-badge&logo=github" alt="GitHub Pages Badge">
  <img src="https://img.shields.io/github/license/satya25/learn-git?style=for-the-badge" alt="License Badge">
  <img src="https://img.shields.io/badge/Workshop-Git%20%26%20C%20Mini--Project-blue?style=for-the-badge" alt="Workshop Badge">
  <img src="https://img.shields.io/badge/AI%20Alchemy%20Hub-Contributor-teal?style=for-the-badge" alt="AI Alchemy Hub Badge">
</p>


This repository is part of the Git & GitHub workshop curated by Satya Prakash Nigam for learners exploring modular C programming and version control. It is designed to help students and contributors apply Data Structures in real-world coding workflows using Git.

---

## 📦 Project Structure

```
learn-git/
├── src/                             # C source files for each module
├── include/                         # Header files (.h) with function prototypes
├── tests/                           # Test drivers for each module
├── data/                            # Sample input files (e.g., students.txt)
├── docs/                            # Problem statements and module descriptions
├── Makefile                         # Build automation
├── LICENSE                          # Open-source license declaration
├── README.md                        # Project overview and usage instructions
├── CONTRIBUTING.md                  # Guidelines for student and community contributions
├── GIT_WORKFLOW.md                  # Step-by-step Git instructions for beginners
├── git-cheat-sheet-for-you.md       # Git command reference and ASCII flow diagram
├── git-github-workshop.md           # Slide deck content for Git & GitHub workshop
├── git-installation-configuration-guide.md  # Platform-specific Git setup instructions
├── setup-ds-project.sh              # Bash script to scaffold project folders
└── .gitignore                       # Git hygiene and ignored artifacts
```

---

## 🧠 Modules

1. **Stack CRUD**  
   - Stack of student records (Name, Section, USN, Grade)  
   - Supports Create, Read, Update, Delete operations

2. **Expression Conversion**  
   - Infix → Postfix  
   - Postfix → Infix  
   - Uses stack-based parsing

3. **Tower of Hanoi**  
   - Recursive solution  
   - Visual trace of disk movements

---

## 🧪 Testing

Each module has a corresponding test file in the `tests/` folder.  
Learners are encouraged to follow a **Test-Driven Development (TDD)** approach.

To compile and run tests:
```bash
make
./stack
./expr
./hanoi
```

To clean compiled binaries:
```bash
make clean
```

---

## 🧰 Git Workflow

If you're new to Git and want to personalize this project and push it to your own GitHub account, follow the step-by-step guide in [`GIT_WORKFLOW.md`](https://github.com/satya25/learn-git/blob/main/GIT_WORKFLOW.md).

For a quick reference of essential Git commands and visual flow, check out the [`git-cheat-sheet-for-you.md`](https://github.com/satya25/learn-git/blob/main/git-cheat-sheet-for-you.md).

To set up Git on your system (Windows, Linux, macOS), follow the platform-specific instructions in [`git-installation-configuration-guide.md`](https://github.com/satya25/learn-git/blob/main/git-installation-configuration-guide.md).

---

## 🤝 Want to Contribute?

Check out [`CONTRIBUTING.md`](https://github.com/satya25/learn-git/blob/main/CONTRIBUTING.md) for ideas and instructions on how to contribute meaningfully to this project.

---

## 📚 Learning Goals

- Apply DS concepts in modular C programs  
- Understand Git versioning and collaboration  
- Practice clean coding and documentation habits  
- Embrace testing and traceability  
- Learn how to fork, personalize, and push your own version of a project

---

## 👨‍🏫 Curated By

**Satya Prakash Nigam**  
Architecting modular, industry-ready learning experiences  
Website: [aialchemyhub.in](https://www.aialchemyhub.in)

