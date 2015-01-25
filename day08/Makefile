all:
	g++ struct_base.c -o struct_base
	g++ struct_revert.c -o struct_revert
	g++ struct_advq.c -o struct_advq
	gcc kernellist_static.c -o kernellist_static
	gcc kernellist_dynamic.c -o kernellist_dynamic
	gcc struct_addr.c -o struct_addr
clean:
	rm -rf struct_base struct_revert struct_advq kernellist_static kernellist_dynamic struct_addr
