# 🛠️ Git Installation & Configuration Guide

This guide helps you install Git on your system and configure it for use in your projects. Follow the instructions based on your operating system.

---

## 🪟 Windows

### 🔽 Download Git for Windows

- Visit: [https://git-scm.com/download/win](https://git-scm.com/download/win)
- The installer will download automatically.

### ⚙️ Install Git

1. Run the downloaded `.exe` file.
2. Accept default options unless you know what to change.
3. Ensure **Git Bash** is installed (you’ll use this terminal).
4. Finish setup and launch **Git Bash**.

### 🧑‍💻 Configure Git

```bash
git config --global user.name "Your Name"
git config --global user.email "your@email.com"
```

You’re now ready to use Git from Git Bash.

---

## 🐧 Unix/Linux

### 🔽 Install Git via Package Manager

#### Debian/Ubuntu

```bash
sudo apt update
sudo apt install git
```

#### Fedora

```bash
sudo dnf install git
```

#### Arch Linux

```bash
sudo pacman -S git
```

### 🧑‍💻 Configure Git

```bash
git config --global user.name "Your Name"
git config --global user.email "your@email.com"
```

You can now use Git from your terminal.

---

## 🍎 macOS

### 🔽 Install Git via Homebrew (Recommended)

1. Install Homebrew (if not already installed):

```bash
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

2. Install Git:

```bash
brew install git
```

### 🔽 Alternative: Xcode Command Line Tools

```bash
xcode-select --install
```

This installs Git along with other developer tools.

### 🧑‍💻 Configure Git

```bash
git config --global user.name "Your Name"
git config --global user.email "your@email.com"
```

You’re now ready to use Git from Terminal.

---

## ✅ Verify Installation

Run this command on any platform:

```bash
git --version
```

You should see something like:

```
git version 2.42.0
```

---

## 📁 Optional: Set Default Editor

```bash
git config --global core.editor "code --wait"   # For VS Code
git config --global core.editor "nano"          # For Nano
```

---

## 🧠 Tips

- Use `git config --list` to view all settings.
- Your global config is stored in `~/.gitconfig`.
- You can override settings per project using local config.

---

Happy installing and configuring!
