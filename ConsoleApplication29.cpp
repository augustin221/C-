#include <iostream>
#include <ctime>

iint main()
{
	int  timer = 0, step, solution = 0, useNew, accepted;
	float temperature = INITIAL_TEMPERATURE;
	memberType current, working, best;
	FILE *fp;
	fp = fopen("stats.txt", "w");
	srand(time(NULL));
	initializeSolution(&current);
	computeEnergy(&current);
	best.energy = 100.0;
	copySolution(&working, &current);
	while (temperature > FINAL_TEMPERATURE) {
		printf("Temperature : %f\n", temperature);
		accepted = 0;
		/* Изменены решения случайным образом */
		for (step = 0; step < STEPS_PER_CHANGE; step++) {
			useNew = 0;
			tweakSolution(&working);
			computeEnergy(&working);
			if (working.energy <= current.energy) {
				useNew = 1;
			}
			else {
				float test = getSRand();
				float delta = working.energy					current.energy;
				float calc = exp(					delta / temperature);
				if (calc > test) {
					accepted++;
					useNew = 1;
				}
			}
			if (useNew) {
				useNew = 0;
				copySolution(&current, &working);
				if (current.energy < best.energy) {
					copySolution(&best, &current);
					solution = 1;
				}
			}
			else {
				copySolution(&working, &current);
			}
		}
		fprintf(fp, "%d %f %f %d\n",
			timer++, temperature, best.energy, accepted);
		printf("Best energy = %f\n", best.energy);
		temperature *= ALPHA;
	}
	fclose(fp);
	if (solution) {
		emitSolution(&best);
	}
	return 0;