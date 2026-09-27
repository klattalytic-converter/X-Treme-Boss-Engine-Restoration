/*DMA source address forwarding parameters (when using the SBL function)*/

typedef struct {
    Uint32 sar;

    Uint32 dar;

    Uint32 tcr;

    Uint32 dem;

    Uint32 sm;

    Uint32 ts;

    Uint32 ar;

    Uint32 ie;

    Uint32 drcr;

    Uint32 msk;

}DmaCpuPrm;