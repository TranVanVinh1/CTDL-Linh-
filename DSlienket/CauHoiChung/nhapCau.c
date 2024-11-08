Cau nhapCau(){
    Cau d = khoitao();
    char str[100];
    fgets(str,sizeof(str), stdin);
    for (int i=0;str[i]!='\0';i++){
        if (str[i] == '\n'){
            break;
        }
        chenKyTu(str[i], &d);
    }
    return d;
}