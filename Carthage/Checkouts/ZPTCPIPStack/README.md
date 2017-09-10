# ZPTCPIPStack

ZPTCPIPStack is based on [lwIP](https://savannah.nongnu.org/projects/lwip/) 2.0.2 released with a major modification, designed to work with the [NetworkExtension](https://developer.apple.com/documentation/networkextension) framework and provides asynchronous tcp control interface like socket. Now, it just support IPv4.

## Installation

#### Carthage

ZPTCPIPStack is [Carthage](https://github.com/Carthage/Carthage) compatible. To include it add the following line to your `Cartfile`

```bash
github "zapcannon87/ZPTCPIPStack" "master"
```

#### Warning

there is a problem with directly integrating ZPTCPIPStack into project using Carthage. I'm fixing it. alternative you can refer the files into a project's inner framework.

## Demo

[Sniffer](https://github.com/zapcannon87/Sniffer)