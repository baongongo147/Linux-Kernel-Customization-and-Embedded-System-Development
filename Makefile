obj-m := helloworld_rpi.o
KERNEL_DIR ?= /home/phong/HeThongNhung/linux
all:
	make -C $(KERNEL_DIR) \
	ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- \
	M=$(PWD) modules
clean:
	make -C $(KERNEL_DIR) \
	ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnupwd- \
	M=$(PWD) clean

deploy:
	scp -P 5555 *.ko pi@localhost:/home/pi/

#khi dùng cho máy ảo đổi office2m@mã ip thành pi@localhost và ngược lại khi dùng máy ảo đổi user với ip tương ứng, ị trí file mn linh động chuyển đổi
#port cho máy ảo là 5555
#port cho máy raspi của nhómừm mn chỉ cần xóa -P 5555 là deploy dc