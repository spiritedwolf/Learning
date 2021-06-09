# Folder share 
You can use it when your VMware shared folder doesn't mount
```mount -t fuse.vmhgfs-fuse .host:/ /mnt/hgfs -o allow_other```

Folder share with rdesktop
```rdesktop -5 -K -r disk:home=/home/spirit/share -r clipboard:CLIPBOARD -r sound:off -x l -P <IP>```

# Tmux Cheat Sheet
To scroll with the mouse. Press ctrl+D and :
```setw -g mouse on```

# View the Java Alternative
``` sudo update-alternatives --config java```

# AD
```reg add HKLM\SYSTEM\CurrentControlSet\Control\SecurityProviders\WDigest /v UseLogonCredential /t REG_DWORD /d 1
```
