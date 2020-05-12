# s3c6410_linux
基于公版linux-4.0，针对s3c6410构建的Linux系统

#### 1. 移植MTD驱动，分区信息：
		Creating 3 MTD partitions on "nand":
		0x000000000000-0x000000080000 : "bootloader"
		0x000000080000-0x000000580000 : "kernel"
		0x000000580000-0x000040000000 : "file system"

#### 2. 移植友善官方的一线触摸与Frameuffer驱动（在根文件系统中有自己写的FrameBuffer驱动，不过还是建议移植更稳定的驱动）

#### 3. 添加SDHCI时钟使能，使SD卡可正常使用

#### 4. 使能OHCI时钟，目前USB还有问题
