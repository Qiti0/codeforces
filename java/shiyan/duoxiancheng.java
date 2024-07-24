import java.util.Scanner;
import java.util.concurrent.locks.Condition;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

class ziyuanchi {
    private int number = 0;
    private int N = 0;
    Lock lock;
    Condition full;
    Condition empty;

    public ziyuanchi(int N) {
        this.N = N;
        this.number = 0;
        this.lock = new ReentrantLock();
        this.full = lock.newCondition();
        this.empty = lock.newCondition();
    }

    public void shengchan(int n) {
        lock.lock();
        try {
            while (number >= N) {
                // empty.signalAll();
                System.out.println(Thread.currentThread().getName() + "\t" + "等待中......资源池已满");
                empty.signalAll();
                full.await();
            }
            int num = 1;
            if (number < N / 2) {
                num = 2;
            }
            System.out.print(Thread.currentThread().getName() + "\t");
            System.out.print("生产前的资源数\t" + number + "\t");
            System.out.print("生产的资源数\t" + num + "\t");
            number += num;
            System.out.print("生产后的资源数\t" + number + "\n");
            empty.signalAll();
        } catch (InterruptedException e) {
            e.printStackTrace();
        } finally {
            lock.unlock();
        }
    }

    public void xiaofei() {
        lock.lock();
        try {
            while (number <= 0) {
                // full.signalAll();
                System.out.println(Thread.currentThread().getName() + "\t" + "等待中.....资源池已空");
                full.signalAll();
                empty.await();
            }
            int num = 1;
            if (number > N / 2 && number >= 2) {
                num = 2;
            }
            System.out.print(Thread.currentThread().getName() + "\t");
            System.out.print("消费前的资源数\t" + number + "\t");
            System.out.print("消费的资源数\t" + num + "\t");
            number -= num;
            System.out.print("消费后的资源数\t" + number + "\n");
            full.signalAll();
        } catch (InterruptedException e) {
            e.printStackTrace();
        } finally {
            lock.unlock();
        }
    }

}

class Shengchanzhe implements Runnable {
    private ziyuanchi pool;
    private int t;
    private int n;

    public Shengchanzhe(ziyuanchi pool, int t, int n) {
        this.pool = pool;
        this.t = t;
        this.n = n;
    }

    public void run() {
        while (true) {
            try {
                Thread.sleep(t);
                pool.shengchan(n);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

class xiaofeizhe implements Runnable {
    private ziyuanchi pool;
    private int t;

    public xiaofeizhe(ziyuanchi pool, int t) {
        this.pool = pool;
        this.t = t;
    }

    public void run() {
        while (true) {
            try {
                Thread.sleep(t);
                pool.xiaofei();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

public class duoxiancheng {
    public static void main(String[] args) {

        int N = 10;
        int n1 = 5;
        int t1 = 1;
        int n2 = 3;
        int t2 = 2;
        System.out.println("请输入 资源池容量 N,生产者个数 n1,生产间隔 t1,消费者个数 n2,消费间隔 t2");
        Scanner scanner = new Scanner(System.in);
        N = scanner.nextInt();
        n1 = scanner.nextInt();
        t1 = scanner.nextInt() * 1000;
        n2 = scanner.nextInt();
        t2 = scanner.nextInt() * 1000;
        scanner.close();
        ziyuanchi pool = new ziyuanchi(N);
        for (int i = 1; i <= n1; i++) {
            new Thread(new Shengchanzhe(pool, t1, i), "生产者\t" + i).start();
        }
        for (int i = 1; i <= n2; i++) {
            new Thread(new xiaofeizhe(pool, t2), "消费者\t" + i).start();
        }
    }

}
