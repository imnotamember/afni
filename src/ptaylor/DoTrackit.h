#ifndef _DOTRACKIT_HEADER_
#define _DOTRACKIT_HEADER_

#define EPS_V (0.000001) // for eigvec 'vel' to not have badness dividing
#define CONV (3.141592654/180)
#define EPS_MASK (0.001) // theshold for masked data to be ignored
#define EPS_L (0.00001)
#define PIo2 (3.141592654/2)
#define MINEIG (0) // minimum allowed eigenvalue


int TrackIt(float ****CC, int *IND, float *PHYSIND, 
            float *Edge, int *dim, float minFA, 
	    float maxAng, int arrMax, 
            int **T, float **flT, int FB, float *physL);

#endif /* _DOTRACKIT_HEADER_ */







