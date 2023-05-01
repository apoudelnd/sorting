# Comparing (shell, quick and merge) sorting in X86 and ARM using gem5 simulation


All the releavant sorting codes in c can be found in **codes** folder

All the releavant configuration files for gem5 c can be found in **gem5_configs** folder

All gem5 simulation stats output for the array size of 25k can be found in **simulation_runs_25k** folder

All gem5 simulation stats output for the array size of 500k can be found in **simulation_runs_500k** folder

The simulation run files are saved in the following format:

~~~bash
{arch_name}_{sort_alg}_l1_{l1cachesize(Kb)}_a{assoc}_l2_{l2cachesize(Kb)}_a{assoc}.txt
~~~

~~~bash
If l2 configs not given in filename: l2 = 64Kb and associativity = 8 is the default setting. 
~~~
