import java.util.*;
class threading extends Thread{
int thr;
int y;
threading(int th,int x){
thr=th;
y=x;
}
public void run()
{
System.out.println("Thread ->"+thr+" - "+y);
}
}
public class Java_Final {
public static void main(String[] args) throws InterruptedException {
// TODO Auto-generated method stub
Scanner sc=new Scanner(System.in);
System.out.print("enter the number");
int n=sc.nextInt();
//a,b,c
int a=0;
int b=1;
int c;
int t=0;
int d;
for(int i=0;i<n;i=i+2)
{
//if(t%2==0)
threading ob1=new threading(0,a);
//t++;
ob1.start();
ob1.join();
//else
threading ob2=new threading(1,b);
//t++;
ob2.start();
c=a+b;
d=c+b;
a=c;
b=d;
//d=c+b;
//a=b;
//b=c;
//c=d;
}
}
}