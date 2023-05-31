# PongOnRoids
<div style="text-align: center;">
    <img src="https://github.com/MV487/PongOnRoids/blob/master/assets/Untitled%20video.gif" />
</div>
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
- [x] improve the ball collision, physics
- [ ] improve ai movement
- [ ] switch to cmake
- [ ] add win and lose screen
- [ ] add multiplayer (4 - 6 players)
- [ ] add LAN multiplayer
---
