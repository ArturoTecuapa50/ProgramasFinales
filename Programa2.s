/*
Autor: Tecuapa Gallardo Arturo
Titulo: Ejercicio tema3
Date: 08/12/2021
*/

.data
.text
.global main
main:
	mov r0
	mov r1
	mov r2, r1
	mov r3
	mov r4
	CMP r0
	BEQ caso1
	CMP r0
	BEQ caso2
function:
	ADD r1
	CMP r1, r0
	BEQ final

	ADD r4, r3, r2
	mov r2, r3
	mov r3, r4
	BAL funcion

caso1:
	mov r4
	BAL final

caso2:
	mov r4
	BAL final

final:
	mov r1, r0
	mov r2, r4
