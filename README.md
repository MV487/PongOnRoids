# PongOnRoids
<p align="center">
    <img src="https://github.com/MV487/PongOnRoids/blob/master/assets/Untitled%20video.gif" alt="GIF" width="800" height="500"  />
</p>

## Controls

| Input                        | Action                |
|-------------------------------|----------------------|
| ← → ↑ ↓           | Move                           |

## Install guide

### Windows:
```bash
git clone --recurse-submodules https://github.com/MV487/PongOnRoids.git
cd vcpkg\bootstrap-vcpkg.bat
cd vcpkg
./bootstrap-vcpkg.bat
vcpkg.exe install raylib:x64-windows
vcpkg.exe integrate install
```
	
## TODO:
---
- [x] switch to cmake
- [ ] improve the ball collision, physics
- [ ] add win and lose screen
- [ ] improve ai movement
- [ ] add multiplayer (4 - 6 players)
- [ ] add LAN multiplayer
---
