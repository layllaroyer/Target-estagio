#include <stdio.h>

int main()
{
    float sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48, outros = 19849.53, faturamentoTotal = 0.0;

    faturamentoTotal = sp+rj+mg+es+outros;
    printf("Faturamento estado de SP: %.2f%%\n", (sp/faturamentoTotal)*100);
    printf("Faturamento estado de RJ: %.2f%%\n", (rj/faturamentoTotal)*100);
    printf("Faturamento estado de MG: %.2f%%\n", (mg/faturamentoTotal)*100);
    printf("Faturamento estado de ES: %.2f%%\n", (es/faturamentoTotal)*100);
    printf("Faturamento de outros estados: %.2f%%\n", (outros/faturamentoTotal)*100);
    return 0;
}
