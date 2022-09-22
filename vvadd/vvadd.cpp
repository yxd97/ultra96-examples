void vvadd(
    int* a,
    int* b,
    int* c,
    unsigned length
) {
    #pragma HLS interface m_axi port=a offset=slave bundle=gmem
    #pragma HLS interface m_axi port=b offset=slave bundle=gmem
    #pragma HLS interface m_axi port=c offset=slave bundle=gmem
    #pragma HLS interface s_axilite port=a bundle=control
    #pragma HLS interface s_axilite port=b bundle=control
    #pragma HLS interface s_axilite port=c bundle=control
    #pragma HLS interface s_axilite port=length bundle=control
    #pragma HLS interface s_axilite port=return bundle=control
    for (unsigned i = 0; i < length; i++) {
        #pragma HLS pipeline
        c[i] = a[i] + b[i];
    }
}