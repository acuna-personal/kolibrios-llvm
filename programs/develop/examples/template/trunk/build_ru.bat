@erase lang.inc
@echo lang fix ru >lang.inc
@fasm template.asm template
@erase lang.inc
@pause