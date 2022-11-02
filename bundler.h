#define EF {0.08167, 0.01492, 0.02782, 0.04253, 0.12702, 0.02228, 0.02015, 0.06094, 0.06966, 0.00153, 0.00772, 0.04025, 0.02406, 0.06749, 0.07707, 0.01929, 0.00095, 0.05987, 0.06327, 0.09056, 0.02758, 0.00978, 0.02360, 0.00150, 0.01974, 0.00074};

int *frequency_table(char *n);

int letter_count(char *n);

double chi_sq(int shift, int n, int *text_frequency);

int offset( char c);

char encode (char c, int shift);

char decode_string(char c, int encoded_shift_value);

int encode_shift(char *c);

double *create_chi_table(char *string);

int to_decode(int shift);

void print_chi_square (double *chiSquare);

void print_text_frequency (int *table);