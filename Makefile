sim:
ifneq ($(fw),)
	make -C ./fw/$(fw)
endif
	make -C sim $(target)

clean:
	make -C ./fw/test clean
	make -C ./fw/dhrystone clean
	make -C sim clean

.PHONY: sim clean
