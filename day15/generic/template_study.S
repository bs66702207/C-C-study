
template_study:     file format elf32-i386


Disassembly of section .interp:

08048154 <.interp>:
 8048154:	2f                   	das    
 8048155:	6c                   	insb   (%dx),%es:(%edi)
 8048156:	69 62 2f 6c 64 2d 6c 	imul   $0x6c2d646c,0x2f(%edx),%esp
 804815d:	69 6e 75 78 2e 73 6f 	imul   $0x6f732e78,0x75(%esi),%ebp
 8048164:	2e 32 00             	xor    %cs:(%eax),%al

Disassembly of section .note.ABI-tag:

08048168 <.note.ABI-tag>:
 8048168:	04 00                	add    $0x0,%al
 804816a:	00 00                	add    %al,(%eax)
 804816c:	10 00                	adc    %al,(%eax)
 804816e:	00 00                	add    %al,(%eax)
 8048170:	01 00                	add    %eax,(%eax)
 8048172:	00 00                	add    %al,(%eax)
 8048174:	47                   	inc    %edi
 8048175:	4e                   	dec    %esi
 8048176:	55                   	push   %ebp
 8048177:	00 00                	add    %al,(%eax)
 8048179:	00 00                	add    %al,(%eax)
 804817b:	00 02                	add    %al,(%edx)
 804817d:	00 00                	add    %al,(%eax)
 804817f:	00 06                	add    %al,(%esi)
 8048181:	00 00                	add    %al,(%eax)
 8048183:	00 18                	add    %bl,(%eax)
 8048185:	00 00                	add    %al,(%eax)
	...

Disassembly of section .note.gnu.build-id:

08048188 <.note.gnu.build-id>:
 8048188:	04 00                	add    $0x0,%al
 804818a:	00 00                	add    %al,(%eax)
 804818c:	14 00                	adc    $0x0,%al
 804818e:	00 00                	add    %al,(%eax)
 8048190:	03 00                	add    (%eax),%eax
 8048192:	00 00                	add    %al,(%eax)
 8048194:	47                   	inc    %edi
 8048195:	4e                   	dec    %esi
 8048196:	55                   	push   %ebp
 8048197:	00 80 7f b7 78 65    	add    %al,0x6578b77f(%eax)
 804819d:	37                   	aaa    
 804819e:	94                   	xchg   %eax,%esp
 804819f:	a3 76 cb d6 e2       	mov    %eax,0xe2d6cb76
 80481a4:	42                   	inc    %edx
 80481a5:	0d 94 ca ef 9b       	or     $0x9befca94,%eax
 80481aa:	39 c8                	cmp    %ecx,%eax

Disassembly of section .gnu.hash:

080481ac <.gnu.hash>:
 80481ac:	03 00                	add    (%eax),%eax
 80481ae:	00 00                	add    %al,(%eax)
 80481b0:	09 00                	or     %eax,(%eax)
 80481b2:	00 00                	add    %al,(%eax)
 80481b4:	01 00                	add    %eax,(%eax)
 80481b6:	00 00                	add    %al,(%eax)
 80481b8:	05 00 00 00 01       	add    $0x1000000,%eax
 80481bd:	23 10                	and    (%eax),%edx
 80481bf:	20 00                	and    %al,(%eax)
 80481c1:	00 00                	add    %al,(%eax)
 80481c3:	00 09                	add    %cl,(%ecx)
 80481c5:	00 00                	add    %al,(%eax)
 80481c7:	00 0b                	add    %cl,(%ebx)
 80481c9:	00 00                	add    %al,(%eax)
 80481cb:	00 ac 4b e3 c0 21 fd 	add    %ch,-0x2de3f1d(%ebx,%ecx,2)
 80481d2:	f4                   	hlt    
 80481d3:	09 28                	or     %ebp,(%eax)
 80481d5:	45                   	inc    %ebp
 80481d6:	d5 4c                	aad    $0x4c
 80481d8:	15                   	.byte 0x15
 80481d9:	98                   	cwtl   
 80481da:	0c 43                	or     $0x43,%al

Disassembly of section .dynsym:

080481dc <.dynsym>:
	...
 80481ec:	0a 01                	or     (%ecx),%al
	...
 80481f6:	00 00                	add    %al,(%eax)
 80481f8:	12 00                	adc    (%eax),%al
 80481fa:	00 00                	add    %al,(%eax)
 80481fc:	10 00                	adc    %al,(%eax)
	...
 8048206:	00 00                	add    %al,(%eax)
 8048208:	20 00                	and    %al,(%eax)
 804820a:	00 00                	add    %al,(%eax)
 804820c:	1f                   	pop    %ds
	...
 8048215:	00 00                	add    %al,(%eax)
 8048217:	00 20                	add    %ah,(%eax)
 8048219:	00 00                	add    %al,(%eax)
 804821b:	00 17                	add    %dl,(%edi)
 804821d:	01 00                	add    %eax,(%eax)
	...
 8048227:	00 12                	add    %dl,(%edx)
 8048229:	00 00                	add    %al,(%eax)
 804822b:	00 b0 00 00 00 00    	add    %dh,0x0(%eax)
 8048231:	00 00                	add    %al,(%eax)
 8048233:	00 00                	add    %al,(%eax)
 8048235:	00 00                	add    %al,(%eax)
 8048237:	00 12                	add    %dl,(%edx)
 8048239:	00 00                	add    %al,(%eax)
 804823b:	00 1e                	add    %bl,(%esi)
 804823d:	01 00                	add    %eax,(%eax)
	...
 8048247:	00 12                	add    %dl,(%edx)
 8048249:	00 00                	add    %al,(%eax)
 804824b:	00 78 00             	add    %bh,0x0(%eax)
	...
 8048256:	00 00                	add    %al,(%eax)
 8048258:	12 00                	adc    (%eax),%al
 804825a:	00 00                	add    %al,(%eax)
 804825c:	e0 00                	loopne 804825e <_init-0x262>
	...
 8048266:	00 00                	add    %al,(%eax)
 8048268:	12 00                	adc    (%eax),%al
 804826a:	00 00                	add    %al,(%eax)
 804826c:	fb                   	sti    
 804826d:	00 00                	add    %al,(%eax)
 804826f:	00 3c 88             	add    %bh,(%eax,%ecx,4)
 8048272:	04 08                	add    $0x8,%al
 8048274:	04 00                	add    $0x0,%al
 8048276:	00 00                	add    %al,(%eax)
 8048278:	11 00                	adc    %eax,(%eax)
 804827a:	0f 00                	(bad)  
 804827c:	33 00                	xor    (%eax),%eax
 804827e:	00 00                	add    %al,(%eax)
 8048280:	80 85 04 08 00 00 00 	addb   $0x0,0x804(%ebp)
 8048287:	00 12                	add    %dl,(%edx)
 8048289:	00 00                	add    %al,(%eax)
 804828b:	00 c8                	add    %cl,%al
 804828d:	00 00                	add    %al,(%eax)
 804828f:	00 50 85             	add    %dl,-0x7b(%eax)
 8048292:	04 08                	add    $0x8,%al
 8048294:	00 00                	add    %al,(%eax)
 8048296:	00 00                	add    %al,(%eax)
 8048298:	12 00                	adc    (%eax),%al
 804829a:	00 00                	add    %al,(%eax)
 804829c:	6e                   	outsb  %ds:(%esi),(%dx)
 804829d:	00 00                	add    %al,(%eax)
 804829f:	00 40 a0             	add    %al,-0x60(%eax)
 80482a2:	04 08                	add    $0x8,%al
 80482a4:	8c 00                	mov    %es,(%eax)
 80482a6:	00 00                	add    %al,(%eax)
 80482a8:	11 00                	adc    %eax,(%eax)
 80482aa:	1a 00                	sbb    (%eax),%al

Disassembly of section .dynstr:

080482ac <.dynstr>:
 80482ac:	00 6c 69 62          	add    %ch,0x62(%ecx,%ebp,2)
 80482b0:	73 74                	jae    8048326 <_init-0x19a>
 80482b2:	64 63 2b             	arpl   %bp,%fs:(%ebx)
 80482b5:	2b 2e                	sub    (%esi),%ebp
 80482b7:	73 6f                	jae    8048328 <_init-0x198>
 80482b9:	2e 36 00 5f 5f       	cs add %bl,%cs:%ss:0x5f(%edi)
 80482be:	67 6d                	insl   (%dx),%es:(%di)
 80482c0:	6f                   	outsl  %ds:(%esi),(%dx)
 80482c1:	6e                   	outsb  %ds:(%esi),(%dx)
 80482c2:	5f                   	pop    %edi
 80482c3:	73 74                	jae    8048339 <_init-0x187>
 80482c5:	61                   	popa   
 80482c6:	72 74                	jb     804833c <_init-0x184>
 80482c8:	5f                   	pop    %edi
 80482c9:	5f                   	pop    %edi
 80482ca:	00 5f 4a             	add    %bl,0x4a(%edi)
 80482cd:	76 5f                	jbe    804832e <_init-0x192>
 80482cf:	52                   	push   %edx
 80482d0:	65 67 69 73 74 65 72 	imul   $0x6c437265,%gs:0x74(%bp,%di),%esi
 80482d7:	43 6c 
 80482d9:	61                   	popa   
 80482da:	73 73                	jae    804834f <_init-0x171>
 80482dc:	65                   	gs
 80482dd:	73 00                	jae    80482df <_init-0x1e1>
 80482df:	5f                   	pop    %edi
 80482e0:	5a                   	pop    %edx
 80482e1:	53                   	push   %ebx
 80482e2:	74 34                	je     8048318 <_init-0x1a8>
 80482e4:	65 6e                	outsb  %gs:(%esi),(%dx)
 80482e6:	64                   	fs
 80482e7:	6c                   	insb   (%dx),%es:(%edi)
 80482e8:	49                   	dec    %ecx
 80482e9:	63 53 74             	arpl   %dx,0x74(%ebx)
 80482ec:	31 31                	xor    %esi,(%ecx)
 80482ee:	63 68 61             	arpl   %bp,0x61(%eax)
 80482f1:	72 5f                	jb     8048352 <_init-0x16e>
 80482f3:	74 72                	je     8048367 <_init-0x159>
 80482f5:	61                   	popa   
 80482f6:	69 74 73 49 63 45 45 	imul   $0x52454563,0x49(%ebx,%esi,2),%esi
 80482fd:	52 
 80482fe:	53                   	push   %ebx
 80482ff:	74 31                	je     8048332 <_init-0x18e>
 8048301:	33 62 61             	xor    0x61(%edx),%esp
 8048304:	73 69                	jae    804836f <_init-0x151>
 8048306:	63 5f 6f             	arpl   %bx,0x6f(%edi)
 8048309:	73 74                	jae    804837f <_init-0x141>
 804830b:	72 65                	jb     8048372 <_init-0x14e>
 804830d:	61                   	popa   
 804830e:	6d                   	insl   (%dx),%es:(%edi)
 804830f:	49                   	dec    %ecx
 8048310:	54                   	push   %esp
 8048311:	5f                   	pop    %edi
 8048312:	54                   	push   %esp
 8048313:	30 5f 45             	xor    %bl,0x45(%edi)
 8048316:	53                   	push   %ebx
 8048317:	36                   	ss
 8048318:	5f                   	pop    %edi
 8048319:	00 5f 5a             	add    %bl,0x5a(%edi)
 804831c:	53                   	push   %ebx
 804831d:	74 34                	je     8048353 <_init-0x16d>
 804831f:	63 6f 75             	arpl   %bp,0x75(%edi)
 8048322:	74 00                	je     8048324 <_init-0x19c>
 8048324:	5f                   	pop    %edi
 8048325:	5a                   	pop    %edx
 8048326:	53                   	push   %ebx
 8048327:	74 6c                	je     8048395 <_init-0x12b>
 8048329:	73 49                	jae    8048374 <_init-0x14c>
 804832b:	53                   	push   %ebx
 804832c:	74 31                	je     804835f <_init-0x161>
 804832e:	31 63 68             	xor    %esp,0x68(%ebx)
 8048331:	61                   	popa   
 8048332:	72 5f                	jb     8048393 <_init-0x12d>
 8048334:	74 72                	je     80483a8 <_init-0x118>
 8048336:	61                   	popa   
 8048337:	69 74 73 49 63 45 45 	imul   $0x52454563,0x49(%ebx,%esi,2),%esi
 804833e:	52 
 804833f:	53                   	push   %ebx
 8048340:	74 31                	je     8048373 <_init-0x14d>
 8048342:	33 62 61             	xor    0x61(%edx),%esp
 8048345:	73 69                	jae    80483b0 <_init-0x110>
 8048347:	63 5f 6f             	arpl   %bx,0x6f(%edi)
 804834a:	73 74                	jae    80483c0 <_init-0x100>
 804834c:	72 65                	jb     80483b3 <_init-0x10d>
 804834e:	61                   	popa   
 804834f:	6d                   	insl   (%dx),%es:(%edi)
 8048350:	49                   	dec    %ecx
 8048351:	63 54 5f 45          	arpl   %dx,0x45(%edi,%ebx,2)
 8048355:	53                   	push   %ebx
 8048356:	35 5f 50 4b 63       	xor    $0x634b505f,%eax
 804835b:	00 5f 5a             	add    %bl,0x5a(%edi)
 804835e:	4e                   	dec    %esi
 804835f:	53                   	push   %ebx
 8048360:	74 38                	je     804839a <_init-0x126>
 8048362:	69 6f 73 5f 62 61 73 	imul   $0x7361625f,0x73(%edi),%ebp
 8048369:	65                   	gs
 804836a:	34 49                	xor    $0x49,%al
 804836c:	6e                   	outsb  %ds:(%esi),(%dx)
 804836d:	69 74 43 31 45 76 00 	imul   $0x5f007645,0x31(%ebx,%eax,2),%esi
 8048374:	5f 
 8048375:	5a                   	pop    %edx
 8048376:	4e                   	dec    %esi
 8048377:	53                   	push   %ebx
 8048378:	74 38                	je     80483b2 <_init-0x10e>
 804837a:	69 6f 73 5f 62 61 73 	imul   $0x7361625f,0x73(%edi),%ebp
 8048381:	65                   	gs
 8048382:	34 49                	xor    $0x49,%al
 8048384:	6e                   	outsb  %ds:(%esi),(%dx)
 8048385:	69 74 44 31 45 76 00 	imul   $0x5f007645,0x31(%esp,%eax,2),%esi
 804838c:	5f 
 804838d:	5a                   	pop    %edx
 804838e:	4e                   	dec    %esi
 804838f:	53                   	push   %ebx
 8048390:	6f                   	outsl  %ds:(%esi),(%dx)
 8048391:	6c                   	insb   (%dx),%es:(%edi)
 8048392:	73 45                	jae    80483d9 <_init-0xe7>
 8048394:	50                   	push   %eax
 8048395:	46                   	inc    %esi
 8048396:	52                   	push   %edx
 8048397:	53                   	push   %ebx
 8048398:	6f                   	outsl  %ds:(%esi),(%dx)
 8048399:	53                   	push   %ebx
 804839a:	5f                   	pop    %edi
 804839b:	45                   	inc    %ebp
 804839c:	00 6c 69 62          	add    %ch,0x62(%ecx,%ebp,2)
 80483a0:	63 2e                	arpl   %bp,(%esi)
 80483a2:	73 6f                	jae    8048413 <_init-0xad>
 80483a4:	2e 36 00 5f 49       	cs add %bl,%cs:%ss:0x49(%edi)
 80483a9:	4f                   	dec    %edi
 80483aa:	5f                   	pop    %edi
 80483ab:	73 74                	jae    8048421 <_init-0x9f>
 80483ad:	64 69 6e 5f 75 73 65 	imul   $0x64657375,%fs:0x5f(%esi),%ebp
 80483b4:	64 
 80483b5:	00 5f 5f             	add    %bl,0x5f(%edi)
 80483b8:	63 78 61             	arpl   %di,0x61(%eax)
 80483bb:	5f                   	pop    %edi
 80483bc:	61                   	popa   
 80483bd:	74 65                	je     8048424 <_init-0x9c>
 80483bf:	78 69                	js     804842a <_init-0x96>
 80483c1:	74 00                	je     80483c3 <_init-0xfd>
 80483c3:	73 79                	jae    804843e <_init-0x82>
 80483c5:	73 74                	jae    804843b <_init-0x85>
 80483c7:	65                   	gs
 80483c8:	6d                   	insl   (%dx),%es:(%edi)
 80483c9:	00 5f 5f             	add    %bl,0x5f(%edi)
 80483cc:	6c                   	insb   (%dx),%es:(%edi)
 80483cd:	69 62 63 5f 73 74 61 	imul   $0x6174735f,0x63(%edx),%esp
 80483d4:	72 74                	jb     804844a <_init-0x76>
 80483d6:	5f                   	pop    %edi
 80483d7:	6d                   	insl   (%dx),%es:(%edi)
 80483d8:	61                   	popa   
 80483d9:	69 6e 00 47 4c 49 42 	imul   $0x42494c47,0x0(%esi),%ebp
 80483e0:	43                   	inc    %ebx
 80483e1:	58                   	pop    %eax
 80483e2:	58                   	pop    %eax
 80483e3:	5f                   	pop    %edi
 80483e4:	33 2e                	xor    (%esi),%ebp
 80483e6:	34 00                	xor    $0x0,%al
 80483e8:	47                   	inc    %edi
 80483e9:	4c                   	dec    %esp
 80483ea:	49                   	dec    %ecx
 80483eb:	42                   	inc    %edx
 80483ec:	43                   	inc    %ebx
 80483ed:	5f                   	pop    %edi
 80483ee:	32 2e                	xor    (%esi),%ch
 80483f0:	30 00                	xor    %al,(%eax)
 80483f2:	47                   	inc    %edi
 80483f3:	4c                   	dec    %esp
 80483f4:	49                   	dec    %ecx
 80483f5:	42                   	inc    %edx
 80483f6:	43                   	inc    %ebx
 80483f7:	5f                   	pop    %edi
 80483f8:	32 2e                	xor    (%esi),%ch
 80483fa:	31 2e                	xor    %ebp,(%esi)
 80483fc:	33 00                	xor    (%eax),%eax

Disassembly of section .gnu.version:

080483fe <.gnu.version>:
 80483fe:	00 00                	add    %al,(%eax)
 8048400:	02 00                	add    (%eax),%al
 8048402:	00 00                	add    %al,(%eax)
 8048404:	00 00                	add    %al,(%eax)
 8048406:	03 00                	add    (%eax),%eax
 8048408:	04 00                	add    $0x0,%al
 804840a:	03 00                	add    (%eax),%eax
 804840c:	04 00                	add    $0x0,%al
 804840e:	04 00                	add    $0x0,%al
 8048410:	01 00                	add    %eax,(%eax)
 8048412:	04 00                	add    $0x0,%al
 8048414:	04 00                	add    $0x0,%al
 8048416:	04 00                	add    $0x0,%al

Disassembly of section .gnu.version_r:

08048418 <.gnu.version_r>:
 8048418:	01 00                	add    %eax,(%eax)
 804841a:	01 00                	add    %eax,(%eax)
 804841c:	01 00                	add    %eax,(%eax)
 804841e:	00 00                	add    %al,(%eax)
 8048420:	10 00                	adc    %al,(%eax)
 8048422:	00 00                	add    %al,(%eax)
 8048424:	20 00                	and    %al,(%eax)
 8048426:	00 00                	add    %al,(%eax)
 8048428:	74 29                	je     8048453 <_init-0x6d>
 804842a:	92                   	xchg   %eax,%edx
 804842b:	08 00                	or     %al,(%eax)
 804842d:	00 04 00             	add    %al,(%eax,%eax,1)
 8048430:	30 01                	xor    %al,(%ecx)
 8048432:	00 00                	add    %al,(%eax)
 8048434:	00 00                	add    %al,(%eax)
 8048436:	00 00                	add    %al,(%eax)
 8048438:	01 00                	add    %eax,(%eax)
 804843a:	02 00                	add    (%eax),%al
 804843c:	f1                   	icebp  
 804843d:	00 00                	add    %al,(%eax)
 804843f:	00 10                	add    %dl,(%eax)
 8048441:	00 00                	add    %al,(%eax)
 8048443:	00 00                	add    %al,(%eax)
 8048445:	00 00                	add    %al,(%eax)
 8048447:	00 10                	add    %dl,(%eax)
 8048449:	69 69 0d 00 00 03 00 	imul   $0x30000,0xd(%ecx),%ebp
 8048450:	3c 01                	cmp    $0x1,%al
 8048452:	00 00                	add    %al,(%eax)
 8048454:	10 00                	adc    %al,(%eax)
 8048456:	00 00                	add    %al,(%eax)
 8048458:	73 1f                	jae    8048479 <_init-0x47>
 804845a:	69 09 00 00 02 00    	imul   $0x20000,(%ecx),%ecx
 8048460:	46                   	inc    %esi
 8048461:	01 00                	add    %eax,(%eax)
 8048463:	00 00                	add    %al,(%eax)
 8048465:	00 00                	add    %al,(%eax)
	...

Disassembly of section .rel.dyn:

08048468 <.rel.dyn>:
 8048468:	f0 9f                	lock lahf 
 804846a:	04 08                	add    $0x8,%al
 804846c:	06                   	push   %es
 804846d:	02 00                	add    (%eax),%al
 804846f:	00 40 a0             	add    %al,-0x60(%eax)
 8048472:	04 08                	add    $0x8,%al
 8048474:	05                   	.byte 0x5
 8048475:	0c 00                	or     $0x0,%al
	...

Disassembly of section .rel.plt:

08048478 <.rel.plt>:
 8048478:	00 a0 04 08 07 01    	add    %ah,0x1070804(%eax)
 804847e:	00 00                	add    %al,(%eax)
 8048480:	04 a0                	add    $0xa0,%al
 8048482:	04 08                	add    $0x8,%al
 8048484:	07                   	pop    %es
 8048485:	02 00                	add    (%eax),%al
 8048487:	00 08                	add    %cl,(%eax)
 8048489:	a0 04 08 07 04       	mov    0x4070804,%al
 804848e:	00 00                	add    %al,(%eax)
 8048490:	0c a0                	or     $0xa0,%al
 8048492:	04 08                	add    $0x8,%al
 8048494:	07                   	pop    %es
 8048495:	05 00 00 10 a0       	add    $0xa0100000,%eax
 804849a:	04 08                	add    $0x8,%al
 804849c:	07                   	pop    %es
 804849d:	06                   	push   %es
 804849e:	00 00                	add    %al,(%eax)
 80484a0:	14 a0                	adc    $0xa0,%al
 80484a2:	04 08                	add    $0x8,%al
 80484a4:	07                   	pop    %es
 80484a5:	0b 00                	or     (%eax),%eax
 80484a7:	00 18                	add    %bl,(%eax)
 80484a9:	a0 04 08 07 07       	mov    0x7070804,%al
 80484ae:	00 00                	add    %al,(%eax)
 80484b0:	1c a0                	sbb    $0xa0,%al
 80484b2:	04 08                	add    $0x8,%al
 80484b4:	07                   	pop    %es
 80484b5:	08 00                	or     %al,(%eax)
 80484b7:	00 20                	add    %ah,(%eax)
 80484b9:	a0 04 08 07 0a       	mov    0xa070804,%al
	...

Disassembly of section .init:

080484c0 <_init>:
 80484c0:	53                   	push   %ebx
 80484c1:	83 ec 08             	sub    $0x8,%esp
 80484c4:	e8 00 00 00 00       	call   80484c9 <_init+0x9>
 80484c9:	5b                   	pop    %ebx
 80484ca:	81 c3 2b 1b 00 00    	add    $0x1b2b,%ebx
 80484d0:	8b 83 fc ff ff ff    	mov    -0x4(%ebx),%eax
 80484d6:	85 c0                	test   %eax,%eax
 80484d8:	74 05                	je     80484df <_init+0x1f>
 80484da:	e8 31 00 00 00       	call   8048510 <__gmon_start__@plt>
 80484df:	e8 3c 01 00 00       	call   8048620 <frame_dummy>
 80484e4:	e8 07 03 00 00       	call   80487f0 <__do_global_ctors_aux>
 80484e9:	83 c4 08             	add    $0x8,%esp
 80484ec:	5b                   	pop    %ebx
 80484ed:	c3                   	ret    

Disassembly of section .plt:

080484f0 <__cxa_atexit@plt-0x10>:
 80484f0:	ff 35 f8 9f 04 08    	pushl  0x8049ff8
 80484f6:	ff 25 fc 9f 04 08    	jmp    *0x8049ffc
 80484fc:	00 00                	add    %al,(%eax)
	...

08048500 <__cxa_atexit@plt>:
 8048500:	ff 25 00 a0 04 08    	jmp    *0x804a000
 8048506:	68 00 00 00 00       	push   $0x0
 804850b:	e9 e0 ff ff ff       	jmp    80484f0 <_init+0x30>

08048510 <__gmon_start__@plt>:
 8048510:	ff 25 04 a0 04 08    	jmp    *0x804a004
 8048516:	68 08 00 00 00       	push   $0x8
 804851b:	e9 d0 ff ff ff       	jmp    80484f0 <_init+0x30>

08048520 <system@plt>:
 8048520:	ff 25 08 a0 04 08    	jmp    *0x804a008
 8048526:	68 10 00 00 00       	push   $0x10
 804852b:	e9 c0 ff ff ff       	jmp    80484f0 <_init+0x30>

08048530 <_ZNSt8ios_base4InitC1Ev@plt>:
 8048530:	ff 25 0c a0 04 08    	jmp    *0x804a00c
 8048536:	68 18 00 00 00       	push   $0x18
 804853b:	e9 b0 ff ff ff       	jmp    80484f0 <_init+0x30>

08048540 <__libc_start_main@plt>:
 8048540:	ff 25 10 a0 04 08    	jmp    *0x804a010
 8048546:	68 20 00 00 00       	push   $0x20
 804854b:	e9 a0 ff ff ff       	jmp    80484f0 <_init+0x30>

08048550 <_ZNSt8ios_base4InitD1Ev@plt>:
 8048550:	ff 25 14 a0 04 08    	jmp    *0x804a014
 8048556:	68 28 00 00 00       	push   $0x28
 804855b:	e9 90 ff ff ff       	jmp    80484f0 <_init+0x30>

08048560 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>:
 8048560:	ff 25 18 a0 04 08    	jmp    *0x804a018
 8048566:	68 30 00 00 00       	push   $0x30
 804856b:	e9 80 ff ff ff       	jmp    80484f0 <_init+0x30>

08048570 <_ZNSolsEPFRSoS_E@plt>:
 8048570:	ff 25 1c a0 04 08    	jmp    *0x804a01c
 8048576:	68 38 00 00 00       	push   $0x38
 804857b:	e9 70 ff ff ff       	jmp    80484f0 <_init+0x30>

08048580 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@plt>:
 8048580:	ff 25 20 a0 04 08    	jmp    *0x804a020
 8048586:	68 40 00 00 00       	push   $0x40
 804858b:	e9 60 ff ff ff       	jmp    80484f0 <_init+0x30>

Disassembly of section .text:

08048590 <_start>:
 8048590:	31 ed                	xor    %ebp,%ebp
 8048592:	5e                   	pop    %esi
 8048593:	89 e1                	mov    %esp,%ecx
 8048595:	83 e4 f0             	and    $0xfffffff0,%esp
 8048598:	50                   	push   %eax
 8048599:	54                   	push   %esp
 804859a:	52                   	push   %edx
 804859b:	68 e0 87 04 08       	push   $0x80487e0
 80485a0:	68 70 87 04 08       	push   $0x8048770
 80485a5:	51                   	push   %ecx
 80485a6:	56                   	push   %esi
 80485a7:	68 44 86 04 08       	push   $0x8048644
 80485ac:	e8 8f ff ff ff       	call   8048540 <__libc_start_main@plt>
 80485b1:	f4                   	hlt    
 80485b2:	90                   	nop
 80485b3:	90                   	nop
 80485b4:	90                   	nop
 80485b5:	90                   	nop
 80485b6:	90                   	nop
 80485b7:	90                   	nop
 80485b8:	90                   	nop
 80485b9:	90                   	nop
 80485ba:	90                   	nop
 80485bb:	90                   	nop
 80485bc:	90                   	nop
 80485bd:	90                   	nop
 80485be:	90                   	nop
 80485bf:	90                   	nop

080485c0 <__do_global_dtors_aux>:
 80485c0:	55                   	push   %ebp
 80485c1:	89 e5                	mov    %esp,%ebp
 80485c3:	53                   	push   %ebx
 80485c4:	83 ec 04             	sub    $0x4,%esp
 80485c7:	80 3d cc a0 04 08 00 	cmpb   $0x0,0x804a0cc
 80485ce:	75 3f                	jne    804860f <__do_global_dtors_aux+0x4f>
 80485d0:	a1 d0 a0 04 08       	mov    0x804a0d0,%eax
 80485d5:	bb 08 9f 04 08       	mov    $0x8049f08,%ebx
 80485da:	81 eb 04 9f 04 08    	sub    $0x8049f04,%ebx
 80485e0:	c1 fb 02             	sar    $0x2,%ebx
 80485e3:	83 eb 01             	sub    $0x1,%ebx
 80485e6:	39 d8                	cmp    %ebx,%eax
 80485e8:	73 1e                	jae    8048608 <__do_global_dtors_aux+0x48>
 80485ea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 80485f0:	83 c0 01             	add    $0x1,%eax
 80485f3:	a3 d0 a0 04 08       	mov    %eax,0x804a0d0
 80485f8:	ff 14 85 04 9f 04 08 	call   *0x8049f04(,%eax,4)
 80485ff:	a1 d0 a0 04 08       	mov    0x804a0d0,%eax
 8048604:	39 d8                	cmp    %ebx,%eax
 8048606:	72 e8                	jb     80485f0 <__do_global_dtors_aux+0x30>
 8048608:	c6 05 cc a0 04 08 01 	movb   $0x1,0x804a0cc
 804860f:	83 c4 04             	add    $0x4,%esp
 8048612:	5b                   	pop    %ebx
 8048613:	5d                   	pop    %ebp
 8048614:	c3                   	ret    
 8048615:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8048619:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

08048620 <frame_dummy>:
 8048620:	55                   	push   %ebp
 8048621:	89 e5                	mov    %esp,%ebp
 8048623:	83 ec 18             	sub    $0x18,%esp
 8048626:	a1 0c 9f 04 08       	mov    0x8049f0c,%eax
 804862b:	85 c0                	test   %eax,%eax
 804862d:	74 12                	je     8048641 <frame_dummy+0x21>
 804862f:	b8 00 00 00 00       	mov    $0x0,%eax
 8048634:	85 c0                	test   %eax,%eax
 8048636:	74 09                	je     8048641 <frame_dummy+0x21>
 8048638:	c7 04 24 0c 9f 04 08 	movl   $0x8049f0c,(%esp)
 804863f:	ff d0                	call   *%eax
 8048641:	c9                   	leave  
 8048642:	c3                   	ret    
 8048643:	90                   	nop

08048644 <main>:
 8048644:	55                   	push   %ebp
 8048645:	89 e5                	mov    %esp,%ebp
 8048647:	83 e4 f0             	and    $0xfffffff0,%esp
 804864a:	83 ec 20             	sub    $0x20,%esp
 804864d:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8048654:	00 
 8048655:	c7 44 24 14 02 00 00 	movl   $0x2,0x14(%esp)
 804865c:	00 
 804865d:	8d 44 24 14          	lea    0x14(%esp),%eax
 8048661:	89 44 24 04          	mov    %eax,0x4(%esp)
 8048665:	8d 44 24 10          	lea    0x10(%esp),%eax
 8048669:	89 04 24             	mov    %eax,(%esp)
 804866c:	e8 b9 00 00 00       	call   804872a <_Z5swap2IiEvRT_S1_>
 8048671:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 8048676:	89 44 24 18          	mov    %eax,0x18(%esp)
 804867a:	b8 00 00 00 40       	mov    $0x40000000,%eax
 804867f:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8048683:	8d 44 24 1c          	lea    0x1c(%esp),%eax
 8048687:	89 44 24 04          	mov    %eax,0x4(%esp)
 804868b:	8d 44 24 18          	lea    0x18(%esp),%eax
 804868f:	89 04 24             	mov    %eax,(%esp)
 8048692:	e8 b5 00 00 00       	call   804874c <_Z5swap2IfEvRT_S1_>
 8048697:	c7 44 24 04 40 88 04 	movl   $0x8048840,0x4(%esp)
 804869e:	08 
 804869f:	c7 04 24 40 a0 04 08 	movl   $0x804a040,(%esp)
 80486a6:	e8 b5 fe ff ff       	call   8048560 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
 80486ab:	c7 44 24 04 80 85 04 	movl   $0x8048580,0x4(%esp)
 80486b2:	08 
 80486b3:	89 04 24             	mov    %eax,(%esp)
 80486b6:	e8 b5 fe ff ff       	call   8048570 <_ZNSolsEPFRSoS_E@plt>
 80486bb:	c7 04 24 4a 88 04 08 	movl   $0x804884a,(%esp)
 80486c2:	e8 59 fe ff ff       	call   8048520 <system@plt>
 80486c7:	b8 00 00 00 00       	mov    $0x0,%eax
 80486cc:	c9                   	leave  
 80486cd:	c3                   	ret    

080486ce <_Z41__static_initialization_and_destruction_0ii>:
 80486ce:	55                   	push   %ebp
 80486cf:	89 e5                	mov    %esp,%ebp
 80486d1:	83 ec 18             	sub    $0x18,%esp
 80486d4:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
 80486d8:	75 32                	jne    804870c <_Z41__static_initialization_and_destruction_0ii+0x3e>
 80486da:	81 7d 0c ff ff 00 00 	cmpl   $0xffff,0xc(%ebp)
 80486e1:	75 29                	jne    804870c <_Z41__static_initialization_and_destruction_0ii+0x3e>
 80486e3:	c7 04 24 d4 a0 04 08 	movl   $0x804a0d4,(%esp)
 80486ea:	e8 41 fe ff ff       	call   8048530 <_ZNSt8ios_base4InitC1Ev@plt>
 80486ef:	b8 50 85 04 08       	mov    $0x8048550,%eax
 80486f4:	c7 44 24 08 28 a0 04 	movl   $0x804a028,0x8(%esp)
 80486fb:	08 
 80486fc:	c7 44 24 04 d4 a0 04 	movl   $0x804a0d4,0x4(%esp)
 8048703:	08 
 8048704:	89 04 24             	mov    %eax,(%esp)
 8048707:	e8 f4 fd ff ff       	call   8048500 <__cxa_atexit@plt>
 804870c:	c9                   	leave  
 804870d:	c3                   	ret    

0804870e <_GLOBAL__sub_I_main>:
 804870e:	55                   	push   %ebp
 804870f:	89 e5                	mov    %esp,%ebp
 8048711:	83 ec 18             	sub    $0x18,%esp
 8048714:	c7 44 24 04 ff ff 00 	movl   $0xffff,0x4(%esp)
 804871b:	00 
 804871c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8048723:	e8 a6 ff ff ff       	call   80486ce <_Z41__static_initialization_and_destruction_0ii>
 8048728:	c9                   	leave  
 8048729:	c3                   	ret    

0804872a <_Z5swap2IiEvRT_S1_>:
 804872a:	55                   	push   %ebp
 804872b:	89 e5                	mov    %esp,%ebp
 804872d:	83 ec 10             	sub    $0x10,%esp
 8048730:	8b 45 08             	mov    0x8(%ebp),%eax
 8048733:	8b 00                	mov    (%eax),%eax
 8048735:	89 45 fc             	mov    %eax,-0x4(%ebp)
 8048738:	8b 45 0c             	mov    0xc(%ebp),%eax
 804873b:	8b 10                	mov    (%eax),%edx
 804873d:	8b 45 08             	mov    0x8(%ebp),%eax
 8048740:	89 10                	mov    %edx,(%eax)
 8048742:	8b 45 0c             	mov    0xc(%ebp),%eax
 8048745:	8b 55 fc             	mov    -0x4(%ebp),%edx
 8048748:	89 10                	mov    %edx,(%eax)
 804874a:	c9                   	leave  
 804874b:	c3                   	ret    

0804874c <_Z5swap2IfEvRT_S1_>:
 804874c:	55                   	push   %ebp
 804874d:	89 e5                	mov    %esp,%ebp
 804874f:	83 ec 10             	sub    $0x10,%esp
 8048752:	8b 45 08             	mov    0x8(%ebp),%eax
 8048755:	8b 00                	mov    (%eax),%eax
 8048757:	89 45 fc             	mov    %eax,-0x4(%ebp)
 804875a:	8b 45 0c             	mov    0xc(%ebp),%eax
 804875d:	8b 10                	mov    (%eax),%edx
 804875f:	8b 45 08             	mov    0x8(%ebp),%eax
 8048762:	89 10                	mov    %edx,(%eax)
 8048764:	8b 45 0c             	mov    0xc(%ebp),%eax
 8048767:	8b 55 fc             	mov    -0x4(%ebp),%edx
 804876a:	89 10                	mov    %edx,(%eax)
 804876c:	c9                   	leave  
 804876d:	c3                   	ret    
 804876e:	90                   	nop
 804876f:	90                   	nop

08048770 <__libc_csu_init>:
 8048770:	55                   	push   %ebp
 8048771:	57                   	push   %edi
 8048772:	56                   	push   %esi
 8048773:	53                   	push   %ebx
 8048774:	e8 69 00 00 00       	call   80487e2 <__i686.get_pc_thunk.bx>
 8048779:	81 c3 7b 18 00 00    	add    $0x187b,%ebx
 804877f:	83 ec 1c             	sub    $0x1c,%esp
 8048782:	8b 6c 24 30          	mov    0x30(%esp),%ebp
 8048786:	8d bb 08 ff ff ff    	lea    -0xf8(%ebx),%edi
 804878c:	e8 2f fd ff ff       	call   80484c0 <_init>
 8048791:	8d 83 04 ff ff ff    	lea    -0xfc(%ebx),%eax
 8048797:	29 c7                	sub    %eax,%edi
 8048799:	c1 ff 02             	sar    $0x2,%edi
 804879c:	85 ff                	test   %edi,%edi
 804879e:	74 29                	je     80487c9 <__libc_csu_init+0x59>
 80487a0:	31 f6                	xor    %esi,%esi
 80487a2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 80487a8:	8b 44 24 38          	mov    0x38(%esp),%eax
 80487ac:	89 2c 24             	mov    %ebp,(%esp)
 80487af:	89 44 24 08          	mov    %eax,0x8(%esp)
 80487b3:	8b 44 24 34          	mov    0x34(%esp),%eax
 80487b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 80487bb:	ff 94 b3 04 ff ff ff 	call   *-0xfc(%ebx,%esi,4)
 80487c2:	83 c6 01             	add    $0x1,%esi
 80487c5:	39 fe                	cmp    %edi,%esi
 80487c7:	75 df                	jne    80487a8 <__libc_csu_init+0x38>
 80487c9:	83 c4 1c             	add    $0x1c,%esp
 80487cc:	5b                   	pop    %ebx
 80487cd:	5e                   	pop    %esi
 80487ce:	5f                   	pop    %edi
 80487cf:	5d                   	pop    %ebp
 80487d0:	c3                   	ret    
 80487d1:	eb 0d                	jmp    80487e0 <__libc_csu_fini>
 80487d3:	90                   	nop
 80487d4:	90                   	nop
 80487d5:	90                   	nop
 80487d6:	90                   	nop
 80487d7:	90                   	nop
 80487d8:	90                   	nop
 80487d9:	90                   	nop
 80487da:	90                   	nop
 80487db:	90                   	nop
 80487dc:	90                   	nop
 80487dd:	90                   	nop
 80487de:	90                   	nop
 80487df:	90                   	nop

080487e0 <__libc_csu_fini>:
 80487e0:	f3 c3                	repz ret 

080487e2 <__i686.get_pc_thunk.bx>:
 80487e2:	8b 1c 24             	mov    (%esp),%ebx
 80487e5:	c3                   	ret    
 80487e6:	90                   	nop
 80487e7:	90                   	nop
 80487e8:	90                   	nop
 80487e9:	90                   	nop
 80487ea:	90                   	nop
 80487eb:	90                   	nop
 80487ec:	90                   	nop
 80487ed:	90                   	nop
 80487ee:	90                   	nop
 80487ef:	90                   	nop

080487f0 <__do_global_ctors_aux>:
 80487f0:	55                   	push   %ebp
 80487f1:	89 e5                	mov    %esp,%ebp
 80487f3:	53                   	push   %ebx
 80487f4:	83 ec 04             	sub    $0x4,%esp
 80487f7:	a1 fc 9e 04 08       	mov    0x8049efc,%eax
 80487fc:	83 f8 ff             	cmp    $0xffffffff,%eax
 80487ff:	74 13                	je     8048814 <__do_global_ctors_aux+0x24>
 8048801:	bb fc 9e 04 08       	mov    $0x8049efc,%ebx
 8048806:	66 90                	xchg   %ax,%ax
 8048808:	83 eb 04             	sub    $0x4,%ebx
 804880b:	ff d0                	call   *%eax
 804880d:	8b 03                	mov    (%ebx),%eax
 804880f:	83 f8 ff             	cmp    $0xffffffff,%eax
 8048812:	75 f4                	jne    8048808 <__do_global_ctors_aux+0x18>
 8048814:	83 c4 04             	add    $0x4,%esp
 8048817:	5b                   	pop    %ebx
 8048818:	5d                   	pop    %ebp
 8048819:	c3                   	ret    
 804881a:	90                   	nop
 804881b:	90                   	nop

Disassembly of section .fini:

0804881c <_fini>:
 804881c:	53                   	push   %ebx
 804881d:	83 ec 08             	sub    $0x8,%esp
 8048820:	e8 00 00 00 00       	call   8048825 <_fini+0x9>
 8048825:	5b                   	pop    %ebx
 8048826:	81 c3 cf 17 00 00    	add    $0x17cf,%ebx
 804882c:	e8 8f fd ff ff       	call   80485c0 <__do_global_dtors_aux>
 8048831:	83 c4 08             	add    $0x8,%esp
 8048834:	5b                   	pop    %ebx
 8048835:	c3                   	ret    

Disassembly of section .rodata:

08048838 <_fp_hw>:
 8048838:	03 00                	add    (%eax),%eax
	...

0804883c <_IO_stdin_used>:
 804883c:	01 00                	add    %eax,(%eax)
 804883e:	02 00                	add    (%eax),%al
 8048840:	68 65 6c 6c 6f       	push   $0x6f6c6c65
 8048845:	2e 2e 2e 2e 00 70 61 	cs cs cs add %dh,%cs:0x61(%eax)
 804884c:	75 73                	jne    80488c1 <_IO_stdin_used+0x85>
 804884e:	65                   	gs
	...

Disassembly of section .eh_frame_hdr:

08048850 <.eh_frame_hdr>:
 8048850:	01 1b                	add    %ebx,(%ebx)
 8048852:	03 3b                	add    (%ebx),%edi
 8048854:	50                   	push   %eax
 8048855:	00 00                	add    %al,(%eax)
 8048857:	00 09                	add    %cl,(%ecx)
 8048859:	00 00                	add    %al,(%eax)
 804885b:	00 a0 fc ff ff 6c    	add    %ah,0x6cfffffc(%eax)
 8048861:	00 00                	add    %al,(%eax)
 8048863:	00 f4                	add    %dh,%ah
 8048865:	fd                   	std    
 8048866:	ff                   	(bad)  
 8048867:	ff 90 00 00 00 7e    	call   *0x7e000000(%eax)
 804886d:	fe                   	(bad)  
 804886e:	ff                   	(bad)  
 804886f:	ff f0                	push   %eax
 8048871:	00 00                	add    %al,(%eax)
 8048873:	00 be fe ff ff 10    	add    %bh,0x10fffffe(%esi)
 8048879:	01 00                	add    %eax,(%eax)
 804887b:	00 da                	add    %bl,%dl
 804887d:	fe                   	(bad)  
 804887e:	ff                   	(bad)  
 804887f:	ff b0 00 00 00 fc    	pushl  -0x4000000(%eax)
 8048885:	fe                   	(bad)  
 8048886:	ff                   	(bad)  
 8048887:	ff d0                	call   *%eax
 8048889:	00 00                	add    %al,(%eax)
 804888b:	00 20                	add    %ah,(%eax)
 804888d:	ff                   	(bad)  
 804888e:	ff                   	(bad)  
 804888f:	ff 30                	pushl  (%eax)
 8048891:	01 00                	add    %eax,(%eax)
 8048893:	00 90 ff ff ff 6c    	add    %dl,0x6cffffff(%eax)
 8048899:	01 00                	add    %eax,(%eax)
 804889b:	00 92 ff ff ff 80    	add    %dl,-0x7f000001(%edx)
 80488a1:	01 00                	add    %eax,(%eax)
	...

Disassembly of section .eh_frame:

080488a4 <__FRAME_END__-0x140>:
 80488a4:	14 00                	adc    $0x0,%al
 80488a6:	00 00                	add    %al,(%eax)
 80488a8:	00 00                	add    %al,(%eax)
 80488aa:	00 00                	add    %al,(%eax)
 80488ac:	01 7a 52             	add    %edi,0x52(%edx)
 80488af:	00 01                	add    %al,(%ecx)
 80488b1:	7c 08                	jl     80488bb <_IO_stdin_used+0x7f>
 80488b3:	01 1b                	add    %ebx,(%ebx)
 80488b5:	0c 04                	or     $0x4,%al
 80488b7:	04 88                	add    $0x88,%al
 80488b9:	01 00                	add    %eax,(%eax)
 80488bb:	00 20                	add    %ah,(%eax)
 80488bd:	00 00                	add    %al,(%eax)
 80488bf:	00 1c 00             	add    %bl,(%eax,%eax,1)
 80488c2:	00 00                	add    %al,(%eax)
 80488c4:	2c fc                	sub    $0xfc,%al
 80488c6:	ff                   	(bad)  
 80488c7:	ff a0 00 00 00 00    	jmp    *0x0(%eax)
 80488cd:	0e                   	push   %cs
 80488ce:	08 46 0e             	or     %al,0xe(%esi)
 80488d1:	0c 4a                	or     $0x4a,%al
 80488d3:	0f 0b                	ud2    
 80488d5:	74 04                	je     80488db <_IO_stdin_used+0x9f>
 80488d7:	78 00                	js     80488d9 <_IO_stdin_used+0x9d>
 80488d9:	3f                   	aas    
 80488da:	1a 3b                	sbb    (%ebx),%bh
 80488dc:	2a 32                	sub    (%edx),%dh
 80488de:	24 22                	and    $0x22,%al
 80488e0:	1c 00                	sbb    $0x0,%al
 80488e2:	00 00                	add    %al,(%eax)
 80488e4:	40                   	inc    %eax
 80488e5:	00 00                	add    %al,(%eax)
 80488e7:	00 5c fd ff          	add    %bl,-0x1(%ebp,%edi,8)
 80488eb:	ff 8a 00 00 00 00    	decl   0x0(%edx)
 80488f1:	41                   	inc    %ecx
 80488f2:	0e                   	push   %cs
 80488f3:	08 85 02 42 0d 05    	or     %al,0x50d4202(%ebp)
 80488f9:	02 86 c5 0c 04 04    	add    0x4040cc5(%esi),%al
 80488ff:	00 1c 00             	add    %bl,(%eax,%eax,1)
 8048902:	00 00                	add    %al,(%eax)
 8048904:	60                   	pusha  
 8048905:	00 00                	add    %al,(%eax)
 8048907:	00 22                	add    %ah,(%edx)
 8048909:	fe                   	(bad)  
 804890a:	ff                   	(bad)  
 804890b:	ff 22                	jmp    *(%edx)
 804890d:	00 00                	add    %al,(%eax)
 804890f:	00 00                	add    %al,(%eax)
 8048911:	41                   	inc    %ecx
 8048912:	0e                   	push   %cs
 8048913:	08 85 02 42 0d 05    	or     %al,0x50d4202(%ebp)
 8048919:	5e                   	pop    %esi
 804891a:	c5 0c 04             	lds    (%esp,%eax,1),%ecx
 804891d:	04 00                	add    $0x0,%al
 804891f:	00 1c 00             	add    %bl,(%eax,%eax,1)
 8048922:	00 00                	add    %al,(%eax)
 8048924:	80 00 00             	addb   $0x0,(%eax)
 8048927:	00 24 fe             	add    %ah,(%esi,%edi,8)
 804892a:	ff                   	(bad)  
 804892b:	ff 22                	jmp    *(%edx)
 804892d:	00 00                	add    %al,(%eax)
 804892f:	00 00                	add    %al,(%eax)
 8048931:	41                   	inc    %ecx
 8048932:	0e                   	push   %cs
 8048933:	08 85 02 42 0d 05    	or     %al,0x50d4202(%ebp)
 8048939:	5e                   	pop    %esi
 804893a:	c5 0c 04             	lds    (%esp,%eax,1),%ecx
 804893d:	04 00                	add    $0x0,%al
 804893f:	00 1c 00             	add    %bl,(%eax,%eax,1)
 8048942:	00 00                	add    %al,(%eax)
 8048944:	a0 00 00 00 86       	mov    0x86000000,%al
 8048949:	fd                   	std    
 804894a:	ff                   	(bad)  
 804894b:	ff 40 00             	incl   0x0(%eax)
 804894e:	00 00                	add    %al,(%eax)
 8048950:	00 41 0e             	add    %al,0xe(%ecx)
 8048953:	08 85 02 42 0d 05    	or     %al,0x50d4202(%ebp)
 8048959:	7c c5                	jl     8048920 <_IO_stdin_used+0xe4>
 804895b:	0c 04                	or     $0x4,%al
 804895d:	04 00                	add    $0x0,%al
 804895f:	00 1c 00             	add    %bl,(%eax,%eax,1)
 8048962:	00 00                	add    %al,(%eax)
 8048964:	c0 00 00             	rolb   $0x0,(%eax)
 8048967:	00 a6 fd ff ff 1c    	add    %ah,0x1cfffffd(%esi)
 804896d:	00 00                	add    %al,(%eax)
 804896f:	00 00                	add    %al,(%eax)
 8048971:	41                   	inc    %ecx
 8048972:	0e                   	push   %cs
 8048973:	08 85 02 42 0d 05    	or     %al,0x50d4202(%ebp)
 8048979:	58                   	pop    %eax
 804897a:	c5 0c 04             	lds    (%esp,%eax,1),%ecx
 804897d:	04 00                	add    $0x0,%al
 804897f:	00 38                	add    %bh,(%eax)
 8048981:	00 00                	add    %al,(%eax)
 8048983:	00 e0                	add    %ah,%al
 8048985:	00 00                	add    %al,(%eax)
 8048987:	00 e8                	add    %ch,%al
 8048989:	fd                   	std    
 804898a:	ff                   	(bad)  
 804898b:	ff 61 00             	jmp    *0x0(%ecx)
 804898e:	00 00                	add    %al,(%eax)
 8048990:	00 41 0e             	add    %al,0xe(%ecx)
 8048993:	08 85 02 41 0e 0c    	or     %al,0xc0e4102(%ebp)
 8048999:	87 03                	xchg   %eax,(%ebx)
 804899b:	41                   	inc    %ecx
 804899c:	0e                   	push   %cs
 804899d:	10 86 04 41 0e 14    	adc    %al,0x140e4104(%esi)
 80489a3:	83 05 4e 0e 30 02 4a 	addl   $0x4a,0x2300e4e
 80489aa:	0e                   	push   %cs
 80489ab:	14 41                	adc    $0x41,%al
 80489ad:	0e                   	push   %cs
 80489ae:	10 c3                	adc    %al,%bl
 80489b0:	41                   	inc    %ecx
 80489b1:	0e                   	push   %cs
 80489b2:	0c c6                	or     $0xc6,%al
 80489b4:	41                   	inc    %ecx
 80489b5:	0e                   	push   %cs
 80489b6:	08 c7                	or     %al,%bh
 80489b8:	41                   	inc    %ecx
 80489b9:	0e                   	push   %cs
 80489ba:	04 c5                	add    $0xc5,%al
 80489bc:	10 00                	adc    %al,(%eax)
 80489be:	00 00                	add    %al,(%eax)
 80489c0:	1c 01                	sbb    $0x1,%al
 80489c2:	00 00                	add    %al,(%eax)
 80489c4:	1c fe                	sbb    $0xfe,%al
 80489c6:	ff                   	(bad)  
 80489c7:	ff 02                	incl   (%edx)
 80489c9:	00 00                	add    %al,(%eax)
 80489cb:	00 00                	add    %al,(%eax)
 80489cd:	00 00                	add    %al,(%eax)
 80489cf:	00 10                	add    %dl,(%eax)
 80489d1:	00 00                	add    %al,(%eax)
 80489d3:	00 30                	add    %dh,(%eax)
 80489d5:	01 00                	add    %eax,(%eax)
 80489d7:	00 0a                	add    %cl,(%edx)
 80489d9:	fe                   	(bad)  
 80489da:	ff                   	(bad)  
 80489db:	ff 04 00             	incl   (%eax,%eax,1)
 80489de:	00 00                	add    %al,(%eax)
 80489e0:	00 00                	add    %al,(%eax)
	...

080489e4 <__FRAME_END__>:
 80489e4:	00 00                	add    %al,(%eax)
	...

Disassembly of section .init_array:

08049ef8 <__init_array_start>:
 8049ef8:	0e                   	push   %cs
 8049ef9:	87 04 08             	xchg   %eax,(%eax,%ecx,1)

Disassembly of section .ctors:

08049efc <__CTOR_LIST__>:
 8049efc:	ff                   	(bad)  
 8049efd:	ff                   	(bad)  
 8049efe:	ff                   	(bad)  
 8049eff:	ff 00                	incl   (%eax)

08049f00 <__CTOR_END__>:
 8049f00:	00 00                	add    %al,(%eax)
	...

Disassembly of section .dtors:

08049f04 <__DTOR_LIST__>:
 8049f04:	ff                   	(bad)  
 8049f05:	ff                   	(bad)  
 8049f06:	ff                   	(bad)  
 8049f07:	ff 00                	incl   (%eax)

08049f08 <__DTOR_END__>:
 8049f08:	00 00                	add    %al,(%eax)
	...

Disassembly of section .jcr:

08049f0c <__JCR_END__>:
 8049f0c:	00 00                	add    %al,(%eax)
	...

Disassembly of section .dynamic:

08049f10 <_DYNAMIC>:
 8049f10:	01 00                	add    %eax,(%eax)
 8049f12:	00 00                	add    %al,(%eax)
 8049f14:	01 00                	add    %eax,(%eax)
 8049f16:	00 00                	add    %al,(%eax)
 8049f18:	01 00                	add    %eax,(%eax)
 8049f1a:	00 00                	add    %al,(%eax)
 8049f1c:	f1                   	icebp  
 8049f1d:	00 00                	add    %al,(%eax)
 8049f1f:	00 0c 00             	add    %cl,(%eax,%eax,1)
 8049f22:	00 00                	add    %al,(%eax)
 8049f24:	c0 84 04 08 0d 00 00 	rolb   $0x0,0xd08(%esp,%eax,1)
 8049f2b:	00 
 8049f2c:	1c 88                	sbb    $0x88,%al
 8049f2e:	04 08                	add    $0x8,%al
 8049f30:	19 00                	sbb    %eax,(%eax)
 8049f32:	00 00                	add    %al,(%eax)
 8049f34:	f8                   	clc    
 8049f35:	9e                   	sahf   
 8049f36:	04 08                	add    $0x8,%al
 8049f38:	1b 00                	sbb    (%eax),%eax
 8049f3a:	00 00                	add    %al,(%eax)
 8049f3c:	04 00                	add    $0x0,%al
 8049f3e:	00 00                	add    %al,(%eax)
 8049f40:	f5                   	cmc    
 8049f41:	fe                   	(bad)  
 8049f42:	ff 6f ac             	ljmp   *-0x54(%edi)
 8049f45:	81 04 08 05 00 00 00 	addl   $0x5,(%eax,%ecx,1)
 8049f4c:	ac                   	lods   %ds:(%esi),%al
 8049f4d:	82                   	(bad)  
 8049f4e:	04 08                	add    $0x8,%al
 8049f50:	06                   	push   %es
 8049f51:	00 00                	add    %al,(%eax)
 8049f53:	00 dc                	add    %bl,%ah
 8049f55:	81 04 08 0a 00 00 00 	addl   $0xa,(%eax,%ecx,1)
 8049f5c:	52                   	push   %edx
 8049f5d:	01 00                	add    %eax,(%eax)
 8049f5f:	00 0b                	add    %cl,(%ebx)
 8049f61:	00 00                	add    %al,(%eax)
 8049f63:	00 10                	add    %dl,(%eax)
 8049f65:	00 00                	add    %al,(%eax)
 8049f67:	00 15 00 00 00 00    	add    %dl,0x0
 8049f6d:	00 00                	add    %al,(%eax)
 8049f6f:	00 03                	add    %al,(%ebx)
 8049f71:	00 00                	add    %al,(%eax)
 8049f73:	00 f4                	add    %dh,%ah
 8049f75:	9f                   	lahf   
 8049f76:	04 08                	add    $0x8,%al
 8049f78:	02 00                	add    (%eax),%al
 8049f7a:	00 00                	add    %al,(%eax)
 8049f7c:	48                   	dec    %eax
 8049f7d:	00 00                	add    %al,(%eax)
 8049f7f:	00 14 00             	add    %dl,(%eax,%eax,1)
 8049f82:	00 00                	add    %al,(%eax)
 8049f84:	11 00                	adc    %eax,(%eax)
 8049f86:	00 00                	add    %al,(%eax)
 8049f88:	17                   	pop    %ss
 8049f89:	00 00                	add    %al,(%eax)
 8049f8b:	00 78 84             	add    %bh,-0x7c(%eax)
 8049f8e:	04 08                	add    $0x8,%al
 8049f90:	11 00                	adc    %eax,(%eax)
 8049f92:	00 00                	add    %al,(%eax)
 8049f94:	68 84 04 08 12       	push   $0x12080484
 8049f99:	00 00                	add    %al,(%eax)
 8049f9b:	00 10                	add    %dl,(%eax)
 8049f9d:	00 00                	add    %al,(%eax)
 8049f9f:	00 13                	add    %dl,(%ebx)
 8049fa1:	00 00                	add    %al,(%eax)
 8049fa3:	00 08                	add    %cl,(%eax)
 8049fa5:	00 00                	add    %al,(%eax)
 8049fa7:	00 fe                	add    %bh,%dh
 8049fa9:	ff                   	(bad)  
 8049faa:	ff 6f 18             	ljmp   *0x18(%edi)
 8049fad:	84 04 08             	test   %al,(%eax,%ecx,1)
 8049fb0:	ff                   	(bad)  
 8049fb1:	ff                   	(bad)  
 8049fb2:	ff 6f 02             	ljmp   *0x2(%edi)
 8049fb5:	00 00                	add    %al,(%eax)
 8049fb7:	00 f0                	add    %dh,%al
 8049fb9:	ff                   	(bad)  
 8049fba:	ff 6f fe             	ljmp   *-0x2(%edi)
 8049fbd:	83 04 08 00          	addl   $0x0,(%eax,%ecx,1)
	...

Disassembly of section .got:

08049ff0 <.got>:
 8049ff0:	00 00                	add    %al,(%eax)
	...

Disassembly of section .got.plt:

08049ff4 <_GLOBAL_OFFSET_TABLE_>:
 8049ff4:	10 9f 04 08 00 00    	adc    %bl,0x804(%edi)
 8049ffa:	00 00                	add    %al,(%eax)
 8049ffc:	00 00                	add    %al,(%eax)
 8049ffe:	00 00                	add    %al,(%eax)
 804a000:	06                   	push   %es
 804a001:	85 04 08             	test   %eax,(%eax,%ecx,1)
 804a004:	16                   	push   %ss
 804a005:	85 04 08             	test   %eax,(%eax,%ecx,1)
 804a008:	26 85 04 08          	test   %eax,%es:(%eax,%ecx,1)
 804a00c:	36 85 04 08          	test   %eax,%ss:(%eax,%ecx,1)
 804a010:	46                   	inc    %esi
 804a011:	85 04 08             	test   %eax,(%eax,%ecx,1)
 804a014:	56                   	push   %esi
 804a015:	85 04 08             	test   %eax,(%eax,%ecx,1)
 804a018:	66 85 04 08          	test   %ax,(%eax,%ecx,1)
 804a01c:	76 85                	jbe    8049fa3 <_DYNAMIC+0x93>
 804a01e:	04 08                	add    $0x8,%al
 804a020:	86                   	.byte 0x86
 804a021:	85 04 08             	test   %eax,(%eax,%ecx,1)

Disassembly of section .data:

0804a024 <__data_start>:
 804a024:	00 00                	add    %al,(%eax)
	...

0804a028 <__dso_handle>:
 804a028:	00 00                	add    %al,(%eax)
	...

Disassembly of section .bss:

0804a040 <_ZSt4cout@@GLIBCXX_3.4>:
	...

0804a0cc <completed.6159>:
 804a0cc:	00 00                	add    %al,(%eax)
	...

0804a0d0 <dtor_idx.6161>:
 804a0d0:	00 00                	add    %al,(%eax)
	...

0804a0d4 <_ZStL8__ioinit>:
 804a0d4:	00 00                	add    %al,(%eax)
	...

Disassembly of section .comment:

00000000 <.comment>:
   0:	47                   	inc    %edi
   1:	43                   	inc    %ebx
   2:	43                   	inc    %ebx
   3:	3a 20                	cmp    (%eax),%ah
   5:	28 55 62             	sub    %dl,0x62(%ebp)
   8:	75 6e                	jne    78 <_init-0x8048448>
   a:	74 75                	je     81 <_init-0x804843f>
   c:	2f                   	das    
   d:	4c                   	dec    %esp
   e:	69 6e 61 72 6f 20 34 	imul   $0x34206f72,0x61(%esi),%ebp
  15:	2e 36 2e 33 2d 31 75 	cs ss xor %cs:%ss:0x75627531,%ebp
  1c:	62 75 
  1e:	6e                   	outsb  %ds:(%esi),(%dx)
  1f:	74 75                	je     96 <_init-0x804842a>
  21:	35 29 20 34 2e       	xor    $0x2e342029,%eax
  26:	36 2e 33 00          	ss xor %cs:%ss:(%eax),%eax
