#include "monty.h"
/**
 *freer- frees an
 */
void freer(void)
{
	if (mon.buff)
		free(mon.buff);
	if (mon.args)
		free(mon.args);
	if (mon.stack)
		free_dlistint(mon.stack);
	if (mon.file)
		fclose(mon.file);
}
