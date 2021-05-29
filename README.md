![Python application](https://github.com/TonyWhitley/pyRfactor2SharedMemory/workflows/Python%20application/badge.svg)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

# pyRfactor2SharedMemory
Python library for accessing rFactor 2's shared memory


# linux
Go to the RF2 steamapps folder and rename `Bin64/rFactor2.exe -> _rFactor2.exe`. Copy `linux/rFactor2_wrapper.exe` into the folder and rename it to `rFactor2.exe`. When starting RF2 from steam, the wrapper is invoked which then starts RF2, maps the files and waits for RF2 to finish.
