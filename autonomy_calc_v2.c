#include <stdio.h>

int main() {
    // Variable declarations
    double Hc, Mu, Hi, Mg, P, R, Me, Mai, Mc;
    double Mrr, Ml, Cm, Mcx, Bh, Mrd, Ht, Mmd;

    // Constant
    double z = 4.5e6;

    // Input
    printf("Operator Decision Accuracy (%): ");
    scanf("%lf", &Hc);

    printf("Environmental Unpredictability (%): ");
    scanf("%lf", &Mu);

    printf("Human Supervision (Hours / Day) (0-24 hr): ");
    scanf("%lf", &Hi);

    printf("Goal Clarity Score	(0-10): ");
    scanf("%lf", &Mg);

    printf("Task Completion Rate (%): ");
    scanf("%lf", &P);

    printf("Error Recovery Success Rate (%): ");
    scanf("%lf", &R);

    printf("System Randomness Index (0-10): ");
    scanf("%lf", &Me);

    printf("AI Scenario Handling Capacity (0-10): ");
    scanf("%lf", &Mai);

    printf("Network Reliability (%): ");
    scanf("%lf", &Mc);

    printf("Compliance Check Score (%): ");
    scanf("%lf", &Mrr);

    printf("Self-Training Episodes / Week (0-50): ");
    scanf("%lf", &Ml);

    printf("Decision Rules or Layers (0-20): ");
    scanf("%lf", &Cm);

    printf("External Variables Handled (0-10): ");
    scanf("%lf", &Mcx);

    printf("Battery Capacity Retention (%): ");
    scanf("%lf", &Bh);

    printf("Redundant Subsystems Count (0-10): ");
    scanf("%lf", &Mrd);

    printf("Operator Trust Level (0-10): ");
    scanf("%lf", &Ht);

    printf("Time to Replace Module (0-120 minutes): ");
    scanf("%lf", &Mmd);

    //normalization 
    
    Hi = Hi * 100 / 24;
    Mg = Mg *10;
    Me = Me * 10;
    Mai = Mai *10;
    Ml = Ml * 2;
    Cm = Cm * 5;
    Mcx = Mcx * 10;
    Mrd = Mrd * 10;
    Ht = Ht * 10;
    Mmd = 100 - (Mmd * 100 / 120);

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
