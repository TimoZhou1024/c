    /*
        周思远 23307130063
    */
    #include <stdio.h>
    #include <math.h>
    #include <string.h>

    int max(int a,int b){
        int max=(a>b)?a:b;
        return max;
    }

    int main(){
        char a[2048],b[2048];
        int answer[2048]={0},x[2048]={0},y[2048]={0};
        int carry=0;
        int j;
        int k;
        fgets(a,2048,stdin);
        fgets(b,2048,stdin);
        j=0;
        for(int i=strlen(a)-1;i>=0;i--,j++){
            x[j]=a[i]-'0';
        }
        j=0;
        for(int i=strlen(b)-1;i>=0;i--,j++){
            y[j]=b[i]-'0';
        }
        for(k=1;k<=max(strlen(a),strlen(b));k++){
            answer[k]=(x[k]+y[k]+carry)%10;
            carry=(x[k]+y[k]+carry)/10;
        }
        
        if(answer[max(strlen(a),strlen(b))]==0){
            for(int l=max(strlen(a),strlen(b))-1;l>=1;l--){
                printf("%d",answer[l]);
            }    
        }
        else{
            for(int l=max(strlen(a),strlen(b));l>=1;l--){
                printf("%d",answer[l]);
            }
        }

        return 0;
    }