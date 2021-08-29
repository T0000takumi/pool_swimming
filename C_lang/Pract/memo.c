#include<stdio.h>

int main()
{
    char a;
    int b, c;
    double d;

    a = "X";
    b = 10;
    c = 100;
    d = 3,194;

    return 0;
}

/*
    %c がわからない・識別子test が繋がってないのがわからない
    %c Charactor ＝ 文字, %d Decimal ＝ 2進数
*/

int main()
{
    char x = "X"
    int test = 100;
    printf("%cこれはテストです\n", x);
    printf("%f回目のテストです", test);

    return 0;
}

/*  標準入力：scanf ("フォーマット",&変数名);  */

int main() {
    int get_var;

    printf("数値を代入してください\n");
    scanf("%d", &get_var);
    printf("入力された数値は %d です", get_var);

    return 0;
}

/*  オペランドと演算子（変数名 = 式）  */

int main() {
    int var = 10;
    int ans;

    ans = (var + 5)*10;

    printf("変数ans = %d", ans);

    return 0;
}

/* 簡易計算機 */

int main() {
    int ope1;
    int ope2;

    printf("与えられた2つの数の和を表示させます。\n");
    printf("まず最初の数を入力してください\n");
    scanf("%d", &ope1);

    printf("%d に加算する数を入力してください\n", ope1);
    scanf("%d", &ope2);

    printf("答えは\t %d \tです。", ope1 + ope2);

    return 0;
}

int main(void)
{
    /* 円の直径と面積 */
    double r, l, s; //doubleなので、有効小数点は16桁。かつ、識別子は%lf
    r = 10.0;
    l = (r * 2) * 3.1416;
    s = r * r * 3.1416;

    printf("半径\t%lf\tの円の円周は\t%lf\n", r, l);
    printf("半径\t%lf\tの円の面積は\t%lf", r, s);

    return  0;
}

int main(void)
{
    double r;

    printf("半径ｒを入力すると、球の体積と表面積を出力します");
    scanf("入力した数値\tr：%lf\n", &r);

    printf("入力された%lfの値の平方と３乗を求めます\n", r);
    printf("%lfの平方は%lf\n", r, r * r);
    printf("%lfの３乗は%lf\n", r, r * r * r);

    printf("半径%lfの球の体積は、%lf\tです\n", r, 4/3 * r * r * r * 3.1416);
    printf("半径%lfの球の表面積は、%lf\tです", r, 4 * r * r * 3.1416);

    return 0;
}

int main()
{
    char str;
    int get_int;

    printf("文字コードの仕組みを調べます。1文字入力してください\n");
    scanf("%c", &str);

    printf("\n 入力コード \t = &c \n", str);
    printf("入力コードの10進数 \t = %d \n", str);
    printf("入力コードの8進数 \t = %o \n", str);
    printf("入力コードの16進数 \t = %x \n", str);

    printf("\n コードに加算したい定数を半角英数で入力してください。\n");
    scanf("%d", &get_int);
    
    /*
        10進数：「D」ecimal・8進数：「O」ctal・16進数：he「x」adecimal ※ int：integer ＝ 整数
        これ、誤った入力コード入れた場合エクスプレスって起動されるの？
        例えば str=A, get_var=2 みたいな時...
    */

    printf("\n 入力コード \t = %c \n", str + get_int);
    printf("\n コードの10進数 \t = %d \n", str + get_int);
    printf("\n コードの8進数 \t = %o \n", str + get_int);
    printf("\n コードの16進数 \t = %x \n", str + get_int);

    return 0;

}

int main() {

    int var = 10;

    var++;
    printf("インクリメント後のvar = %d \n", var);

    var--;
    printf("デクリメント後のvar = %d \n", var);

    return 0;
}

/*
    前置：インクリメントorデクリメントしてから値を返す
    後置：まず変数の値を返してからインクリメントorデクリメントする
    
    後置演算子というのは、複雑な多項式や演算順序が重要な場合は影響が出てきます
    
    ＊答え＊
    前置インクリメント演算子 = 1
    後置インクリメント演算子 = 0
    前置デクリメント演算子 = 0
    後置デクリメント演算子 = 1

    var1 = 0, var2 = 0
*/

int main() {
    int var1 = 0; , var2 = 0;

    printf("前置インクリメント =%d\n", ++var1); /* 先にインクリメントして1になる → 代入されて、１ */
    printf("後置インクリメント =%d\n\n", var2++); /* 0が代入される。その後インクリメントされるも、数値がないので動かない */
    printf("前置デクリメント =%d\n", --var1); /* 先にデクリメントして0になる → 代入されて、0*/
    printf("後置デクリメント =%d\n\n", var2--); /* 0が代入される。その後デクリメントされるも、数値がないので動かない ... って答え「0」... 後置でクレメントがわかってないかも*/

    printf("var1=%d var2=%d", var1, var2);

    return 0;
}

int main() {
    int x = 5;

    /* %d に渡される値は x の値であり、その後に x がインクリメントされる */
    printf("テストの数値は\t %d です", x++);

    return 0;
}

int main() {
    int var1 = 8;
    int var2 = 8;

    var1++;
    printf("var1 = %d\n", var1);

    ++var2;
    printf("var2 = %d\n", var2);

    return 0;
}


/* 【後置】 */
int main() {
    int var1 = 10;
    int var2;

    var2 = var1++;

    /* 
        var2 = var1++;
        ⇅
        var2 = var1
        var1 = var1 +1
    */ 

    return 0;
}

/* 【前置】 */
int main() {
    int var1 = 10;
    int var2;

    var2 = ++var1;

    /* 
        var2 = ++var1;
        ⇅
        var1 = var1 + 1
        var2 = var1
    */ 

    return 0;
}

int main(void) {
    int var1 = 8;
    int var2;
    int var3 = 8;
    int var4;

    printf("var1 = %d\n", var1); /* 8 */

    var2 = var1++;
    printf("var1 = %d\n", var1); /* 9 */
    printf("var2 = %d\n", var2); /* 8 */

    printf("var3 = %d\n", var3); /* 8 */

    var4 = ++var3;
    printf("var3 = %d\n", var3); /* 8 ←ここ違った... var3 ＝ var3+1 だから、9だ！ */
    printf("var4 = %d\n", var4); /* 9 */

    return 0;
}

int main(){
    int ans;
    int get_int;

    printf("数値を入力してください\n");
    scanf("%d", &get_int); /* scanf()関数の時は、「&」を2個目の引数につけるのを忘れず！ */

    ans = (get_int == 10);
    printf("ans = %d", ans);

    return 0;
}

int main(){
    int ans;

    ans = (10 == 10);
    if(ans) printf("aとｂが等しいため、この文章は表示されます。");

    ans = (10 != 10);
    if(ans) printf("aとｂが真であるため、偽と判断されました。\n この文章は表示されません。");

    return 0;
}

int main(){
    int var1;
    int var2;

    printf("2つの数値を比較します。\n 1つ目の数値を入力してください。\n");
    scanf("%d", &var1);
    printf("2つ目の数値を入力してください。\n");
    scanf("%d", &var2);

    if(var1 > var2) printf("%d は %d より小さいです。", var1, var2);
    if(var1 < var2) printf("%d は %d より大きいです。", var1, var2);
    if(var1 == var2) printf("%d は &d と等しいです。", var1, var2);

    return 0;
}

/* こうやって連続して入れ込むと、一回いっかい「入力して下ださい」が出てきて、3回入力するタイミングがあるってことか...?? */
int main() {
    char ch;
    char ch2;
    char ch3;
    
    printf("半角英数で1文字入力してください。");    /* %d は10進数、%c は文字 */
    scanf("%c", &ch);
    if(ch == 'x') printf("待ってました、\"X\"頂きました！");    /* 引数で使う文字にはシングルクォテーション「' '」を忘れず！ */
    if(ch != 'x') printf("パスワードが違います。");

    printf("半角英数で1文字入力してください。");
    scanf("%c", &ch2);
    if(ch2 == 'y') printf("待ってました、\"Y\"頂きました！");   /* if関数のイコールは、代入のイコールと違って「==」であることを忘れず！ */
    else{
        printf("パスワードが違います。");
    }

    printf("半角英数で1文字入力してください。");
    scanf("%c", &ch3);
    if(ch3 == 'z') printf("待ってました、\"Z\"頂きました！");
    else if(ch3 == 'a') printf("なるほど、それも悪くないですね。");
    else{
        printf("パスワードが違います。ヒントはアルファベットの前後の文字です。");
    }
    return 0;
}

/* コードブロックの例 */
int main();

int main()
{
    char ch;

    printf("半角英数で1文字入力してください。");
    scanf("%c", &ch);

    if(ch == 'x'){
        printf("Xおめでとう！");
        printf("Xおめでとう！");
        printf("Xおめでとう！");
    }

    else printf("パスワードが違います");

    return 0;
}

/* 三項演算子：「(式)? "真の処理" : "偽の処理」 */
int main()
{
    int var;

    printf("0か1の値を入力してください");
    scanf("%d", &var);
    printf("%s", var ? "真です" : "偽です"); /* 「%c」は文字で、「%s」は文字列。つまり、apple が書けるのは%sの時だけ */

    /*
        （これとおんなじ意味）
        if(var == '0') printf("真です");
        else printf("偽です");
    */

    return 0;
}

int main(void) 
{
    int a;

    printf("整数を入力してください\t=");
    scanf("%d", &a);

    a >= 10 ? printf("%d は10以上。\n", a) : printf("%d は10より小さい。\n", a); /* 三項演算子の場合、真の場合と木の場合の区切りは [：]  */

    return 0;
}

/* 多分岐プログラム */

int main()
{
    int var;

    printf("あなたは国内首都圏に住んでいますか？\n
        \tはい＝1\tいいえ=2\tその他=3\n");
    scanf("%d", &var);

    switch(var){    /* var 代入される文字によってcaseが変わる */
    case 1:
        printf("シティーボーイだな！");
        break;
    case 2:
        printf("田舎者めが！");
        break;
    case 3:
        printf("おや、海外勢...?)";
        break;
    default:    /* 多分岐プログラムで [default] を忘れると指定した選択以外だと作動しなくなる  */
        printf("指定した数を選んで下さい");
    }
    return 0;
}

int main()
{
    int var;

    printf("さぁ勇者よ、このつるぎを抜いてみよ！");
    scanf("%c", &var);

    switch(var){
    case 'A' :
        printf("はい！\n...よし、いくぞ...");
        break;
    case 'B' :
        printf("いや僕には無理ですってww\n他の人に任せますわ〜");
        break;
    default:
        printf("AかBを選択して下さい。");
    }

    return 0;
}

/* for文制御 */
itn main()
{
    int var;

    for(var=1 ; var <= 10 ; var++) printf("%d回目のループです", var);   /* var が11になったところでループを抜け、プログラム終了 */

    return 0;
}

int main (){
    int count;
    int max;

    printf("ループ回数を設定してください。\n")
    scanf("%d", &max);

    for(count=0 ; count < max ; count++){
        printf("%d回目のリープになりました\r", count); /* [\r] は先頭に戻るの意 */
        if (count == 500){
            printf("500回目のループなので、強制終了します。");
            count = max; /* 何 [count = max ;] って...存在する意味はなんとなくわかるけど、具体的にどう言う効果を出してるの.... */
        }
    }
    printf("ループを脱出しました。");

    return 0;
}

/* for は省略が可能 */
int main() 
{
    int count;
    count = 0;

    for(;count <= 10 ; count++){
        printf("％ｄ回目の繰り返しです\n", count);
    }
    return 0;
}

/* for制御文は省略可能で、for(;;) と全て省略することも可能 */
int main() 
{
    int count;
    count = 0;

    for (;;){
        count++;
        printf("%d回目の繰り返しです", count);
        if(count >= 10) break;
    }
}

/* 入力された値が100以上ならループ1000回、値がその他ならループ50回 */
int main()
{
    int count1;
    int count2;
    int var;

    printf("任意の数を入力してください。 \n 入力後、ループが開始されます。");
    scanf("%d", &var);

    if(var >= 100){
        for(count1=0 ; count1 <= 1000 ; count1++){
            printf("%d回目のループです\r", count1);
            if (count1 == 1000){
                printf("1000回目のループなので、強制終了します。");
                count1 = 1000;
            }
        }
    }
    else{
        for(count2=0 ; count2 <= 50 ; count2++){
            printf("%d回目のループです\r", count2);
            if (count2 == 50){
                printf("500回目のループなので、強制終了します。");
                count2 = 50;
            }
        }
    }
    printf("ループを脱出しました");
    return 0;
}

/* 【While文制御】whileに与えられている式は1、つまり真（True)なので無限ループする */
int main(){
    while(1) printf("終了するには\tctrl\t+\tC\tを押して強制終了してください");
}

int main()
{
    int count = 0;

    while (1){
        printf("/");
        if(count == 25)printf("\n\tこのテキストは繰り返されます\n");
        if(count == 50) break;

        count++;    /* count = count + 1 で、1ずつ増え続ける。25になった時テキストが繰り返され、50になると [break;] で終了する */
    }
    printf("\nループを抜け出しました、プログラムを終了します");
    return 0;
}

int main()
{
    int count;

    while(count <= 50){
        printf("/");
        if(count <= 10)printf("\n深刻なサイバー攻撃が検知されました。");

        count++;
    }
    printf("ループを脱出しました。プログラムを終了します。");
    return 0;
}

/* そういえば宣言子と制御文の違い...?? */

/* whileは(式)が真である限りくり返かえされるけど、do whileは1回1回条件式を評価し、最低1回でも実行される */
int main()
{
    int count = 1;
    int max;

    printf("繰り返す回数を指定してください\n");
    scanf("%d", &max); /* これ、2個目の引数が [count] だった場合ってどうなる...? → 代入もクソもなく、ただ1が入るだけ */

    do{
        printf("%d回目のループです", count);
        count++;
    }while(count <= max);

    printf("プログラムを終了します");
    return 0;
}

int main ()
{
    int get_int;

    printf("1~10の数値を入力してください");
    scanf("%d", &get_int);

    if (get_int > 5) printf("入力された数値は5より大きいです。");
    else if (get_int == 5) printf("入力された数値は5です。");
    else{
        printf("入力された数値は5より小さいです。");
    }
    return 0;
}

/* 論理演算子は、真偽の論理型であるブーリアン式（ブール式）を2つち合わせるための記号 */

/* 論理積 [&& AND] どちらも真である場合 */
int main()
{
    int bool1, bool2;

        printf("oか1を入力してください。これは1度目の入力です。");
        scanf("%d", &bool1);

        printf("ANDで評価するため、oか1を入力してください。これは最後の入力です。");
        scanf("%d", &bool2);

    printf("答えは%dです", (bool1)&&(bool2));   /* bool1, bool2 双方とも [1] つまり真だった場合のみ1が返される。 */

    return 0;
}

/* 論理和 [|| OR] どちらか一方が和である場合 */
int main ()
{
    int bool1, bool2;

        printf("oか1を入力してください。これは1度目の入力です。");
        scanf("%d", &bool1);

        printf("ORで評価するため、oか1を入力してください。これは最後の入力です。"); /* 論理和はOR */
        scanf("%d", &bool2);

    printf("答えは%dです", (bool1)||(bool2));  

    return 0;
}

/* 否定 [! NOT] 偽なら真、真なら偽 */
int main ()
{
    int bool1;

    printf("NOTで否定します。0か1を入力してください");
    scanf("%d", &bool1);
    printf("答えは%d", !(bool1));   /* 0なら [1＝真] が返る */

    return 0;
}

/* 排他的論理和 [|| & !&& XOR] 一方が真の場合のみ真を返す（※ [||] は、どちらか一方または両方が真である時に真を返す） */
int main()
{
    int bool1, bool2;
    
    printf("0か1を入力してください");
    scanf("%d", &bool1);
    printf("XORで否定します、0か1を入力して下さい");
    scanf("%d", &bool2);

    printf("答えは%dです", (bool1||bool2)&&!(bool1&&bool2));
}

/* continueステートメント */

int main ()
{
    int var;

    do{
        printf("数値を入力してください");
        scanf("%d",&var) ;

        if((var <= 10)||(100 >= var)) {
            printf("不正な数値です");
            continue;   /* ループステートメントの中に設置、continueが実行されるとループステートメントの先頭に戻る */
        }
        printf("入力を受付けました");
        break;
    }while(1);  /* なんのためのewhileステートメント？ もしこれがなかったらプログラムどんな感じになるんだろうか */

    return 0;
}

/* 駐車カードマシーンの仕組み */

int main()
{
    int var;
    int num <= 10;

    if(var == 1) {
        printf("駐車券を発行します、格納先の番号を入力してください");
        scanf("%d", &num);
        if((num <= 1)||(num >= 10)) printf("不正な値です、1以上10以下の数値で入力し直してください");
        continue;
        printf("所定の番号を記載した駐車カードを発行します。\n番号の車庫へ駐車してください");
    }
    else{
        printf("現在満車で、駐車できません");
    }

    return 0;
}

/* ギャルゲー フローチャート */

int main() 
{
    int opt;
    int count;

    printf("別に、〇〇くんの事嫌いなわけじゃないんだからね///\n");
    scanf("%d", &opt);
    switch(opt){
        case 1:
            printf("えっ...一体彼女は何を考えているんだ...");
            break;
        case 2:
            printf("なんなんだコイツめんどくさそうだなぁ");
            break;
        case 3:
            printf("この子... もしかして...");
            break;
        default:
            printf("1,2,3の数字から選んでね");
    }
    if(opt == 1){
        printf("なんだと思う?\tそれはね、私が...\n");
            for(count=0 ; count <=10000 ; count++){
            printf("〇〇くんのことが好き");
            count = 10000;
            printf("\"BAD SUCCESS\"");
        }
    }if else(opt == 2){
        printf("...私の気持ちをそんな風に踏み躙って...\n許せない！！");
        printf("\"選択を誤りました。最初の分岐に戻ります。\"");
        continue;
    }else{
        printf("分かってくれたのね！");
        printf("\"SUCCESS!!\"");
    }
    return 0;
}

/* [goto] NGな制御文 */

int main() 
{
    int count = 0;

loop: /* ラベル名 */
    printf("強制的に繰り返します");
    count++;
    if(count >= 10) goto ebd;
    goto end;
end:    /* ラベル名 */
    printf("[goto]が起動しました、プログラムを終了します。")
    return 0;
}


/*
    ・4つのデータ型（＝型宣言子）
        char（文字）, int（整数）, float（小数点）, double（有効桁数の大きい小数） ※ void型は除く
    ※ signed と unsigned の違いは、[ - (マイナス)]を含むかどうか
    ・（修飾子 変数の型 意味）
        ＝ %c char  文字
        ＝ %s char* 文字列
        ＝ %d int	10進整数
        ＝ %hd  short int	半分の精度の10進整数
        ＝ %ld	long int	倍精度の10進整数
        ＝ %u	unsigned int	符号なし10進整数
        ＝ %hu	unsigned short int	符号なし半分の精度の10進整数
        ＝ %lu	unsigned long int	符号なし倍精度の10進整数
        = %o    int 8進整数
        = %x	int	16進整数
        ＝ %f	float	実数
        ＝ %lf	double	倍精度の実数
        = %e	float	実数の指数表示
        = %g	float	実数の最適表示

    12345678.9の場合
        固定小数点方式	12345678.9	整数部8桁+小数部1桁
        浮動小数点方式	1.23456789×10˘8	仮数部9桁+指数部1桁
    1.23456789の場合
        固定小数点方式	1.23456789	整数部1桁+小数部8桁
        浮動小数点方式	1.23456789×10˘0	仮数部9桁+指数部1桁

    単精度 32bit
        倍精度 64bit, 半分の精度 16bit
*/

int main()
{
    short /* int */ var1 = 32767;
    long /* int */ var2 = 32768;
    unsigned short  /* int */ var3 = 40000;
    unsigned long  /* int */ var4 = 4294967295;
    long double var5 = 123456.789;

    printf("var1:\t %hd \n", var1); /* 変数の型：short int */
    printf("var2:\t %ld \n", var2); /* 変数の型：long int */
    printf("var3:\t %hu \n", var3); /* 変数の型：unsigned short int */
    printf("var4:\t %lu \n", var4); /* 変数の型：unsigned long int */
    printf("var5:\t %Lf \n", var5); /* 変数の型：long double */

    return 0;
}

/* 【サイングラフ】
    unsignedを指定することによってサインフラグも整数の表現に使えるようできる。
    だから、unsignedを指定することによって127しか表現できなかったcharが255まで表現できるようになる。（当然サインフラグがないのだから、負の数は表現できなくなります）
*/

int main (){
    signed char var ;

    printf("値を入力してください");
    scanf("%d", &var);

    printf("結果 = %d", var);

    return 0;
}

/* 
    型変換
    たとえば計算式の演算でint型とfloat型の演算が行なわれたら...？
        サイズ一覧...long double(%Lf) > double(%lf) > float(%g) > unsighned long(%lu) > long(%ld) > unsighned int(u%)
*/

int main()
{
    int var1 = 100;
    float var2 = 200.123;

    printf("%g", var1 + var2);

    return 0;
}

/* 代入型変換 */

int main()
{
    unsigned char var1 =  128;
    int var2 =  var1;    /* unsigned char型変数128を、int型変数 var2 に代入 */

    printf("%d", var2); /* int は、unsigned char よりも上位にあるためそのまま変換、問題なく128が抽出される */
    return 0;
}

int main()
{
    int var1 = 1279;
    unsigned char var2 = var1;

    printf("%fd",var2);
    
    /*
        ただし、charからintにする ＝ 上位のものを下位に変える場合にはデータが損失する。 
        unsigned charで扱える数値は255が最大なので、32ビットある10進数 1279 は、以下のように下位8ビット分だけが代入される
        2進数 1279 ＝ 0000 0000 0000 0000 0000 0100 1111 1111 となり、1111 1111 は 2進数で 255 に当たる
    */

   return 0;
}

int main()
{
    float var1 = 1234.5678;
    int var2 = var1;

    printf("%d", var2); /* 浮動小数点型float から 整数型int に代入すると、小数点以下を切り捨て。よって実行された数値は1234 */

    return 0;
}

/* 型キャスト...型キャストとは、一時的に変数の型を変換するもの
    ある一部分の演算で浮動小数点の小数部を切り捨て、int型として算術したい場合などに有効
*/

int main()
{
    float var = 1234.5678f;

    printf("全体 = %f\n", var);
    printf("実数 = %d\n", (int)var);    /* var の前に(int)を設置し、この時だけint型としている */
    printf("小数 = %g\n", var - (int)var);

    return 0;
}

/*
    接尾子 
        整数なら
            unsigned [U]
            long [L]
        浮動小数点なら
            float [F]
            long double [L]
    ※ 接尾子の[l]は大文字でもOK
*/

int main()
{
    printf("%ld", 500l); /* 整数 */
    printf("%Lg", 123.456L); /* 浮動小数 */

    return 0;
}

/* 16進数と8進数 */
int main(){
    int n;

    n = 10;    //10進数
    printf("n = %d \n", n);

    n = 012;    //8進数
    printf("n = %o \n", n);

    n = 0xA;    //16進数
    printf("n = %x \n", n);

        /* 実行結果 */
        n = 10
        n = 012
        n = 0xA

    return 0;

}

int main()
{
    printf("%x \n", 0xff + 0x1); //16進数は数値の前に [0x]
    printf("%o \n", 07);   //8進数は数値の前に [0]

    return 0;
}

/* 一次元配列 */

int main()
{
    int ary[3]; //インデックス(添字) ＝ 要素番号の指定

        ary[0] = 10;
        ary[1] = 100;
        ary[2] = 1000;

    printf("%d", ary[0]+ary[1]+ary[2]);

    return 0;
}

int main()
{
    int ary[3];
    int i;

    for(i=0 ; i <= 2 ; i++){    // 「i<=2」より「i<3」とした方が誤りもないし視認的にインデックス数が3だと認識しやすい
        ary[i] = 10*(i+1);
        printf("数値 = %d です\n", ary[i]); //実行されるのは、10, 20, 30 かな？
    }

    return 0;
}

int main()
{
    int ary[10] = {4, 2, 11, 4, 15, 7, 9, 12, 3, 6};
    int i, sum;

    for(i = 0 ; i < /*=*/ 10 ; i++){ // 4, 2, 11... と順に表示してくれている
        printf("ary[%d] = %3d \n", i, ary[i]); // %3d = 「3桁で表示しますよ」の意味だが、結局空欄が3個入るということ, %3cの場合は文字を4桁で表示し、空欄が3個入る
    }

    ptintf("\n");

    sum=0;
    for(i = 0 ; i </*=*/ 10 ; i++){
        sum += ary[i];    // sum = sum + a[i] ※sumは元来0と定義されているからね！
    }
    
    printf("sum= %3d", sum);

    return 0;
}

/*  【実行結果】
    a[0] =   4
    a[1] =   2
    a[2] =  11
    a[3] =   4
    a[4] =  15
    a[5] =   7
    a[6] =   9
    a[7] =  12
    a[8] =   3
    a[9] =   6

    sum  =  73
*/

int main()
{
    char c;

    for(C = 'a', c <= 'Z', c++){
        printf("%4c%4d", c, c);
    }

    /*
        %4cは文字を4桁で表示（空白が3個入る）
        %4dは整数値を4桁で表示（左側には空白が入る）
    */

    return 0;
}

/* 
    a  97   b  98   c  99   d 100   e 101   f 102   g 103   h 104   i 105   j 106
    k 107   l 108   m 109   n 110   o 111   p 112   q 113   r 114   s 115   t 116 
    u 117   v 118   w 119   x 120   y 121   z 122
*/

int main()
{
    int ary[N] = {4, 2, 11, 4, 15, 7, 9, 12, 3, 6};
    int ary2[N];
    int i;

    for(i = 0 ; i < N ; i++){
        ary2[i] = ary[(N-1)-i]; // → b[0] = a[N-1], b[1] = a[N-2],  ... b[N-2] = a[1], b[N-1] = a[0]
    for(i = 0 ; i < N ; i++){ //  ← なんでこの式繰り返すの...？
        printf("ary2[i] =\n %d", i, ary2[i]);
    }

    return 0;
}

#define N 10;

int main(void)
{
    int a[N] = {4, 2, 11, 4, 15, 7, 9, 12, 3, 6};
    int i, max;

    max = a[0]; //え？ これなんのための定義？ → まず、便宜的に最大値を a[0] とする
    for(i = 0 ; i < N ; i++){   //max には始めに a[0] の値が入っており， a[0] は max と比較する必要がないので， for文は i=1 から始まっている。
        if(max < a[i]){ //配列の要素を始めから見ていき、「それまでに見つけた最大値 max」と「今注目している要素 a[i]」とを比較し a[i] の方が大きければ max の値をそれで置き直す
            max = a[i];
        }
    }

    printf("MaxValue = %d\n", max);

    rerturn 0;
}

/* 多次元配列 通常は2次元配列程度が良識的なメモリ消費 */
int main(void)
{
    int ary[2][2];

    ary[0][0] = 10;
    ary[0][1] = 100;
    ary[1][0] = 1000;
    ary[1][1] = 10000;

    printf("%d \n %d \n", ary[0][0], ary[0][1]);
    printf("%d \n %d", ary[1][0], ary[1][1]);
}

/*
実行結果
    ary  0      1
    0   10      10
    1   1000    10000
*/

int main (void)
{
    char str[4];
    int count;

    str[0] = 'R';
    str[1] = 'e';
    str[2] = 'n';
    str[3] = 'a';

    for(count = 0 ; count < 4 ; count++){
        // printf("%d", count); ← これじゃ、順番に0, 1, 2, 3って出るだけ。あと、文字列なので%dではなく%c
        printf("%c", str[count]);

        return 0;
    }
}

int man (void)
{
    char str[4] = {'R', 'e', 'n', 'a'};

    /*
        = {'R', 'e', 'n', 'a'} をカットすれば ↓ このようになる...のか？
        もしかすると、全ての要素にChra型が入っていないかもしれない

        str[0] = 'R';
        str[1] = 'e';
        str[2] = 'n';
        str[3] = 'a';
    */

   printf(str);

   return 0;
}

/*  
    【ヌル文字】
    C言語の仕様で文字列は 0 で終わるというお約束があり、その時表示させる0のことをヌル文字と呼ぶ。
    つまり、文字列の終わりに要素を付け足してその内容を0にすればよい
    → printf("%s", int);
*/

int main()
{
    char str[128]; //String ＝ 文字列, Char型 = 文字

    printf("文字列を入力してください(127文字以内)\n"); //128は2進数で8桁(1000 000)で表され、char型のカバー領域を超えてしまう。...のではなく、単純にインデックス番号は [指定数-1]だからか ww
    scanf("%s", &str); //Char型なので [%c] としたいところだけど、C言語のお約束「文字列は0で終わる」をブレイクするために %s を使用。
    /* なんでここ [&str] じゃないんや... */
    prinf("【入力された文字列】\n %s", str);

    return 0;
}

/* ヌル文字をブレイクする[%s] ・ gets()関数 */

int main()
{
    char str[10];

    printf("文字列を入力してください(9文字以内)\n");    //インデックス番号は [指定数-1]だから、10-1 = 9文字以内
    gets(str); //文字列専用の入力関数で、[scanf] みたいなもの

    printf("入力された文字列：\n %s", str);

    return 0;
}

#define N 5; // [N] を使う場合には、← 定数定義が必要。そうしないと、以下の [N] が機能しない
int main(void)
{
    int ary[N] = {1, 10,100,1000, 10000}
    int i;

    for(i = 0 ; i < N ; i++){
        printf("要素番号ary[%d] \t = \t %d", i, ary[i]);
    }

    return 0;
}

#define N 17;
int main()
{
    char ary[N] = {'k','i','t','t','y','_','o','n','_','y','o','u','r','_','l','a','p'};
    int i;

    for(i = 0 ; i < N ; i++){
        printf("%c", ary[i]);
    }

    return 0;
}

int main()
{
    char str[17] = "ひざの上の同居人";  //  日本語は2バイト分なので、8文字 × 2 → （ヌルが加算されて）インデックス数は17

    printf("%s", str);

    return 0;
}

/*
    初期化は以下のように表してもOK
    int ary[][3] {
        {1,    5,    10},
        {50,   100,  500},
        {1000, 5000, 10000}
    };
*/

int main()
{
    int A = 0;
    int B = 0;
    int ary[3][3] = {
        1, 5, 10,
        50, 100, 500,
        1000, 5000, 10000
    };

    while(1){
        printf("ary[%d][%d]\t=\t%d\n", A, B, ary[A][B]);
        B++;
        if(B == 3){
            A++;
            B = 0;
        }
        if(A == 3) break; // ループ脱出
    }

    return 0;
}

/*
    上記のwhile制御文では、以下のようになる

    A       B
    ＝＝＝＝＝
    0       1
    0       2
    ---------   ここまでは、[num2++;]のところまで
    1       0
    2       0
    ---------   [if(B == 3);...]のところまで
    break

    ... と思ったけど、ちょっとわからん...まじでなんで？どこからやり直せば良いかわからんくらい発狂しそう
    実行結果はこんな感じになるらしい

    ary[0][0] = 1
    ary[0][1] = 5
    ary[0][2] = 10
    ary[1][0] = 50
    ary[1][1] = 100
    ary[1][2] = 500
    ary[2][0] = 1000
    ary[2][1] = 5000
    ary[2][2] = 10000  
*/

#define N1 3;
#define N2 3;

int main()
{
    int N1;
    int N2;
    int ary[N1][N2] = {
        1, 5, 10,
        50, 100, 500,
        1000, 5000, 10000
    };

    for(i = 0 ; i < N1 ; i++){
        int N1 = i;
        int N2 = (N1-1)-i;

        printf("ary[%d][%d]\t＝\t%d", N1, N2, ary[N1][N2]);
    }

    return 0;
}

/* サイズのない配列 */
int main()
{
    char str[] = "kitty on yur lap";    // [] を空っぽにしても表記可能。要素数え間違いを防げて、ヌル文字の容量も自動的に確保される。

    printf("%s", str);

    return 0;
}

#define N 3;
int main()
{
    int ary[N] = {10, 100, 1000};

    for(i = 0; i < N; i++){
        printf("ary[%d] \t = \t%d", i, ary[i]);
    }

    return 0;
}

int main()
{
    int ary[] = {10, 100, 1000};

    printf("%d\t%d\t%d\t",ary[0],ary[1],ary[2]);

    return 0;
}

int main()
{
    int ary[][2] = {
        {10,    100},
        {1000,  1000}
    };

    printf("%d\t%d\t%d\n",ary[0][0],ary[0][1]);
    printf("%d\t%d\t%d\t",ary[1][0],ary[1][1]);

    return 0;
}

/* 文字列の初期化 */
int main()
{
    char ary[6] = "Kyoto";  //ヌル文字を含めて、全部で7、6ではない。

    printf("%s", ary);  //string(文字列)を示す [%s]

    return 0;
}

int main()
{
    char ary[6] = {'k', 'y', 'o', 't', 'o'}};

    printf("%s", ary);

    return 0;
}

int main ()
{
    char ary1[] = "Yamaguchi University";
    char ary2[];
    int i;

    n = 0;
    while(" ary1[n] != '\0' "){ //ary[n] の値がヌル文字に触れた時、while制御文がbreakする。終端文字(ヌル文字)はシングルクォーテーションで ['\0'] と表記。
        ary1[n] = ary2[n];
        n++;
    };

    ary2[n] = 0;    //ary[0]にヌル文字が残っているので、余計なものが入る。それを打ち消すために ary2[n] = 0 で ary[n] の要素を0にする。
    printf("%s\n %sn", ary1 , ary2);

    return 0;
}

/*
    【文字列テーブル】
    ー文字列の配列を作成したい場合は、”文字列自体が配列” なので結果的に2次元になる。
    （ → char ary[6][6] = {'k', 'y', 'o', 't', 'o'},{'o', 's', 'a', 'k', 'a'}}; こういうことね。 ）
*/

int main()
{
    char name[3][7] = {"Rena", "Mai", "Takeru"}; // char name [A][B] → A:縦｜, B:横 ー

    printf("%s \n%s \n%s \n", name[0], name[1], name[2]);   // アクセスする時はインデックスは1次元だけで良い

    return 0;
}

int main()
{
    char cast [][2][30]= {  //横の[30]は便宜的に設定、どうせ余ってもヌル文字になるだけだから。また、1つ目の [] は3次元を示す。
        {"レイ(綾波)", "シンジ(碇)"},
        {"アスカ(式波)", "マリ(真希波)"}
    }

    printf("【キャスト】\n");
    printf("%s\t%s\n", cast[0][0], cast[0][1]);
    printf("%s\t%s", cast[1][0], cast[1][1]);

    return 0;
}

/* 引数・戻り値とはなんぞや */
int main(int, a, int, b)
// int：戻り値は整数型変数だというサイン,　main():関数,　(int, a, int, b)：関数に渡すデータ引数
{
    int i, ans; //i, ans：関数で使う変数

    ans = 1;
    for(i = 1, i <= b, i++){
        ans = ans*a;
    }

    return ans;
}

int main()
{
    char moji[2][3] = {"AB", "CD"};

    /*
        二次元配列になっているんだけど、分かりやすくすると本当はこうなっている。
        char moji[2][3(← ヌル文字)] = {
            {'A', 'B'},
            {'c', 'D'}
        };
    */

   for(i = 0 ; i < 2 ; i++){
       printf("%c\n", moji[0][i]);  //%sじゃなくて...?
   }

   for(i = 0 ; i < 2 ; i++){
       printf("%c", moji[1][i], moji[1][i]);  //%sじゃなくて...?
   }

   return 0;
}

/*
    実行結果 ↓
    AB
    CD
*/

int main()
{
    char moji[6][10] ={
        {"ABCDEFG"},
        {"abcdefg"},
        {"HIJK"},
        {"hijk"},
        {"LMNOPQRS"},
        {"lmnopqrs"}
    };

    for(i = 0; i < 6; i++){
        printf("moji[%d][]=\t%s", i, moji[i]); 
        
        /*
            moji[i][]としてしまっていたが、これだと２つ目のインデックスにヌルが自動配置されてしまう。
            pritf()関数の方で2つ目のインデックスが[]なのは、先頭んｐインデックス番号、つまり0を当てはめれば文字列全体を表示できるから。
        */
    };

    return 0;
}

/* ポインタ  *と& */
int main()
{
    int num;
    int *ptr;

    num = 5;

    ptirnf("整数型の変数numの「値」=%d\n", num);
    //整数型の変数numの値=5
    printf("整数型の変数numの「アドレス」= %x\n", &num);
    //整数型の変数numのアドレス=0012FF7C

    ptr = &num;

    printf("ポインタ型の変数ptr=%x\n", ptr);
    //ポインタ型の変数ptr=0012FF7C
    printf("ptrのアドレスに保存されている値", *ptr);
    //ptrのアドレスに保存されている値=5

    return 0;
}

/* メモリモデル */
int main()
{
    char c;
    int i;
    float f;
    double d;

    printf(
        "char\tc\t=%d byte\n"
        "int\ti\t=%d byte\n"
        "float\tf\t=%d byte\n"
        "double\td\t=%d byte\n",
        sizeof(c), sizeof(i), sizeof(f), sizeof(d)
    );

    /*
        char    c       1 byte
        int     i       4 byte
        float   f       4 byte
        double  d       8 byte
    */

    printf(
        "char\tc\t=%p\n" //【%p】はポインタ値(アドレス値とも)の表示を指定するもの
        "int\ti\t=%p\n"
        "float\tf\t=%p\n"
        "double\td\t=%p\n",
        &c, &i, &f, &d //【&(アンパサンド:アドレス演算子)】をつけると、その変数が保存されている領域(=アドレス)がどこかをポインタという形で得られる。
    );

    /*
        char    c       0xbfffdc37 
        int     i       0xbfffdc30
        float   f       0xbfffdc2c
        double  d       0xbfffdc20

        ↑ メインメモリ上のアドレス（数値冒頭の【ox】は16進数であることを示していて、これはつまりアドレスは16進数で表現されているということ。）
        ＝ アドレス【0xbfffdc37】は領域全体のうち先頭部分しか示さない。しかし、【&c】ならその全体を表現する。＝ 要領の大きさ(ここでは1byte=8bit)をも示す。
    */

    return 0;

    /* 以下で登場する【＊(間接参照演算子：ポインタ変数)】は、そのポインタ値が示す変数そのもの。 */

}

int main()
{
    int *p;
    
    printf("%d\n", sizeof(p));

    return 0;

    /*
        実行結果 4 (4byte、つまり32ビット)
    */

   return 0;
}

int main()
{
    int a, b; /* a, b は整数型変数 */
    int *p, *q; /* p, q は整数型を示すポイント型変数 */
    
    printf(
        "&a == %10p\n"
        "&b == %10p\n"
        "&p == %10p\n"
        "&q == %10p",
        &a, &b, &p, &q
    );

    /*
        （変数のアドレス）
        &a == 0xbfffec34
        &b == 0xbfffec30
        &p == 0xbfffec2c
        &q == 0xbfffec28
    */

   p = &a;
   q = &b; // p, qが示すものはa, bとなり、*p, *qを使ってa, ｂにアクセス可能になった。
   *p = 3;
   *q = *p +2;

    printf(
        "a == %10d"
        "b == %10d"
        "p == %10p"
        "q == %10p",
        a, b, p, q
    );

    /*
        a ==          3
        b ==          5
        p == 0xbfffec34
        q == 0xbfffec30
    */

   return 0;
}

/* 演習問題１（アドレスとポインタ） */
int main()
{   // 整数型変数 a, b, c と 整数型ポインタ変数 p, q, r を宣言
    int a, b, c;
    int *p, *q, *r;

    // p, q, r に a, b, c のアドレスを代入
    p = &a;
    q = &b;
    r = &c;

    // a, b にそれぞれ 3, 5 を代入（ただしp, q, r だけを用いること）
    *p = 3;
    *q = 5;
    // a+b の値を c に代入（ただしp, q, r だけを用いること）
    *r = *p + *q;

    // a, b, c の値を表示す（ただしp, q, r だけを用いること）
    printf(
        "a\t=\t%p\n"
        "b\t=\t%p\n"
        "c\t=\t%p\n",
        p, q, r
    );
    
    return 0;
}

int main()
{
    char str[3] = {'A', 'B', 127};
    int i;

    for(i = 0; i < 3; i++){
        printf("%p", &str[i]); // char型のstrは【*】がなくポインタ型ではないので、16進数のアドレスで表示するには【%p】で呼び出し、アドレス演算子【&】をつける
    }

    return 0;
}

int main()
{
    int *ptr, var;  // アスタリスクをつけることでポインタ変数が格納しているメモリアドレスの内容を参照できる。
    var = 10101;

    ptr = &var; // そもそもこれって【*ptr = var】じゃだめなの？ → この仮定の場合、数値をイコールにさせている。【ptr = &var】でやりたいのは、アドレスをイコールにすること。

    printf("ポインタに格納されている「数値」=%d\n", *ptr);
    printf("ポインタに格納されている「アドレス」=%x", ptr);

    return 0;
}

/* メモリアドレスの内容をポインタで参照できるということは、その内容に対してポインタから別のデータ上書きも可能 */
int main()
{
    int *ptr,var;
    var = 1000;

    ptr = &var;
    *ptr = 1010;    // ここでは【*ptr】はアドレスの内容、つまりそのアドレス内の数値を示している。

    printf("数値varの値 = %d", var);

    return 0;
}

int main()
{
    char *po;
    int var1, var2;

    var1 = 1028; //2進数で「10 0000 0100」
    po = &var1; //char型のポインタ【po】に、int型の変数【var】のアドレスをコピー
    var2 = *po; /* ここで間違った値がコピーされる、つまり数値の方をコピーしている */

    printf("%d", var2); //戻り値に【&】をつけると、メモリアドレスが表示される。
    return 0;

    /*
        1028は2進数で「10 0000 0100」。
        しかし、ポインタがchar型つまり8ビットまでしかコピーされない、これつまり「0000 0100」となり、10進数では4が表示される。
    */
}

/* ポインタ演算（ポインタの演算には整数による加減算のみ）*/
int main()
{
    int ary[2] = {1000, 2000};
    int *po;

    po = &ary[0]; // (1)アドレスをコピー
    printf("poのアドレス\t=\t%x", po);

    po++;
    printf("po++のアドレス\t=\t%x", po);
    printf("*poの数値\t=\t%d", *po);// (1)でアドレスは同じになっているので、*poで呼び出されるのはary[0]と同値

    /*
        実行結果
        ----------------
        po	    = 10fd00
        po++    = 10fd04
        *po++	= 2000
        ----------------
        「なぜインクメント1増えたのに、アドレスは4増えている？」
        po	= 10fd00 → 10進数で1113344
        po++	= 10fd04 → 10進数で1113348
        ...int型は4byteごとに並ぶので、1加算するとポインタの値も4バイト分、つまり1増える。
        例えば、floatやdoubleの場合だと1byteなので、1増えるとそのまま1増加する。
        （※ 呼び出しには、float：%f, double：%ld）
    */

    return 0;
}

void main()
{
    char c = 'a';            /* char型の変数 c を宣言し 'a' に初期化 */
    short i = -32768;        /* 半分の精度 */
    int j = 32767;
    long k =  2147483647L;   /* 倍精度long 型整数には L を付ける */
    double x = 1.2345;

    printf(
        "char c = %c\n"
        "short i = %d\n"
        "int j = %d\n"
        "long k = %ld\n"
        "doble x = %lf",
        c, i, j, k, x
    ):

    return 0;
}

/* 【*po++】はダメ、【*(po++)】にしよう */
int main()
{
    int ary[2] = {1000, 2000};
    int *ptr;

    ptr = &ary[0];
    (*ptr)++;

    printf("%d", ary[0]);

    return 0;
}

int main ()
{
    char ary[] = "kitty on your lap"; // 配列変数は、添え字を省略して配列変数名だけにするとそれは配列の先頭アドレスへのポインタを表す。

    printf("str[0]の内容\t=%c", *ary); // └ だから、ここで引数が【*ary】になっている...？
    printf("str[0]のアドレス\t=%x", str); // 【%s】にしたら、普通にary[0]の内容が出てくる

    return 0;
}

int main()
{
    int ary1[3] = {10,  20,  30};

    printf("インデックスで指定\t=%d,\t%d,\t%d\n", ary1[0], ary1[1], ary1[2]);

    int *ary2;
    ary1 = ary2;

    printf("\t間接参照で指定\t=%d,\t%d,\t%d", *ary2, *(ary2+1), *(ary2+2)); 
    printf(
        "ポインでもそのまま添字を指定し間接参照ができます。"
        "ary[0]\t=%d\n"
        "ary[1]\t=%d\n"
        "ary[2]\t=%d\n",
        ary2[0], ary2[1], ary1[2]
    );

    /*
        【実行結果】
        インデックスで指定 =10, 20, 30
        間接参照で指定 =10, 20, 30
        　ポインでもそのまま添字を指定し間接参照ができます。
        ary[0] =10
        ary[1] =20
        ary[2] =30

        メモ①
            「これ、【ary2[0]】とかじゃなくていいの？これでも呼び出しできるの...？」
           ary2に格納されているのは、あくまでary[0]のメモリアドレス。
           *(ary2+1)としているのは、+より*の方が演算子の優先順位的に高いため。
        メモ②
            ポインタでインデックス指定するときは、アドレスが配列変数である時だけ。
            なお、配列変数とは「複数個の変数に順番（番号）をつけて扱うこと」
    */

    return 0;
}

/* 多次元配列の間接参照
    多次元配列への添字指定の計算方法 *(pointa + (指定一次元添字 * 二次元要素数) + 指定二次元添字)
    つまり、多次元配列 ary[10][5] のうち ary[5][3] にアクセスしたい場合は次のようになる → *(pointa + ( 5 * 5 ) + 3);
*/

int main()
{
    int ary1[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    printf("インデックスで指定\t=%d,\t%d,\t%d\n", ary1[1][0], ary1[1][1], ary1[1][2]););

    int *ary2;
    ary1 = (int *)ary2; 

/*
    まじでなんで二次元配列になった途端キャスト演算子入るのかわからん...しかも、キャスト演算子(int *)ってなっててなぜかポインタ入ってるし...
    → 配列変数名のポインタには代入することはでないので、キャスト演算子を使っている。
*/

    printf("間接参照で指定\t=%d,\t%d,\t%d", *(ary2+(1*3)), *(ary2+(1*3)+1), *(ary2+(1*3)+2));   //この公式も、なんでそうなのかがわからん...

    return 0;
}

int main()
{
    int ary1[5] = {83, 3, 8, 90, 1}
    int *ary2;

    ary1 = ary2;

    for(i = 0; i < 5; i++ ){
        pritnf("ary1[%d]\t=\t%d\n", i, ary2[i]);
    }

    /*
        ary2[0] = 83 
        ary2[1] = 3
        ary2[2] = 8
        ary2[2] = 90
        ary2[4] = 1
    */

    return 0;
}

/* 配列変数の高度な扱い（「配列変数名だけの場合」はその配列の先頭アドレスへのポインタとなる。） */
int main ()
{
    int ary[] = {10, 20, 30, 40, 50, 0}; //【重要】配列変数の先頭アドレスを示すaryには、常にary[0]のアドレスが格納されている。

    int count = 0;
    while(ary[count]){
        count++;
        printf("ary[%d]\t=%d\n", count, *(ary+count)); // ary[0]のアドレスを直接ポインタ演算
    }
    return 0;
}

int main()
{
    char *str = "kitty on your lap"; // 文字型ポインタ変数を宣言することで、先頭アドレスである 'k' がポインタに代入される
    printf(
        "先頭のアドレス\t=\t%c\n" //【%c】1文字を表示させるフォーマット指定子
        "格納文字列\t=\t%s", //【%s】文字列を表示させるフォーマット指定子
        *str, str
    );

    /*
        先頭のアドレス = k
        格納文字列 = kitty on your lap
    */

    return 0;
}

/* あえて途中でヌル文字を入れることでポインタ演算で表示する文字列を操作 */
int main()
{
    char *str = "YUKI \0 RENA \0 MIMI":
    printf("%s\n %s\n %s\n", str, str+7, str+14); //...これどうなってるの？一度コンパイルしてみんとなんともいえん...

    return 0;
}

/* ポインタの配列 */
int main()
{
    int get_num;
    char *ary[] =  {"イギリス", "インド", "メキシコ"}; // ①

    printf(
        "Which foods do you want to have?\n"
        "1=フィッシュアンドチップス\n 2=ナン\n 3=タコス\n"
        "1~3の半角英数で教えてください。"
    );

    scanf("%d", &get_num); //アドレス演算子【&】は、変数が割り当てられているメモリのアドレスを得るもの。
    if((get_num >= 1) && (get_num <= 3)){
        printf("あなたは\t%s\tがお好きなのかもしれませんね！", ary[get_num - 1]); // ②
    }else{
        printf("不正な数値です");
    }

    /*
        char *ary[n] = {n, n+1, n+2,...}; の時
            「アドレス自体」を参照... ary[n] = &var;
            「アドレスの内容」を参照or代入... *ary[n] = var;
    */

    return 0;
}

/* ポインタのポインタ */
int main()
{
    char str[] = "kitty on your lap";
    char *str_p;
    char **str_pp;

    str_p = str; //アドレスを参照
    str_pp = &str_p; //アドレスを参照

    printf(
        "【文字型配列変数が示す値】"
        "配列先頭アドレス = %x\n" //フォーマット指定子【%x】は16進数を示す。
        "保持する文字列 = %s\n",
        str, str

        /*
            配列先頭アドレス = 64fdf0
            保持する文字列 = kitty on your lap
        */
    );

    printf(
        "【ポインタが示す値】"
        "ポインタアドレス = %x\n"
        "保持する値 = %x\n"
        "保持するアドレスの内容 = %s\n",
        &str_p, str_p, str_p // アドレス演算子【&】は、変数が割り当てられているアドレスを表示する。

        /*
            ポインタアドレス = 64fdec（ポインタ独自のアドレス）
            保持する値 = 64fdf0（文字型配列変数のアドレスと同じ）
            保持するアドレスの内容 = kitty on your lap
        */
    );

    printf(
        "【ポインタのポンタが示す値】"
        "保持する値 = %x\n"
        "保持する値が持つ値 = %x\n"
        "保持する値が持つ値の内容 = &s\n"
        str_pp, *str_pp, *str_pp // 【*(1000) = 10;】... アドレス(1000番地)に10を代入することを意味する。そもそも、間接演算子【*】はポインタが示すメモリの内容を変数として扱うためのもの。

        /*
            保持する値 = 64fdec（ポインタのアドレスと同じ...？ そらそうか、ただコピーしただけだから、「ポインタのポインタ」のアドレスは「ポインタ」のそれと同位置か。）
            保持する値が持つ値 = 64fdf0（文字型配列変数、ポインタのアドレスと同じ）
            保持する値が持つ値の内容 = kitty on your lap
        */
    );

    return 0;
}

/*
    【&】アドレス演算子
    ...変数が割り当てられているアドレスを表示する。
    （例：変数 x のメモリアドレスを示す場合、&x と表記する。この時 &x は変数 x を示すポインタとなる。）

    【*】間接演算子
    ...ポインタが示すメモリの内容を変数として扱うためのもの。単なる通し番号であるメモリアドレスに、変数という実体を与える演算子。
    （例：メモリアドレス「64fdf0」を変数とし、そこに10という値を代入するには、*(64fdf0)=10 と表記する。）
*/


int main()
{
    int x;

    x=1;
    scanf("%d", &x); /* 『変数xが格納されているアドレスがここに入るよー』という意味で、キーで入力される数値には実は【*】が入っているという！ */
    printf("x=%d\n", x);

    *(&x) = 0; /* ポインタを用いた代入。結局 x=0; と変わらない */
    printf("x=%d\n", x);

    /*
        x = 1
        x = 0
    */
}

int main()
{
    char str[] = "kitty on your lap";
    char *str_p; 
    char **str_pp;

    /*
        【str_p】【str_pp】自体が示すのはメモリアドレスであって、これらは元来変数ではない。
    */

    str_p = str; // 同じアドレスであることを示している。
    str_pp = &str_p; // ポインタのポインタである【str_p】は、打ち消しのため一度【&】でア通常のポインタのアドレスと一致させている

    printf("【文字型配列変数が示す値】");
    printf("配列先頭アドレス = %x\n",str);
    printf("保持する文字列 = %s\n", str);

    /*
        配列先頭アドレス = 64fdf0
        保持する文字列 = kitty on your lap
    */

    printf("【ポインタが示す値】");
    printf("ポインタアドレス = %x\n", &str_p); //得たいのはポインタのメモリアドレスなので、&でポインタ化
    printf("保持する値 = %x\n", str_p);
    printf("保持するアドレスの内容 = %s\n", str_p);

    /*
        ポインタアドレス = 64fdec（ポインタ独自のアドレス）
        保持する値 = 64fdf0（文字型配列変数のアドレスと同じ）
        保持するアドレスの内容 = kitty on your lap
    */

    printf("【ポインタのポンタが示す値】");
    printf("保持する値 = %x\n", str_pp);
    printf("保持する値が持つ値 = %x\n", *str_pp);
    printf("保持する値が持つ値の内容 = &s\n", *str_pp);

    /*
        保持する値 = 64fdec（ポインタのアドレスと同じ...？ そらそうか、ただコピーしただけだから、「ポインタのポインタ」のアドレスは「ポインタ」のそれと同位置か。）
        保持する値が持つ値 = 64fdf0（文字型配列変数、ポインタのアドレスと同じ）
        保持する値が持つ値の内容 = kitty on your lap
    */

    return 0;
}

/* Creste a function that displays the alphabet in lowercase, on a single line, by ascending order, starting from the letter 'a'. */

void ft_print_alphabet(void){
    char ft_putchar;
    
    for(ft_putchar >= 'a'; ft_putchar >= 'z'; ++ft_putchar){
        printf("%c", ft_putchar);
    }
    
    return;
};

void ft_print_alphabet(void){
    char ft_print_reverse_alphabet[50];
    int i;
    int num = 0;

    for(i = 1; str[i] != '\0'; i++){
        
    }

    return;
}

// └ だめじゃ、これ自作関数が必要や

/*
    戻り値の型 関数名 (引数リスト) {
    ステートメント...}

    ● 戻り値の型...
    ● 関数...動的にデータを処理する機能
    ● 引数...関数に渡される情報
*/

void function1(){
    printf("This is");
}

void function2(){
    function1();
    printf("a pen.\n");
}

int main(){
    function2();
    printf("この文章は「This is a pen.」にはさまれています。\n");
    function2();

    return 0;
}

/*
    【実行結果】
    This is a pen.
    この文章は「This is a pen.」にはさまれています。
    This is a pen.
*/

void func(void); //引数リスト【(void)】を欠いたプロトタイプ宣言の場合、「前方宣言」となり現代のC言語では認知されない。

int main(){
    func();

    return 0;
}

void func(){
    printf("main()関数の後ろに設置しても、func()関数が機能しています。");
}

void func(int list);  /* 戻り値の型 関数名 (型 変数名)】ここの int list は「仮引数」と呼ばれる。*/

int main(){
    int list;

    printf("関数に渡す値を入力してください。");
    scanf("%d", &list);

    func(list); /* 「変数list」が以下の func()関数に渡される。 */

    return 0;
}

void func(int list){ /* func(int list)関数内に限り、list という変数はmain()関数での値を引き継ぐ */
    printf("入力された値は%dです", list);
}

void func(char list); /* 仮引数の型がcharなので、入力されるint型整数値は最終的に表示されときchar型となり、上位8ビット以降は切り捨てられる。 */

int main(){
    int list;
    printf("数値を入力してください。");
    scanf("%d", &list);

    func(list);

    return 0;
}

void func(char list){
    printf("入力された数値は%dです", list);
}

/*
    仮引数がchar型であるのに、main()関数からfunc()関数に渡す引数はint型。
    → main()関数 と func()関数それぞれの変数listは全くの別物。
*/

void func(char str[], int var);

int main(){
    func("kitty on your lap", 9); // プロトタイプ宣言の2つの仮引数【char str[]】と【int var】に値を代入している。
    return 0;
}

void func(char str[], int var){
    printf("%s", str + var); // varが受け取った9は、strのインデックスとなる。＝ 9(-1)番目の「u」が表示される。
}

/* 値を呼び出し元に返す http://wisdom.sakura.ne.jp/programming/c/c28.html */

int main(void)
{
char C;

for (C = 'A';C <= 'Z';C++) {
printf("%c",C);
}
printf("\n");

return 0;
}