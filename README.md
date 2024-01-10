# CS50x

[CS50's Introduction to Computer Science](https://learning.edx.org/course/course-v1:HarvardX+CS50+X/home)

[submit.cs50.io](https://submit.cs50.io/users/j0ruge)

## [Week 0 - Scratch](Lectures/Week_0/README.md)

## [Week 1 - C](Lectures/Week_1/README.md)

## [Week 2](Lectures/Week_2/README.md)

## GitHub Access


### SSH

Open a terminal window, if not open already, within Visual Studio Code, CS50 IDE, CS50 Sandbox, or CS50 Lab.

Execute ssh-keygen. When prompted to “save the key,” just hit Enter, without typing anything.

You’ll then be prompted for a “passphrase” (i.e., password). If you only use your GitHub account for CS50, no need to input a passphrase; just hit Enter. Otherwise, input a passphrase (that you won’t forget!), then hit Enter, then input it again, then hit Enter again. For security’s sake, you won’t see what you type. You’ll then see a “randomart image” that you can ignore.

Execute cat ~/.ssh/id_rsa.pub. You’ll then see your “public key,” multiple lines of seemingly random text. Highlight and copy all of those lines, starting with ssh-rsa to the end. But don’t highlight your terminal window’s prompts (which contain $) before or after those lines.

Visit https://github.com/settings/keys, logging in with your GitHub username and password as usual. Don’t use the passphrase you just created, if any.

Click New SSH Key.

Paste your public key into the text box under Key. Optionally input a title under Title (e.g., CS50).

Click Add SSH Key.

Execute ssh -T git@ssh.github.com -p 443.

Enter “yes” and press enter if you see the following prompt (the IP address might be different):

The authenticity of host '[ssh.github.com]:443 ([140.82.113.35]:443)' can't be established.
ED25519 key fingerprint is SHA256:7KMZvJiITZ+HbOyqjKJV2AeC5As3GSZES5abcd1NIe4.
This key is not known by any other names
Are you sure you want to continue connecting (yes/no/[fingerprint])?

If you input a “passphrase” (i.e., password) earlier, enter the passphrase and press Enter when you see the following prompt "Enter passphrase for key 'home/ubuntu/.ssh/id_rsa':"

You should be greeted with "Hi USERNAME! You've successfully authenticated, but GitHub does not provide shell access." If you don’t see that, review the above steps to verify you didn’t skip something.

You should now be able to use check50 and submit50 (and git) without GitHub username and password. But if you created a passphrase, you might still be prompted for that.
If you created a passphrase but forgot it

Visit https://github.com/settings/keys, click Delete next to your old SSH key, then click I understand, please delete this SSH key.

Follow all of the same SSH steps, above, again. When prompted to “overwrite” (your old key), input y, then hit Enter.

### Personal Access Token

Visit https://github.com/settings/security, logging in with your GitHub username and password as usual, and configure two-factor authentication.

Visit https://github.com/settings/tokens.

Click Generate new token.

Input a note under Note (e.g., CS50 IDE if using CS50 IDE).

Select No expiration (or something shorter) via the drop-down menu under Note.

Check repo under Select scopes.

Click Generate token.

Highlight and copy the “personal access token” that appears. Odds are it will start with ghp_.

Paste that personal access token somewhere safe (e.g., in a password manager).

You should now be able to use check50 and submit50 (and git) without GitHub username and password. When prompted to log in, use your GitHub username and that personal access token instead of your password.
If you created a personal access token but forgot it (or it expired)

Visit https://github.com/settings/tokens, click Delete next to your old personal access token, then click I understand, delete this token.

Follow all of the same Personal Access Token steps, above, again.