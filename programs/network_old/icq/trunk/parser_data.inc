;
; ����� ��� parser.inc
;
;





;
; ��� 䠩��, ����� �㦭� ������
;
fname db '/sys/ki.cfg',0

;
;  ⠡���� ���祭�� 
;
;  +----+-------------+-----------------+
;  | in | Variable    | Variable        |
;  | de | name        | string          |
;  | x  |             |                 |
;  |    |             |                 |
;  +----+-------------+-----------------+
;  |    |             |                 |
;  |    |             |                 |
;  | 1  | UIN         | 'XXXXX..XX'     |
;  |    |             |                 |
;  +----+-------------+-----------------+
;  |                  |                 |
;
;  ����㧪� int ���� �� ॠ��������
;
;  +----+-------------+-----------------+
;  | in | Variable    | Variable        |
;  | de | name        | int             |
;  | x  |             |                 |
;  |    |             |                 |
;  +----+-------------+-----------------+
;  |    |             |                 |
;  |    |             |                 |
;  | 1  |    BUFFSIZE |  XXXXXXXX       |
;  |    |             |                 |
;  +----+-------------+-----------------+
;  |                  |                 |
;
;



;nvtable db (TABLE_SIZE * NAME_LEN)   dup 0
vtable  db (TABLE_SIZE * VAR_LEN)    dup 0

finfo sinfo

;
; ��������� ⠡���� ���� ��६�����
;
nvtable db 'UIN',(VNAME_LEN - 3) dup 0
	db 'PASS',(VNAME_LEN - 4) dup 0
	db 'ICQIP',(VNAME_LEN - 5) dup 0
        db ((TABLE_SIZE - 3) * VNAME_LEN) dup 0

;
; ��� ���樠����樨 ⠡���
;
;
;
;name1 db 'UIN',(VNAME_LEN - 3) dup 0
;name2 db 'PASS',(VNAME_LEN - 4) dup 0
;name3 db 'ICQIP',(VNAME_LEN - 5) dup 0


;
; ���� ��� �����/�뢮��
;
iobuff db IOBUFF_SIZE dup 0
;
; ���饭�� � 䠩��
;
shift  dd 0

;
; ��६���� ��� �࠭���� ����஢ 
; ᨬ����� ��砫� ����� ��६�����
; ����, ࠢ��, ���� ���祭��
stnpos dd 0
ednpos dd 0
eqpos  dd 0
edvpos dd 0
;
;����� ��ப� ��� ��।������ �訡����
;
strnum dd 0

;
; ���� ��� �뢮�� ����㦥����� ���䨣�
;
cfgbuff db (VAR_LEN + VNAME_LEN + 8) dup 0
cfgbuff.len = $ - cfgbuff

