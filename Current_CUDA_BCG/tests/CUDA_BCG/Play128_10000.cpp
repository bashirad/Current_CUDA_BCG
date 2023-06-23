/*
Copyright (c) Ron Coleman
Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

/*

Play128_10000
tid        pl     hands      wins       bjs  charlies     loses    breaks      dbjs    pushes
  0 -0.004806     10299      4035       485         0      2898      1735       329       817
  1 -0.012909     10342      3980       475         0      2862      1763       347       915
  2 -0.010047     10302      4043       445         0      2853      1757       348       856
  3  0.003113     10279      4098       474         0      2893      1693       315       806
  4  0.001166     10288      4025       464         0      2875      1693       335       896
  5 -0.008273     10274      3961       504         0      2920      1764       320       805
  6 -0.008548     10295      4005       468         0      2913      1708       342       859
  7 -0.009133     10292      4020       462         0      2887      1749       332       842
  8 -0.006911     10273      4003       466         0      2857      1786       321       840
  9 -0.013377     10279      3968       495         0      2921      1777       314       804
 10  0.009549     10315      4085       473         0      2823      1774       312       848
 11  0.009982     10268      4105       443         0      2893      1663       322       842
 12  0.006948     10291      4055       493         0      2881      1692       318       852
 13 -0.025847     10272      3933       459         0      2962      1728       318       872
 14 -0.029635     10292      3904       506         0      2968      1759       317       838
 15 -0.018981     10300      3958       491         0      2879      1774       350       848
 16  0.004452     10332      4041       488         0      2892      1686       318       907
 17 -0.000097     10296      4065       492         0      2873      1745       324       797
 18 -0.010559     10276      4007       457         0      2931      1673       365       843
 19  0.005104     10287      3995       485         0      2846      1702       342       917
 20  0.003633     10323      4037       473         0      2887      1746       290       890
 21 -0.001210     10329      4056       457         0      2914      1730       296       876
 22  0.010998     10320      4046       483         0      2858      1703       331       899
 23 -0.016519     10291      3951       472         0      2878      1759       328       903
 24 -0.004749     10317      4070       462         0      2908      1724       310       843
 25 -0.024788     10267      3949       465         0      2878      1768       349       858
 26  0.000533     10326      4003       491         0      2893      1730       331       878
 27 -0.005031     10335      3990       512         0      2935      1721       300       877
 28 -0.009566     10297      4006       449         0      2928      1679       314       921
 29 -0.012351     10323      4027       467         0      2923      1760       294       852
 30  0.004221     10306      4093       463         0      2810      1751       331       858
 31  0.001264     10287      4051       464         0      2860      1742       326       844
 32 -0.006849     10294      4021       477         0      2956      1680       319       841
 33 -0.006590     10318      4041       448         0      2869      1751       340       869
 34 -0.008729     10310      4014       468         0      2889      1726       335       878
 35  0.000631     10301      3989       507         0      2841      1748       293       923
 36 -0.007483     10290      3980       472         0      2908      1745       293       892
 37 -0.013263     10292      4027       453         0      2926      1718       321       847
 38 -0.019575     10294      3955       471         0      2929      1721       343       875
 39  0.009621     10290      4120       448         0      2872      1654       335       861
 40 -0.004321     10298      4010       459         0      2898      1682       328       921
 41 -0.010959     10311      3960       494         0      2881      1734       345       897
 42  0.001359     10304      4037       476         0      2860      1742       311       878
 43  0.001946     10278      4009       494         0      2872      1785       292       826
 44 -0.006511     10291      4035       438         0      2946      1652       343       877
 45 -0.010003     10297      3986       474         0      2917      1712       315       893
 46 -0.007752     10320      3980       482         0      2919      1735       336       868
 47 -0.008794     10291      3995       473         0      2951      1703       330       839
 48 -0.000146     10276      4065       445         0      2884      1693       325       864
 49  0.000048     10315      4051       451         0      2914      1727       318       854
 50 -0.000776     10303      3983       502         0      2807      1794       352       865
 51 -0.003015     10283      4014       462         0      2909      1710       306       882
 52 -0.007530     10292      4002       465         0      2887      1743       341       854
 53 -0.007374     10306      3983       470         0      2944      1704       329       876
 54 -0.006801     10292      4021       462         0      2867      1776       304       862
 55 -0.003874     10326      4012       454         0      2917      1699       327       917
 56 -0.010800     10324      4004       473         0      2883      1755       311       898
 57  0.002867     10288      4056       461         0      2833      1695       356       887
 58 -0.030783     10298      3948       426         0      2993      1723       329       879
 59 -0.012254     10282      3983       474         0      2892      1747       332       854
 60 -0.010390     10298      3986       476         0      2897      1735       339       865
 61  0.000436     10312      4072       461         0      2880      1747       298       854
 62  0.004179     10290      4036       468         0      2870      1701       288       927
 63 -0.004649     10325      3973       498         0      2922      1690       320       922
 64 -0.011977     10270      3945       478         0      2910      1704       320       913
 65 -0.002464     10350      4073       461         0      2925      1699       337       855
 66  0.004178     10292      4042       502         0      2937      1684       307       820
 67 -0.000824     10318      4055       453         0      2876      1749       317       868
 68 -0.005056     10284      4035       446         0      2859      1758       310       876
 69 -0.010845     10327      4015       460         0      2913      1761       302       876
 70  0.004169     10314      4054       472         0      2872      1705       349       862
 71 -0.006420     10280      3998       470         0      2890      1729       343       850
 72  0.003405     10279      4055       448         0      2882      1681       306       907
 73  0.012228     10304      4145       430         0      2783      1765       304       877
 74 -0.006567     10355      4087       442         0      2933      1657       358       878
 75  0.007284     10297      4083       480         0      2823      1745       287       879
 76  0.008906     10330      4082       482         0      2863      1753       314       836
 77 -0.000778     10289      4028       486         0      2914      1690       318       853
 78  0.013774     10273      4029       507         0      2793      1761       313       870
 79 -0.021615     10294      3943       485         0      2911      1778       341       836
 80 -0.011009     10310      4033       441         0      2952      1747       302       835
 81  0.006365     10290      4060       479         0      2825      1739       310       877
 82 -0.008921     10313      4063       466         0      2845      1758       348       833
 83 -0.006317     10290      4058       454         0      2885      1737       312       844
 84  0.010677     10303      4123       494         0      2843      1739       329       775
 85 -0.013794     10294      4031       428         0      2946      1692       307       890
 86  0.008599     10292      4059       471         0      2851      1719       339       853
 87 -0.021494     10305      3986       429         0      2952      1752       346       840
 88  0.002234     10294      4013       492         0      2822      1747       327       893
 89 -0.016398     10306      3980       456         0      3016      1701       301       852
 90 -0.034153     10292      3884       465         0      2977      1730       364       872
 91 -0.009846     10309      4049       419         0      2896      1682       353       910
 92 -0.012737     10285      4013       450         0      2850      1734       374       864
 93 -0.002619     10308      4074       446         0      2891      1723       317       857
 94  0.002524     10301      4063       464         0      2873      1721       306       874
 95  0.006911     10273      4019       498         0      2848      1727       339       842
 96 -0.001267     10260      4076       432         0      2861      1744       299       848
 97  0.007638     10278      4011       519         0      2835      1743       299       871
 98  0.000971     10297      4056       464         0      2830      1738       317       892
 99 -0.003449     10294      3997       477         0      2980      1665       294       881
100 -0.001068     10301      4029       478         0      2825      1744       327       898
101  0.006704     10293      4038       510         0      2878      1697       320       850
102 -0.013275     10320      4012       458         0      2899      1731       345       875
103  0.012670     10339      4089       474         0      2855      1705       317       899
104  0.001658     10255      4092       426         0      2827      1733       332       845
105 -0.008317     10280      3978       461         0      2917      1702       302       920
106  0.020957     10307      4068       516         0      2740      1789       316       878
107 -0.009366     10303      4018       467         0      2915      1725       328       850
108 -0.013361     10291      4024       447         0      2908      1740       322       850
109 -0.030795     10294      3919       462         0      3012      1720       351       830
110  0.011565     10290      4043       504         0      2825      1740       334       844
111 -0.005635     10293      4012       492         0      2867      1754       324       844
112  0.000049     10297      4007       475         0      2830      1727       336       922
113  0.001797     10296      4035       485         0      2890      1637       324       925
114  0.004803     10305      4012       529         0      2956      1659       302       847
115 -0.013776     10308      3999       462         0      2900      1767       322       858
116 -0.017861     10302      3973       462         0      2947      1733       336       851
117 -0.003794     10279      4029       438         0      2869      1734       337       872
118 -0.001797     10293      4042       433         0      2867      1755       306       890
119  0.015814     10307      4090       476         0      2844      1669       334       894
120  0.019550     10307      4101       505         0      2846      1661       306       888
121 -0.002482     10272      3988       471         0      2797      1747       341       928
122 -0.008249     10304      3993       474         0      2880      1793       307       857
123 -0.003393     10314      4081       452         0      2895      1673       360       853
124  0.015212     10288      4101       477         0      2805      1703       332       870
125  0.001897     10280      4014       495         0      2828      1729       355       859
126 -0.014934     10312      3977       474         0      2975      1705       339       842
127 -0.002138     10291      4039       462         0      2892      1734       313       851

tid     total     nones     stays      hits   doubles    splits
  0     14627         0      7381      5898      1049       299
  1     14762         0      7387      5963      1069       343
  2     14671         0      7402      5948      1017       304
  3     14676         0      7441      5917      1038       280
  4     14637         0      7447      5862      1038       290
  5     14613         0      7300      5921      1118       274
  6     14635         0      7419      5878      1040       298
  7     14687         0      7350      5976      1069       292
  8     14787         0      7341      6121      1052       273
  9     14576         0      7323      5901      1073       279
 10     14869         0      7398      6147      1009       315
 11     14610         0      7431      5843      1068       268
 12     14607         0      7431      5838      1046       292
 13     14638         0      7398      5914      1054       272
 14     14670         0      7407      5931      1040       292
 15     14627         0      7345      5935      1045       302
 16     14706         0      7422      5868      1084       332
 17     14645         0      7408      5915      1025       297
 18     14660         0      7444      5886      1052       278
 19     14630         0      7388      5857      1094       291
 20     14540         0      7379      5782      1056       323
 21     14680         0      7432      5880      1039       329
 22     14542         0      7388      5745      1088       321
 23     14663         0      7370      5971      1028       294
 24     14711         0      7396      5919      1078       318
 25     14652         0      7378      5984      1019       271
 26     14814         0      7402      6002      1083       327
 27     14618         0      7385      5787      1110       336
 28     14717         0      7481      5937      1001       298
 29     14674         0      7359      5913      1078       324
 30     14742         0      7400      6015      1021       306
 31     14593         0      7339      5889      1076       289
 32     14584         0      7404      5796      1090       294
 33     14820         0      7345      6079      1078       318
 34     14822         0      7433      6038      1041       310
 35     14723         0      7425      5971      1023       304
 36     14747         0      7383      6017      1056       291
 37     14663         0      7441      5913      1015       294
 38     14656         0      7384      5911      1066       295
 39     14581         0      7493      5767      1031       290
 40     14630         0      7361      5848      1122       299
 41     14707         0      7440      5927      1029       311
 42     14613         0      7392      5844      1070       307
 43     14611         0      7359      5921      1051       280
 44     14677         0      7503      5858      1022       294
 45     14592         0      7421      5844      1030       297
 46     14697         0      7428      5913      1035       321
 47     14738         0      7398      5969      1080       291
 48     14614         0      7379      5882      1076       277
 49     14759         0      7376      5974      1093       316
 50     14634         0      7379      5946      1006       303
 51     14715         0      7383      5972      1075       285
 52     14708         0      7387      5993      1036       292
 53     14672         0      7468      5875      1020       309
 54     14652         0      7387      5981       989       295
 55     14616         0      7453      5792      1044       327
 56     14788         0      7372      6056      1033       327
 57     14569         0      7392      5828      1061       288
 58     14584         0      7375      5841      1066       302
 59     14606         0      7366      5894      1063       283
 60     14797         0      7404      6050      1045       298
 61     14586         0      7426      5818      1028       314
 62     14631         0      7406      5892      1042       291
 63     14593         0      7429      5788      1049       327
 64     14482         0      7450      5772       990       270
 65     14799         0      7521      5911      1014       353
 66     14676         0      7471      5872      1036       297
 67     14745         0      7377      5964      1086       318
 68     14571         0      7346      5898      1042       285
 69     14714         0      7398      5924      1064       328
 70     14682         0      7392      5887      1088       315
 71     14541         0      7398      5822      1036       285
 72     14728         0      7416      5952      1080       280
 73     14585         0      7407      5857      1016       305
 74     14728         0      7494      5835      1044       355
 75     14667         0      7398      5920      1051       298
 76     14636         0      7367      5850      1086       333
 77     14630         0      7366      5849      1125       290
 78     14687         0      7339      6015      1058       275
 79     14646         0      7370      5960      1022       294
 80     14652         0      7392      5901      1049       310
 81     14603         0      7363      5888      1060       292
 82     14612         0      7412      5866      1021       313
 83     14682         0      7396      5960      1035       291
 84     14610         0      7389      5875      1042       304
 85     14626         0      7448      5880      1004       294
 86     14744         0      7444      5975      1032       293
 87     14695         0      7343      5963      1083       306
 88     14662         0      7387      5930      1050       295
 89     14675         0      7422      5877      1066       310
 90     14629         0      7360      5907      1070       292
 91     14851         0      7477      6047      1018       309
 92     14712         0      7381      5970      1076       285
 93     14878         0      7457      6094      1016       311
 94     14682         0      7358      5908      1114       302
 95     14695         0      7387      5992      1041       275
 96     14521         0      7320      5861      1080       260
 97     14625         0      7354      5912      1079       280
 98     14624         0      7416      5880      1029       299
 99     14543         0      7455      5750      1041       297
100     14698         0      7335      5944      1118       301
101     14706         0      7436      5935      1042       293
102     14719         0      7425      5940      1031       323
103     14659         0      7433      5808      1075       343
104     14662         0      7385      5975      1047       255
105     14753         0      7404      6009      1060       280
106     14743         0      7369      6023      1040       311
107     14686         0      7389      5906      1086       305
108     14534         0      7341      5800      1102       291
109     14753         0      7408      5996      1052       297
110     14589         0      7366      5870      1062       291
111     14711         0      7397      5983      1038       293
112     14733         0      7432      5998      1004       299
113     14695         0      7488      5873      1037       297
114     14650         0      7436      5831      1075       308
115     14680         0      7346      5971      1053       310
116     14682         0      7430      5906      1041       305
117     14558         0      7377      5839      1061       281
118     14710         0      7377      5973      1067       293
119     14599         0      7445      5786      1061       307
120     14592         0      7420      5788      1076       308
121     14601         0      7346      5922      1059       274
122     14631         0      7376      5936      1012       307
123     14661         0      7440      5821      1084       316
124     14680         0      7412      5909      1071       288
125     14613         0      7379      5890      1062       282
126     14833         0      7415      6040      1065       313
127     14629         0      7365      5887      1086       291
*/
#include <stdio.h>
#include "Strategy.h"
#include "Game.h"
#include "Kpax.h"
#include "Helpers.h"

#define NUM_BLOCKS 4
#define NUM_THREADS_PER_BLOCK 32
#define NUM_THREADS_TOTAL (NUM_BLOCKS * NUM_THREADS_PER_BLOCK)
#define NUM_STRATEGIES NUM_THREADS_TOTAL
#define NUM_GAMES 10000

void Play128_10000(void) {
  Strategy strategies[NUM_STRATEGIES];

  for (int index = 0; index < NUM_STRATEGIES; index++) {
    strategies[index] = BasicStrategy_();
  }

  Game statistics[NUM_STRATEGIES];
  for (int index = 0; index < NUM_STRATEGIES; index++) {
    statistics[index] = Game_();
  }

  int status = evaluate(NUM_BLOCKS, NUM_STRATEGIES, strategies, NUM_GAMES, statistics);

  if (status == 0) {
	  printf("Play128_10000\n");
	  report(strategies, statistics, NUM_STRATEGIES);
  }
  else
    fprintf(stderr, "evaluate returned code = %d\n", status);
}