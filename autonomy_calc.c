#include <stdio.h>

int main() {
    // Variable declarations
    double Hc, Mu, Hi, Mg, P, R, Me, Mai, Mc;
    double Mrr, Ml, Cm, Mcx, Bh, Mrd, Ht, Mmd;

    // Constant
    double z = 4.5e6;

    // Input
    printf("Enter Human Correctness (Hc): ");
    scanf("%lf", &Hc);

    printf("Enter Measure of Uncertainty (Mu): ");
    scanf("%lf", &Mu);

    printf("Enter Human Intervention (Hi): ");
    scanf("%lf", &Hi);

    printf("Enter Measure of the Set of Goals (Mg): ");
    scanf("%lf", &Mg);

    printf("Enter Performance (P): ");
    scanf("%lf", &P);

    printf("Enter Robustness (R): ");
    scanf("%lf", &R);

    printf("Enter Measure of Entropy (Me): ");
    scanf("%lf", &Me);

    printf("Enter Measure of AI Capabilities (Mai): ");
    scanf("%lf", &Mai);

    printf("Enter Measure of Communication & Connectivity (Mc): ");
    scanf("%lf", &Mc);

    printf("Enter Measure of Regulations & Restrictions (Mrr): ");
    scanf("%lf", &Mrr);

    printf("Enter Measure of Self-Learning Capability (Ml): ");
    scanf("%lf", &Ml);

    printf("Enter Model Complexity (Cm): ");
    scanf("%lf", &Cm);

    printf("Enter Mission Complexity (Mcx): ");
    scanf("%lf", &Mcx);

    printf("Enter Battery Health (Bh): ");
    scanf("%lf", &Bh);

    printf("Enter Measure of Redundancy present (Mrd): ");
    scanf("%lf", &Mrd);

    printf("Enter Measure of Trust (Ht): ");
    scanf("%lf", &Ht);

    printf("Enter Modular Design (Mmd): ");
    scanf("%lf", &Mmd);

    // Calculations
    double AL1 = Hc * Mu;
    double AL2 = Mg * Hi;
    double AL3 = P * R;
    double AL4 = Mg * Me;
    double AL5 = (Hi != 0) ? (Mai * Mai / Hi) : 0;  // Avoid divide by zero
    double AL6 = Mu * Mc;
    double AL7 = (Mc != 0) ? (Mg / Mc) : 0;
    double AL8 = (Hi != 0) ? (Ml * Ml / Hi) : 0;
    double AL9 = (Hi != 0) ? (Cm * Cm / Hi) : 0;
    double AL10 = Mcx * Bh;
    double AL11 = Mrd * Bh;
    double AL12 = Ht * Hi * Mrr;
    double AL13 = (Hi != 0) ? (Mmd / Hi) : 0;

    double A_total = (AL1 + AL2 + AL7 + AL10 + AL11 + AL12 + AL13 + AL5 + AL8 + AL9 + AL3*AL4 + AL5*AL6) / z;

    // Output
    printf("\nAutonomy Level Total (A_total): %.6f\n", A_total);

    return 0;
}
